
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_disk {unsigned int capacity; unsigned int max_xfer_blocks; unsigned int opt_xfer_blocks; scalar_t__ first_scan; scalar_t__ media_present; TYPE_1__* disk; struct scsi_device* device; } ;
struct scsi_device {scalar_t__ use_16_for_rw; } ;
struct TYPE_4__ {unsigned int max_dev_sectors; unsigned int max_sectors; unsigned int max_hw_sectors; int io_opt; } ;
struct request_queue {TYPE_2__ limits; } ;
struct gendisk {int dummy; } ;
typedef unsigned int sector_t ;
struct TYPE_3__ {struct request_queue* queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (int ,struct request_queue*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct scsi_device*,unsigned int) ;
 unsigned int FUNC_6 (struct scsi_device*,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,int ) ;
 unsigned int FUNC_8 (unsigned int,unsigned int) ;
 int FUNC_9 (struct request_queue*) ;
 int FUNC_10 (struct scsi_device*) ;
 scalar_t__ FUNC_11 (struct scsi_device*) ;
 struct scsi_disk* FUNC_12 (struct gendisk*) ;
 int FUNC_13 (struct scsi_disk*) ;
 int FUNC_14 (struct scsi_disk*,unsigned int) ;
 int FUNC_15 (int ,struct scsi_disk*,char*) ;
 int FUNC_16 (struct scsi_disk*,unsigned char*) ;
 int FUNC_17 (struct scsi_disk*) ;
 int FUNC_18 (struct scsi_disk*) ;
 int FUNC_19 (struct scsi_disk*) ;
 int FUNC_20 (struct scsi_disk*,unsigned char*) ;
 int FUNC_21 (struct scsi_disk*,unsigned char*) ;
 int FUNC_22 (struct scsi_disk*,unsigned char*) ;
 int FUNC_23 (struct scsi_disk*,unsigned char*) ;
 int FUNC_24 (struct scsi_disk*,unsigned char*) ;
 int FUNC_25 (struct scsi_disk*) ;
 int FUNC_26 (struct scsi_disk*) ;
 scalar_t__ FUNC_27 (struct scsi_disk*,unsigned int) ;
 int FUNC_28 (struct scsi_disk*,unsigned char*) ;
 int FUNC_29 (struct gendisk*,unsigned int) ;

__attribute__((used)) static int FUNC_30(struct gendisk *VAR_9)
{
 struct scsi_disk *VAR_10 = FUNC_12(VAR_9);
 struct scsi_device *VAR_11 = VAR_10->device;
 struct request_queue *VAR_12 = VAR_10->disk->queue;
 sector_t VAR_13 = VAR_10->capacity;
 unsigned char *VAR_14;
 unsigned int VAR_15, VAR_16;

 FUNC_0(3, FUNC_15(VAR_2, VAR_10,
          "sd_revalidate_disk\n"));





 if (!FUNC_10(VAR_11))
  goto out;

 VAR_14 = FUNC_4(VAR_6, VAR_1);
 if (!VAR_14) {
  FUNC_15(VAR_3, VAR_10, "sd_revalidate_disk: Memory "
     "allocation failure.\n");
  goto out;
 }

 FUNC_26(VAR_10);





 if (VAR_10->media_present) {
  FUNC_21(VAR_10, VAR_14);







  FUNC_1(VAR_5, VAR_12);
  FUNC_2(VAR_4, VAR_12);

  if (FUNC_11(VAR_11)) {
   FUNC_19(VAR_10);
   FUNC_18(VAR_10);
   FUNC_17(VAR_10);
   FUNC_28(VAR_10, VAR_14);
  }

  FUNC_14(VAR_10, VAR_13);

  FUNC_23(VAR_10, VAR_14);
  FUNC_20(VAR_10, VAR_14);
  FUNC_16(VAR_10, VAR_14);
  FUNC_24(VAR_10, VAR_14);
  FUNC_22(VAR_10, VAR_14);
 }





 FUNC_25(VAR_10);


 VAR_15 = VAR_11->use_16_for_rw ? VAR_8 : VAR_7;


 VAR_15 = FUNC_8(VAR_15, VAR_10->max_xfer_blocks);
 VAR_12->limits.max_dev_sectors = FUNC_6(VAR_11, VAR_15);

 if (FUNC_27(VAR_10, VAR_15)) {
  VAR_12->limits.io_opt = FUNC_5(VAR_11, VAR_10->opt_xfer_blocks);
  VAR_16 = FUNC_6(VAR_11, VAR_10->opt_xfer_blocks);
 } else
  VAR_16 = FUNC_8(FUNC_6(VAR_11, VAR_15),
          (sector_t)VAR_0);


 VAR_16 = FUNC_7(VAR_16, FUNC_9(VAR_12));





 if (VAR_10->first_scan ||
     VAR_12->limits.max_sectors > VAR_12->limits.max_dev_sectors ||
     VAR_12->limits.max_sectors > VAR_12->limits.max_hw_sectors)
  VAR_12->limits.max_sectors = VAR_16;

 VAR_10->first_scan = 0;

 FUNC_29(VAR_9, FUNC_6(VAR_11, VAR_10->capacity));
 FUNC_13(VAR_10);
 FUNC_3(VAR_14);

 out:
 return 0;
}
