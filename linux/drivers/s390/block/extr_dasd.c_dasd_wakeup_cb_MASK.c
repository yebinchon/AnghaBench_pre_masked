
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_ccw_req {TYPE_1__* startdev; int callback_data; } ;
struct TYPE_2__ {int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dasd_ccw_req *VAR_2, void *VAR_3)
{
 FUNC_1(FUNC_0(VAR_2->startdev->cdev));
 VAR_2->callback_data = VAR_0;
 FUNC_2(FUNC_0(VAR_2->startdev->cdev));
 FUNC_3(&VAR_1);
}
