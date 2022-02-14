
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; int ccw_queue; } ;
struct dasd_ccw_req {int devlist; int status; struct dasd_device* startdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

void FUNC_5(struct dasd_ccw_req *VAR_1)
{
 struct dasd_device *VAR_2;
 unsigned long VAR_3;

 VAR_2 = VAR_1->startdev;
 FUNC_3(FUNC_1(VAR_2->cdev), VAR_3);
 VAR_1->status = VAR_0;
 FUNC_2(&VAR_1->devlist, &VAR_2->ccw_queue);

 FUNC_0(VAR_2);
 FUNC_4(FUNC_1(VAR_2->cdev), VAR_3);
}
