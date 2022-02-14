
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_uid {int dummy; } ;
struct dasd_eckd_private {struct dasd_uid uid; } ;
struct dasd_device {int cdev; struct dasd_eckd_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct dasd_device *VAR_1, struct dasd_uid *VAR_2)
{
 struct dasd_eckd_private *VAR_3 = VAR_1->private;
 unsigned long VAR_4;

 if (VAR_3) {
  FUNC_1(FUNC_0(VAR_1->cdev), VAR_4);
  *VAR_2 = VAR_3->uid;
  FUNC_2(FUNC_0(VAR_1->cdev), VAR_4);
  return 0;
 }
 return -VAR_0;
}
