
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_eint {scalar_t__ base; TYPE_1__* regs; } ;
struct TYPE_2__ {int dbnc_ctrl; int dbnc_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct mtk_eint *VAR_2, int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_5 = (VAR_3 / 4) * 4 + VAR_2->regs->dbnc_ctrl;
 VAR_7 = FUNC_0(VAR_2->base + VAR_5);
 VAR_6 = VAR_1 << ((VAR_3 % 4) * 8);
 if ((VAR_6 & VAR_7) > 0) {
  VAR_5 = (VAR_3 / 4) * 4 + VAR_2->regs->dbnc_set;
  VAR_4 = VAR_0 << ((VAR_3 % 4) * 8);
  FUNC_1(VAR_4, VAR_2->base + VAR_5);
 }
}
