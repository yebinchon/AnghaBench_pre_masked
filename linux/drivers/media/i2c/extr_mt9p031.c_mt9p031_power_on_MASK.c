
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9p031 {scalar_t__ reset; int regulators; scalar_t__ clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct mt9p031 *VAR_0)
{
 int VAR_1;


 if (VAR_0->reset) {
  FUNC_2(VAR_0->reset, 1);
  FUNC_5(1000, 2000);
 }


 VAR_1 = FUNC_4(FUNC_0(VAR_0->regulators),
       VAR_0->regulators);
 if (VAR_1 < 0)
  return VAR_1;


 if (VAR_0->clk) {
  VAR_1 = FUNC_1(VAR_0->clk);
  if (VAR_1) {
   FUNC_3(FUNC_0(VAR_0->regulators),
            VAR_0->regulators);
   return VAR_1;
  }
 }


 if (VAR_0->reset) {
  FUNC_2(VAR_0->reset, 0);
  FUNC_5(1000, 2000);
 }

 return 0;
}
