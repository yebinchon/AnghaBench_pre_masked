
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct ccw_request {struct ccw1* cp; } ;
struct ccw_device {TYPE_2__* private; } ;
struct ccw1 {int count; scalar_t__ flags; void* cda; int cmd_code; } ;
typedef scalar_t__ addr_t ;
struct TYPE_4__ {TYPE_1__* dma_area; struct ccw_request req; } ;
struct TYPE_3__ {struct ccw1* iccws; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ccw_device *VAR_3, void *VAR_4, void *VAR_5)
{
 struct ccw_request *VAR_6 = &VAR_3->private->req;
 struct ccw1 *VAR_7 = VAR_3->private->dma_area->iccws;

 VAR_7[0].cmd_code = VAR_1;
 VAR_7[0].cda = (u32) (addr_t) VAR_4;
 VAR_7[0].count = 32;
 VAR_7[0].flags = VAR_2;
 VAR_7[1].cmd_code = VAR_0;
 VAR_7[1].cda = (u32) (addr_t) VAR_5;
 VAR_7[1].count = 32;
 VAR_7[1].flags = 0;
 VAR_6->cp = VAR_7;
}
