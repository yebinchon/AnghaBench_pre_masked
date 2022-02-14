
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lpss {scalar_t__ priv; int * priv_ctx; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 struct intel_lpss* FUNC_0 (struct device*) ;
 int FUNC_1 (struct intel_lpss*) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct device *VAR_1)
{
 struct intel_lpss *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;

 FUNC_1(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2->priv_ctx[VAR_3], VAR_2->priv + VAR_3 * 4);

 return 0;
}
