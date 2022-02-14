
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * cpe_q_ctrl; } ;
struct TYPE_4__ {TYPE_1__ bfa_regs; } ;
struct bfa_s {TYPE_2__ iocfc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct bfa_s *VAR_0, int VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0->iocfc.bfa_regs.cpe_q_ctrl[VAR_1]);
 FUNC_1(VAR_2, VAR_0->iocfc.bfa_regs.cpe_q_ctrl[VAR_1]);
}
