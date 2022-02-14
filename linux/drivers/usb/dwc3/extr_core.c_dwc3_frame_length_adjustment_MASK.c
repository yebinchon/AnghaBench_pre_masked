
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {scalar_t__ revision; int fladj; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dwc3 *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 if (VAR_4->revision < VAR_3)
  return;

 if (VAR_4->fladj == 0)
  return;

 VAR_5 = FUNC_0(VAR_4->regs, VAR_0);
 VAR_6 = VAR_5 & VAR_1;
 if (VAR_6 != VAR_4->fladj) {
  VAR_5 &= ~VAR_1;
  VAR_5 |= VAR_2 | VAR_4->fladj;
  FUNC_1(VAR_4->regs, VAR_0, VAR_5);
 }
}
