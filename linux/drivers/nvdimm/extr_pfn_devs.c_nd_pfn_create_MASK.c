
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dev; } ;
struct nd_pfn {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 struct nd_pfn* FUNC_2 (struct nd_region*) ;
 struct device* FUNC_3 (struct nd_pfn*,int *) ;

struct device *FUNC_4(struct nd_region *VAR_0)
{
 struct nd_pfn *VAR_1;
 struct device *VAR_2;

 if (!FUNC_1(&VAR_0->dev))
  return ((void*)0);

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_3(VAR_1, ((void*)0));

 FUNC_0(VAR_2);
 return VAR_2;
}
