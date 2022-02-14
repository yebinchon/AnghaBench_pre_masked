
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct dwc2_hsotg *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->regs + VAR_3);
 if ((VAR_6 & VAR_4) == VAR_2 ||
     (VAR_6 & VAR_4) == VAR_0 ||
     (VAR_6 & VAR_4) == VAR_1)
  return 0;
 return 1;
}
