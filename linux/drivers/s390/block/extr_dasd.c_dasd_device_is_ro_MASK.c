
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diag210 {int vrdclen; int vrdcvfla; int vrdcdvno; } ;
struct dasd_device {int cdev; } ;
struct ccw_dev_id {int devno; } ;
typedef int diag_data ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ccw_dev_id*) ;
 int FUNC_2 (struct diag210*) ;
 int FUNC_3 (struct diag210*,int ,int) ;

int FUNC_4(struct dasd_device *VAR_2)
{
 struct ccw_dev_id VAR_3;
 struct diag210 VAR_4;
 int VAR_5;

 if (!VAR_1)
  return 0;
 FUNC_1(VAR_2->cdev, &VAR_3);
 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.vrdcdvno = VAR_3.devno;
 VAR_4.vrdclen = sizeof(VAR_4);
 VAR_5 = FUNC_2(&VAR_4);
 if (VAR_5 == 0 || VAR_5 == 2) {
  return VAR_4.vrdcvfla & 0x80;
 } else {
  FUNC_0(VAR_0, "diag210 failed for dev=%04x with rc=%d",
     VAR_3.devno, VAR_5);
  return 0;
 }
}
