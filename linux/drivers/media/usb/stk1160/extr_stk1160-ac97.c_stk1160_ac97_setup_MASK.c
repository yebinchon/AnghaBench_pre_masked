
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk1160 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct stk1160*) ;
 int FUNC_1 (struct stk1160*) ;
 int FUNC_2 (struct stk1160*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct stk1160*,int,int) ;
 int FUNC_5 (struct stk1160*,scalar_t__,int) ;

void FUNC_6(struct stk1160 *VAR_2)
{
 if (!FUNC_2(VAR_2)) {
  FUNC_3("Device doesn't support audio, skipping AC97 setup.");
  return;
 }

 if (!FUNC_1(VAR_2)) {
  FUNC_3("Device uses internal 8-bit ADC, skipping AC97 setup.");
  return;
 }


 FUNC_5(VAR_2, VAR_0, 0x94);
 FUNC_5(VAR_2, VAR_0, 0x8c);


 FUNC_5(VAR_2, VAR_1 + 2, 0x01);
 FUNC_5(VAR_2, VAR_1 + 3, 0x00);


 FUNC_4(VAR_2, 0x12, 0x8808);
 FUNC_4(VAR_2, 0x10, 0x0808);
 FUNC_4(VAR_2, 0x0e, 0x0008);
 FUNC_4(VAR_2, 0x16, 0x0808);
 FUNC_4(VAR_2, 0x1a, 0x0404);
 FUNC_4(VAR_2, 0x02, 0x0000);
 FUNC_4(VAR_2, 0x1c, 0x0808);




}
