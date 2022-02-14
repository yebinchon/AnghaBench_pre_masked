
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dwc3 *VAR_2)
{
 unsigned VAR_3 = 1000;
 u32 VAR_4;

 while (VAR_3--) {
  VAR_4 = FUNC_2(VAR_2->regs, FUNC_0(0));
  if (!(VAR_4 & VAR_0))
   return 0;
  FUNC_1();
 }

 return -VAR_1;
}
