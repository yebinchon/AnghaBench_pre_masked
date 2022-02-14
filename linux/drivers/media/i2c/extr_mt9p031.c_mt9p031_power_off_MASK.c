
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9p031 {scalar_t__ clk; int regulators; scalar_t__ reset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct mt9p031 *VAR_0)
{
 if (VAR_0->reset) {
  FUNC_2(VAR_0->reset, 1);
  FUNC_4(1000, 2000);
 }

 FUNC_3(FUNC_0(VAR_0->regulators),
          VAR_0->regulators);

 if (VAR_0->clk)
  FUNC_1(VAR_0->clk);
}
