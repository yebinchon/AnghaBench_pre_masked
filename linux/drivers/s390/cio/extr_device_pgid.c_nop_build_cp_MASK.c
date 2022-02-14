
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccw_request {struct ccw1* cp; } ;
struct ccw_device {TYPE_2__* private; } ;
struct ccw1 {int flags; scalar_t__ count; scalar_t__ cda; int cmd_code; } ;
struct TYPE_4__ {TYPE_1__* dma_area; struct ccw_request req; } ;
struct TYPE_3__ {struct ccw1* iccws; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ccw_device *VAR_2)
{
 struct ccw_request *VAR_3 = &VAR_2->private->req;
 struct ccw1 *VAR_4 = VAR_2->private->dma_area->iccws;

 VAR_4->cmd_code = VAR_0;
 VAR_4->cda = 0;
 VAR_4->count = 0;
 VAR_4->flags = VAR_1;
 VAR_3->cp = VAR_4;
}
