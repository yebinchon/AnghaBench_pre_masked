
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dwc3 {int regs; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 struct dwc3* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct dwc3*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct dwc3 *VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7;

 VAR_7 = FUNC_4(VAR_6->regs, FUNC_1(0));
 if (VAR_7 & VAR_2) {
  VAR_7 &= ~VAR_2;
  FUNC_6(VAR_6->regs, FUNC_1(0), VAR_7);
 }

 VAR_7 = VAR_0 | FUNC_2(VAR_4);
 VAR_7 |= VAR_1 | VAR_5;
 FUNC_6(VAR_6->regs, FUNC_0(0), VAR_7);

 return FUNC_5(VAR_6);
}
