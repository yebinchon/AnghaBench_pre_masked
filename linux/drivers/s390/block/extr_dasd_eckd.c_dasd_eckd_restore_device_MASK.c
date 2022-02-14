
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int temp_rdc_data ;
struct dasd_uid {int dummy; } ;
struct dasd_eckd_private {int rdc_data; int uid; } ;
struct dasd_eckd_characteristics {int dummy; } ;
struct dasd_device {TYPE_1__* cdev; struct dasd_eckd_private* private; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct dasd_device*,struct dasd_uid*) ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (struct dasd_device*) ;
 int FUNC_8 (struct dasd_device*) ;
 int FUNC_9 (struct dasd_device*) ;
 int FUNC_10 (struct dasd_device*,unsigned long) ;
 int FUNC_11 (struct dasd_device*,int ,struct dasd_eckd_characteristics*,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int *,struct dasd_uid*,int) ;
 int FUNC_15 (int *,struct dasd_eckd_characteristics*,int) ;
 int FUNC_16 (int ,unsigned long*) ;
 int FUNC_17 (int ,unsigned long) ;
 int FUNC_18 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_19(struct dasd_device *VAR_3)
{
 struct dasd_eckd_private *VAR_4 = VAR_3->private;
 struct dasd_eckd_characteristics VAR_5;
 int VAR_6;
 struct dasd_uid VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9 = 0;


 VAR_6 = FUNC_6(VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_2, VAR_3->cdev,
    "Read configuration data failed, rc=%d", VAR_6);
  goto out_err;
 }

 FUNC_5(VAR_3, &VAR_7);

 VAR_6 = FUNC_4(VAR_3);
 FUNC_17(FUNC_13(VAR_3->cdev), VAR_8);
 if (FUNC_14(&VAR_4->uid, &VAR_7, sizeof(struct dasd_uid)) != 0)
  FUNC_12(&VAR_3->cdev->dev, "The UID of the DASD has "
   "changed\n");
 FUNC_18(FUNC_13(VAR_3->cdev), VAR_8);
 if (VAR_6)
  goto out_err;


 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6)
  goto out_err;

 FUNC_16(VAR_0, &VAR_9);
 FUNC_10(VAR_3, VAR_9);


 VAR_6 = FUNC_6(VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_2, VAR_3->cdev,
   "Read configuration data failed, rc=%d", VAR_6);
  goto out_err2;
 }


 FUNC_8(VAR_3);


 FUNC_9(VAR_3);


 FUNC_7(VAR_3);


 VAR_6 = FUNC_11(VAR_3, VAR_1,
      &VAR_5, 64);
 if (VAR_6) {
  FUNC_0(VAR_2, VAR_3->cdev,
    "Read device characteristic failed, rc=%d", VAR_6);
  goto out_err2;
 }
 FUNC_17(FUNC_13(VAR_3->cdev), VAR_8);
 FUNC_15(&VAR_4->rdc_data, &VAR_5, sizeof(VAR_5));
 FUNC_18(FUNC_13(VAR_3->cdev), VAR_8);


 FUNC_1(VAR_3);

 return 0;

out_err2:
 FUNC_2(VAR_3);
out_err:
 return -1;
}
