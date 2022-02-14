
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pss_ctl_reg; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc *VAR_2)
{
 u32 VAR_3;




 VAR_3 = FUNC_0(VAR_2->ioc_regs.pss_ctl_reg);
 VAR_3 |= (VAR_0 | VAR_1);

 FUNC_1(VAR_3, VAR_2->ioc_regs.pss_ctl_reg);
}
