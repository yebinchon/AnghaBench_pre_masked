
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct dwc3 *VAR_3, int VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3->regs, VAR_0);
 VAR_5 &= ~VAR_1;

 switch (VAR_4) {
 case 131:
 case 130:
 case 128:
 case 129:
 case 132:
  VAR_5 |= VAR_4 << 1;
  break;
 default:
  return -VAR_2;
 }

 FUNC_1(VAR_3->regs, VAR_0, VAR_5);

 return 0;
}
