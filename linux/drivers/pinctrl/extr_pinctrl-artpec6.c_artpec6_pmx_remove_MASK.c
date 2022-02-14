
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct artpec6_pmx {int pctl; } ;


 int FUNC_0 (int ) ;
 struct artpec6_pmx* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct artpec6_pmx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pctl);

 return 0;
}
