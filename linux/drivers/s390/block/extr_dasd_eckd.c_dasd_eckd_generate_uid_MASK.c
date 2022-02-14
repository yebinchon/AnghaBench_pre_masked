
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_private {int gneq; int ned; } ;
struct dasd_device {int cdev; struct dasd_eckd_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_eckd_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_1)
{
 struct dasd_eckd_private *VAR_2 = VAR_1->private;
 unsigned long VAR_3;

 if (!VAR_2)
  return -VAR_0;
 if (!VAR_2->ned || !VAR_2->gneq)
  return -VAR_0;
 FUNC_2(FUNC_1(VAR_1->cdev), VAR_3);
 FUNC_0(VAR_2);
 FUNC_3(FUNC_1(VAR_1->cdev), VAR_3);
 return 0;
}
