
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pss_ctl_reg; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc *VAR_4)
{
 u32 VAR_5;
 int VAR_6;


 VAR_5 = FUNC_2(VAR_4->ioc_regs.pss_ctl_reg);
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_2;




 VAR_5 |= FUNC_1(3UL);
 FUNC_3(VAR_5, VAR_4->ioc_regs.pss_ctl_reg);




 VAR_6 = 0;
 do {
  VAR_5 = FUNC_2(VAR_4->ioc_regs.pss_ctl_reg);
  VAR_6++;
 } while (!(VAR_5 & VAR_1) && (VAR_6 < 10000));





 FUNC_0(!(VAR_5 & VAR_1));

 VAR_5 &= ~(VAR_1 | VAR_2);
 FUNC_3(VAR_5, VAR_4->ioc_regs.pss_ctl_reg);
}
