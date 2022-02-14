
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int g_idx; scalar_t__ wedged; scalar_t__ stalled; scalar_t__ regs; } ;
struct ast_vhub_ep {scalar_t__ d_idx; TYPE_2__* vhub; TYPE_1__ epn; } ;
struct TYPE_4__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct ast_vhub_ep *VAR_3)
{
 u32 VAR_4;

 if (FUNC_1(VAR_3->d_idx == 0))
  return;
 VAR_4 = FUNC_2(VAR_3->epn.regs + VAR_0);
 if (VAR_3->epn.stalled || VAR_3->epn.wedged)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;
 FUNC_3(VAR_4, VAR_3->epn.regs + VAR_0);

 if (!VAR_3->epn.stalled && !VAR_3->epn.wedged)
  FUNC_3(FUNC_0(VAR_3->epn.g_idx),
         VAR_3->vhub->regs + VAR_1);
}
