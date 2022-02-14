
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dwc3 {int regs; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 struct dwc3* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct dwc3*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2, u8 VAR_3)
{
 struct dwc3 *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_4->regs, FUNC_2(0));
 if (VAR_5 & VAR_1) {
  VAR_5 &= ~VAR_1;
  FUNC_7(VAR_4->regs, FUNC_2(0), VAR_5);
 }

 VAR_5 = VAR_0 | FUNC_3(VAR_3);
 FUNC_7(VAR_4->regs, FUNC_0(0), VAR_5);

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_5(VAR_4->regs, FUNC_0(0));

 return FUNC_1(VAR_5);
}
