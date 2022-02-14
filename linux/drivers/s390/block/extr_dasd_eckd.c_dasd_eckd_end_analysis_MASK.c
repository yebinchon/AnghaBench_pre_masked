
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eckd_count {int kl; int dl; scalar_t__ cyl; scalar_t__ head; int record; } ;
struct TYPE_4__ {unsigned long trk_per_cyl; } ;
struct dasd_eckd_private {int init_cqr_status; int uses_cdl; TYPE_2__ rdc_data; scalar_t__ real_cyl; struct eckd_count* count_area; } ;
struct dasd_device {int features; TYPE_1__* cdev; struct dasd_eckd_private* private; } ;
struct dasd_ccw_req {int dummy; } ;
struct dasd_block {unsigned int bp_block; int s2b_shift; unsigned long blocks; struct dasd_device* base; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int* VAR_8 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_5 (struct dasd_ccw_req*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int,unsigned long,unsigned int,char*) ;
 int FUNC_8 (int *,char*) ;
 unsigned int FUNC_9 (TYPE_2__*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct dasd_block *VAR_9)
{
 struct dasd_device *VAR_10 = VAR_9->base;
 struct dasd_eckd_private *VAR_11 = VAR_10->private;
 struct eckd_count *VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 struct dasd_ccw_req *VAR_17;

 VAR_15 = VAR_11->init_cqr_status;
 VAR_11->init_cqr_status = -1;
 if (VAR_15 == VAR_5) {

  VAR_17 = FUNC_1(VAR_10);
  FUNC_5(VAR_17);
  VAR_15 = FUNC_2(VAR_17);
  FUNC_4(VAR_17, VAR_10);
 }

 if (VAR_10->features & VAR_0) {
  VAR_9->bp_block = VAR_1;
  VAR_14 = VAR_2;
  VAR_9->s2b_shift = 3;
  goto raw;
 }

 if (VAR_15 == VAR_6) {
  FUNC_8(&VAR_10->cdev->dev, "The DASD is not formatted\n");
  return -VAR_4;
 } else if (VAR_15 == VAR_5) {
  FUNC_6(&VAR_10->cdev->dev,
   "Detecting the DASD disk layout failed because "
   "of an I/O error\n");
  return -VAR_3;
 }

 VAR_11->uses_cdl = 1;

 VAR_12 = ((void*)0);
 for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
  if (VAR_11->count_area[VAR_16].kl != 4 ||
      VAR_11->count_area[VAR_16].dl != FUNC_3(VAR_16) - 4 ||
      VAR_11->count_area[VAR_16].cyl != 0 ||
      VAR_11->count_area[VAR_16].head != VAR_7[VAR_16] ||
      VAR_11->count_area[VAR_16].record != VAR_8[VAR_16]) {
   VAR_11->uses_cdl = 0;
   break;
  }
 }
 if (VAR_16 == 3)
  VAR_12 = &VAR_11->count_area[3];

 if (VAR_11->uses_cdl == 0) {
  for (VAR_16 = 0; VAR_16 < 5; VAR_16++) {
   if ((VAR_11->count_area[VAR_16].kl != 0) ||
       (VAR_11->count_area[VAR_16].dl !=
        VAR_11->count_area[0].dl) ||
       VAR_11->count_area[VAR_16].cyl != 0 ||
       VAR_11->count_area[VAR_16].head != VAR_7[VAR_16] ||
       VAR_11->count_area[VAR_16].record != VAR_8[VAR_16])
    break;
  }
  if (VAR_16 == 5)
   VAR_12 = &VAR_11->count_area[0];
 } else {
  if (VAR_11->count_area[3].record == 1)
   FUNC_8(&VAR_10->cdev->dev,
     "Track 0 has no records following the VTOC\n");
 }

 if (VAR_12 != ((void*)0) && VAR_12->kl == 0) {

  if (FUNC_0(VAR_12->dl) == 0)
   VAR_9->bp_block = VAR_12->dl;
 }
 if (VAR_9->bp_block == 0) {
  FUNC_8(&VAR_10->cdev->dev,
    "The disk layout of the DASD is not supported\n");
  return -VAR_4;
 }
 VAR_9->s2b_shift = 0;
 for (VAR_13 = 512; VAR_13 < VAR_9->bp_block; VAR_13 = VAR_13 << 1)
  VAR_9->s2b_shift++;

 VAR_14 = FUNC_9(&VAR_11->rdc_data, 0, VAR_9->bp_block);

raw:
 VAR_9->blocks = ((unsigned long) VAR_11->real_cyl *
     VAR_11->rdc_data.trk_per_cyl *
     VAR_14);

 FUNC_7(&VAR_10->cdev->dev,
   "DASD with %u KB/block, %lu KB total size, %u KB/track, "
   "%s\n", (VAR_9->bp_block >> 10),
   (((unsigned long) VAR_11->real_cyl *
     VAR_11->rdc_data.trk_per_cyl *
     VAR_14 * (VAR_9->bp_block >> 9)) >> 1),
   ((VAR_14 * VAR_9->bp_block) >> 10),
   VAR_11->uses_cdl ?
   "compatible disk layout" : "linux disk layout");

 return 0;
}
