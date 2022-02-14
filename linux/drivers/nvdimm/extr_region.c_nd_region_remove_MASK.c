
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int * bb_state; int * dax_seed; int * pfn_seed; int * btt_seed; int * ns_seed; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int *,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 struct nd_region* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct nd_region *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(VAR_1, ((void*)0), VAR_0);


 FUNC_2(VAR_1);
 VAR_2->ns_seed = ((void*)0);
 VAR_2->btt_seed = ((void*)0);
 VAR_2->pfn_seed = ((void*)0);
 VAR_2->dax_seed = ((void*)0);
 FUNC_0(VAR_1, ((void*)0));
 FUNC_3(VAR_1);





 FUNC_4(VAR_2->bb_state);
 VAR_2->bb_state = ((void*)0);

 return 0;
}
