
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int ns_seed; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nd_region*) ;
 int FUNC_6 (struct nd_region*) ;
 scalar_t__ FUNC_7 (struct nd_region*) ;

void FUNC_8(struct nd_region *VAR_1)
{
 FUNC_0(!FUNC_3(&VAR_1->dev));

 if (FUNC_7(VAR_1) == VAR_0)
  return;

 if (FUNC_2(&VAR_1->dev))
  VAR_1->ns_seed = FUNC_5(VAR_1);
 else
  VAR_1->ns_seed = FUNC_6(VAR_1);





 if (!VAR_1->ns_seed)
  FUNC_1(&VAR_1->dev, "failed to create %s namespace\n",
    FUNC_2(&VAR_1->dev) ? "blk" : "pmem");
 else
  FUNC_4(VAR_1->ns_seed);
}
