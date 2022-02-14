
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {struct device* dax_seed; struct device* pfn_seed; struct device* btt_seed; } ;
struct nd_namespace_common {int dummy; } ;
struct device {scalar_t__ driver; int parent; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 struct nd_region* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct device *VAR_0, struct nd_namespace_common *VAR_1)
{
 struct nd_region *VAR_2 = FUNC_3(VAR_0->parent);
 struct device *VAR_3 = ((void*)0);

 if (FUNC_0(VAR_0))
  VAR_3 = VAR_2->btt_seed;
 else if (FUNC_2(VAR_0))
  VAR_3 = VAR_2->pfn_seed;
 else if (FUNC_1(VAR_0))
  VAR_3 = VAR_2->dax_seed;

 if (VAR_3 == VAR_0 || VAR_1 || VAR_0->driver)
  return 0;
 return 1;
}
