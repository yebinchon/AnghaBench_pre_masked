
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int priv; int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct clk* FUNC_3 (int *,char*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct mii_bus *VAR_3)
{
 struct clk *VAR_4;

 VAR_4 = FUNC_3(&VAR_3->dev, "cpmac");
 if (FUNC_0(VAR_4)) {
  FUNC_6("unable to get cpmac clock\n");
  return -1;
 }
 FUNC_2(VAR_0);
 FUNC_5(VAR_3->priv, VAR_1, VAR_2 |
      FUNC_1(FUNC_4(VAR_4) / 2200000 - 1));

 return 0;
}
