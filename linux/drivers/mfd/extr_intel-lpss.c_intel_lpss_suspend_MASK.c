
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lpss {scalar_t__ type; scalar_t__ priv; int * priv_ctx; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct intel_lpss* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct device *VAR_3)
{
 struct intel_lpss *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_4->priv_ctx[VAR_5] = FUNC_1(VAR_4->priv + VAR_5 * 4);






 if (VAR_4->type != VAR_0)
  FUNC_2(0, VAR_4->priv + VAR_2);

 return 0;
}
