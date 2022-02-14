
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {int fc; } ;
struct pgid {TYPE_3__ inf; } ;
struct ccw_request {struct ccw1* cp; int lpm; } ;
struct ccw_device {TYPE_2__* private; } ;
struct ccw1 {int count; int flags; scalar_t__ cda; int cmd_code; } ;
typedef scalar_t__ addr_t ;
struct TYPE_5__ {TYPE_1__* dma_area; struct ccw_request req; } ;
struct TYPE_4__ {struct pgid* pgid; struct ccw1* iccws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ccw_device *VAR_2, u8 VAR_3)
{
 struct ccw_request *VAR_4 = &VAR_2->private->req;
 struct ccw1 *VAR_5 = VAR_2->private->dma_area->iccws;
 int VAR_6 = FUNC_0(VAR_4->lpm);
 struct pgid *VAR_7 = &VAR_2->private->dma_area->pgid[VAR_6];

 VAR_7->inf.fc = VAR_3;
 VAR_5->cmd_code = VAR_0;
 VAR_5->cda = (u32) (addr_t) VAR_7;
 VAR_5->count = sizeof(*VAR_7);
 VAR_5->flags = VAR_1;
 VAR_4->cp = VAR_5;
}
