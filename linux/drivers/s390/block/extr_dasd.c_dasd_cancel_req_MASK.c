
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; } ;
struct dasd_ccw_req {struct dasd_device* startdev; } ;


 int FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

int FUNC_4(struct dasd_ccw_req *VAR_0)
{
 struct dasd_device *VAR_1 = VAR_0->startdev;
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(FUNC_1(VAR_1->cdev), VAR_2);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_3(FUNC_1(VAR_1->cdev), VAR_2);
 return VAR_3;
}
