
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int flags; struct dasd_block* block; } ;
struct dasd_block {scalar_t__ bdev; int open_count; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct dasd_device*) ;
 struct dasd_device* FUNC_6 (struct ccw_device*) ;
 int FUNC_7 (struct dasd_block*) ;
 int FUNC_8 (struct dasd_device*) ;
 int FUNC_9 (struct dasd_device*) ;
 int FUNC_10 (struct dasd_device*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct ccw_device*) ;
 int FUNC_14 (char*,int ,...) ;
 int FUNC_15 (int ,int *) ;
 int VAR_6 ;
 int FUNC_16 (int ,unsigned long) ;
 int FUNC_17 (int ,unsigned long) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,int ) ;

int FUNC_22(struct ccw_device *VAR_7)
{
 struct dasd_device *VAR_8;
 struct dasd_block *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;

 VAR_12 = 0;
 FUNC_16(FUNC_13(VAR_7), VAR_13);
 VAR_8 = FUNC_6(VAR_7);
 if (FUNC_0(VAR_8)) {
  FUNC_17(FUNC_13(VAR_7), VAR_13);
  return FUNC_1(VAR_8);
 }







 if (VAR_8->block) {
  VAR_10 = VAR_8->block->bdev ? 0 : -1;
  VAR_11 = FUNC_3(&VAR_8->block->open_count);
  if (VAR_11 > VAR_10) {
   if (VAR_11 > 0)
    FUNC_14("%s: The DASD cannot be set offline with open count %i\n",
     FUNC_11(&VAR_7->dev), VAR_11);
   else
    FUNC_14("%s: The DASD cannot be set offline while it is in use\n",
     FUNC_11(&VAR_7->dev));
   VAR_12 = -VAR_4;
   goto out_err;
  }
 }







 if (FUNC_20(VAR_0, &VAR_8->flags)) {
  if (FUNC_20(VAR_2, &VAR_8->flags)) {
   FUNC_4(VAR_2,
      &VAR_8->flags);
  } else {
   VAR_12 = -VAR_4;
   goto out_err;
  }
 }
 FUNC_15(VAR_0, &VAR_8->flags);






 if (FUNC_18(VAR_1, &VAR_8->flags) &&
     !FUNC_19(VAR_2, &VAR_8->flags)) {

  FUNC_17(FUNC_13(VAR_7), VAR_13);






  if (VAR_8->block) {
   VAR_12 = FUNC_12(VAR_8->block->bdev);
   if (VAR_12 != 0)
    goto interrupted;
  }
  FUNC_9(VAR_8);
  VAR_12 = FUNC_21(VAR_6,
           FUNC_2(VAR_8));
  if (VAR_12 != 0)
   goto interrupted;
  FUNC_16(FUNC_13(VAR_7), VAR_13);
  if (!FUNC_20(VAR_2, &VAR_8->flags)) {
   VAR_12 = -VAR_5;
   goto out_err;
  }
  FUNC_4(VAR_2, &VAR_8->flags);
 }
 FUNC_17(FUNC_13(VAR_7), VAR_13);

 FUNC_10(VAR_8, VAR_3);

 VAR_9 = VAR_8->block;
 FUNC_5(VAR_8);




 if (VAR_9)
  FUNC_7(VAR_9);

 return 0;

interrupted:

 FUNC_16(FUNC_13(VAR_7), VAR_13);
 FUNC_4(VAR_2, &VAR_8->flags);
 FUNC_4(VAR_0, &VAR_8->flags);
out_err:
 FUNC_8(VAR_8);
 FUNC_17(FUNC_13(VAR_7), VAR_13);
 return VAR_12;
}
