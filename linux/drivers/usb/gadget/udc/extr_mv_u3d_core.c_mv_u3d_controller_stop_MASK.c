
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_u3d {TYPE_2__* op_regs; int dev; TYPE_1__* vuc_regs; scalar_t__ vbus_valid_detect; int clock_gating; } ;
struct TYPE_4__ {int usbcmd; } ;
struct TYPE_3__ {int setuplock; int linkchange; int trbcomplete; int trbunderrun; int endcomplete; int intrenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct mv_u3d *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2->clock_gating && VAR_2->vbus_valid_detect)
  FUNC_2(VAR_1,
    &VAR_2->vuc_regs->intrenable);
 else
  FUNC_2(0, &VAR_2->vuc_regs->intrenable);
 FUNC_2(~0x0, &VAR_2->vuc_regs->endcomplete);
 FUNC_2(~0x0, &VAR_2->vuc_regs->trbunderrun);
 FUNC_2(~0x0, &VAR_2->vuc_regs->trbcomplete);
 FUNC_2(~0x0, &VAR_2->vuc_regs->linkchange);
 FUNC_2(0x1, &VAR_2->vuc_regs->setuplock);


 VAR_3 = FUNC_1(&VAR_2->op_regs->usbcmd);
 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_3, &VAR_2->op_regs->usbcmd);
 FUNC_0(VAR_2->dev, "after u3d_stop, USBCMD 0x%x\n",
  FUNC_1(&VAR_2->op_regs->usbcmd));
}
