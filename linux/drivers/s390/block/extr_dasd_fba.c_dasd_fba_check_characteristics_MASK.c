
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int blk_bdsa; int blk_size; } ;
struct dasd_fba_private {TYPE_2__ rdc_data; } ;
struct dasd_device {struct ccw_device* cdev; int flags; int default_retries; int default_expires; struct dasd_fba_private* private; struct dasd_block* block; } ;
struct dasd_block {struct dasd_device* base; } ;
struct TYPE_3__ {int cu_model; int cu_type; int dev_model; int dev_type; } ;
struct ccw_device {TYPE_1__ id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ccw_device*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct dasd_block*) ;
 int VAR_9 ;
 int FUNC_2 (struct dasd_block*) ;
 struct dasd_block* FUNC_3 () ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct dasd_block*) ;
 int FUNC_6 (struct dasd_device*,int ,TYPE_2__*,int) ;
 int FUNC_7 (struct dasd_device*,int ) ;
 int FUNC_8 (struct ccw_device*,int ,int) ;
 int FUNC_9 (int *,char*,int ,int ,int ,int ,int,int,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (struct dasd_fba_private*) ;
 struct dasd_fba_private* FUNC_12 (int,int) ;
 int FUNC_13 (struct dasd_fba_private*,int ,int) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int
FUNC_15(struct dasd_device *VAR_10)
{
 struct dasd_fba_private *VAR_11 = VAR_10->private;
 struct ccw_device *VAR_12 = VAR_10->cdev;
 struct dasd_block *VAR_13;
 int VAR_14, VAR_15;

 if (!VAR_11) {
  VAR_11 = FUNC_12(sizeof(*VAR_11), VAR_8 | VAR_7);
  if (!VAR_11) {
   FUNC_10(&VAR_10->cdev->dev,
     "Allocating memory for private DASD "
     "data failed\n");
   return -VAR_5;
  }
  VAR_10->private = VAR_11;
 } else {
  FUNC_13(VAR_11, 0, sizeof(*VAR_11));
 }
 VAR_13 = FUNC_3();
 if (FUNC_1(VAR_13)) {
  FUNC_0(VAR_4, VAR_12, "%s", "could not allocate "
    "dasd block structure");
  VAR_10->private = ((void*)0);
  FUNC_11(VAR_11);
  return FUNC_2(VAR_13);
 }
 VAR_10->block = VAR_13;
 VAR_13->base = VAR_10;


 VAR_15 = FUNC_6(VAR_10, VAR_1,
      &VAR_11->rdc_data, 32);
 if (VAR_15) {
  FUNC_0(VAR_4, VAR_12, "Read device "
    "characteristics returned error %d", VAR_15);
  VAR_10->block = ((void*)0);
  FUNC_5(VAR_13);
  VAR_10->private = ((void*)0);
  FUNC_11(VAR_11);
  return VAR_15;
 }

 VAR_10->default_expires = VAR_0;
 VAR_10->default_retries = VAR_6;
 FUNC_7(VAR_10, VAR_9);

 VAR_14 = FUNC_4(VAR_10);
 if (VAR_14)
  FUNC_14(VAR_3, &VAR_10->flags);


 FUNC_8(VAR_12, VAR_2, 1);

 FUNC_9(&VAR_10->cdev->dev,
   "New FBA DASD %04X/%02X (CU %04X/%02X) with %d MB "
   "and %d B/blk%s\n",
   VAR_12->id.dev_type,
   VAR_12->id.dev_model,
   VAR_12->id.cu_type,
   VAR_12->id.cu_model,
   ((VAR_11->rdc_data.blk_bdsa *
     (VAR_11->rdc_data.blk_size >> 9)) >> 11),
   VAR_11->rdc_data.blk_size,
   VAR_14 ? ", read-only device" : "");
 return 0;
}
