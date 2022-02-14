
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct emac_adapter {struct clk** clk; } ;
struct clk {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 struct clk* FUNC_3 (int *,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2,
    struct emac_adapter *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct clk *VAR_5 = FUNC_3(&VAR_2->dev, VAR_1[VAR_4]);

  if (FUNC_0(VAR_5)) {
   FUNC_2(&VAR_2->dev,
    "could not claim clock %s (error=%li)\n",
    VAR_1[VAR_4], FUNC_1(VAR_5));

   return FUNC_1(VAR_5);
  }

  VAR_3->clk[VAR_4] = VAR_5;
 }

 return 0;
}
