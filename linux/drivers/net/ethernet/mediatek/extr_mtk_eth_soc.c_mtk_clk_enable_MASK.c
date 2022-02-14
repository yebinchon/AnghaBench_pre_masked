
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int * clks; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mtk_eth *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0 ; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1->clks[VAR_2]);
  if (VAR_3)
   goto err_disable_clks;
 }

 return 0;

err_disable_clks:
 while (--VAR_2 >= 0)
  FUNC_0(VAR_1->clks[VAR_2]);

 return VAR_3;
}
