
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dev; } ;
struct nd_dax {int nd_pfn; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 struct nd_dax* FUNC_2 (struct nd_region*) ;
 struct device* FUNC_3 (int *,int *) ;

struct device *FUNC_4(struct nd_region *VAR_0)
{
 struct device *VAR_1 = ((void*)0);
 struct nd_dax *VAR_2;

 if (!FUNC_1(&VAR_0->dev))
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  VAR_1 = FUNC_3(&VAR_2->nd_pfn, ((void*)0));
 FUNC_0(VAR_1);
 return VAR_1;
}
