
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dev; int pfn_seed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nd_region*) ;

void FUNC_4(struct nd_region *VAR_0)
{
 FUNC_0(!FUNC_2(&VAR_0->dev));
 VAR_0->pfn_seed = FUNC_3(VAR_0);




 if (!VAR_0->pfn_seed)
  FUNC_1(&VAR_0->dev, "failed to create pfn namespace\n");
}
