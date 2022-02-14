
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_pipe3 {int dev; int pll_ctrl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ti_pipe3 *VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7;

 VAR_7 = VAR_4 + FUNC_2(VAR_2);
 do {
  FUNC_0();
  VAR_6 = FUNC_3(VAR_5->pll_ctrl_base, VAR_3);
  if (VAR_6 & VAR_1)
   return 0;
 } while (!FUNC_4(VAR_4, VAR_7));

 FUNC_1(VAR_5->dev, "DPLL failed to lock\n");
 return -VAR_0;
}
