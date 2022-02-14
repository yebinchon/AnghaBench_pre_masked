
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufx_data {int dummy; } ;
struct pll_values {int div_f1; int div_r1; int div_q1; int range1; int div_f0; int div_r0; int div_q0; int range0; int member_0; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int,struct pll_values*) ;
 int FUNC_5 (struct ufx_data*,int,int) ;
 int FUNC_6 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_7(struct ufx_data *VAR_0, u32 VAR_1)
{
 struct pll_values VAR_2 = {0};
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;


 VAR_4 = FUNC_0(VAR_1) * 1000;
 FUNC_3("pixclock %d ps = clk_pixel %d Hz", VAR_1, VAR_4);


 VAR_5 = VAR_4 * 2;

 FUNC_4(VAR_5, &VAR_2);


 VAR_6 = FUNC_6(VAR_0, 0x7000, 0x8000000F);
 FUNC_1(VAR_6, "error writing 0x7000");

 VAR_3 = (VAR_2.div_f1 | (VAR_2.div_r1 << 8) |
  (VAR_2.div_q1 << 16) | (VAR_2.range1 << 20));
 VAR_6 = FUNC_6(VAR_0, 0x7008, VAR_3);
 FUNC_1(VAR_6, "error writing 0x7008");

 VAR_3 = (VAR_2.div_f0 | (VAR_2.div_r0 << 8) |
  (VAR_2.div_q0 << 16) | (VAR_2.range0 << 20));
 VAR_6 = FUNC_6(VAR_0, 0x7004, VAR_3);
 FUNC_1(VAR_6, "error writing 0x7004");

 VAR_6 = FUNC_5(VAR_0, 0x7000, 0x00000005);
 FUNC_1(VAR_6,
  "error clearing PLL0 bypass bits in 0x7000");
 FUNC_2(1);

 VAR_6 = FUNC_5(VAR_0, 0x7000, 0x0000000A);
 FUNC_1(VAR_6,
  "error clearing PLL1 bypass bits in 0x7000");
 FUNC_2(1);

 VAR_6 = FUNC_5(VAR_0, 0x7000, 0x80000000);
 FUNC_1(VAR_6, "error clearing gate bits in 0x7000");

 return 0;
}
