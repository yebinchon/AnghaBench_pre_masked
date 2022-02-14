
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ccw_device {TYPE_3__* private; } ;
struct TYPE_8__ {int cu_type; } ;
struct TYPE_5__ {scalar_t__ esid; } ;
struct TYPE_7__ {TYPE_2__* dma_area; TYPE_1__ flags; } ;
struct TYPE_6__ {TYPE_4__ senseid; } ;


 int FUNC_0 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ccw_device *VAR_0)
{
 VAR_0->private->flags.esid = 0;

 FUNC_0(&VAR_0->private->dma_area->senseid, 0,
        sizeof(VAR_0->private->dma_area->senseid));
 VAR_0->private->dma_area->senseid.cu_type = 0xffff;
}
