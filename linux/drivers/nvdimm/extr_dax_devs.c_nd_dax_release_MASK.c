
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dax_ida; } ;
struct nd_pfn {struct nd_dax* uuid; int id; int ndns; } ;
struct nd_dax {struct nd_pfn nd_pfn; } ;
struct device {int parent; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nd_dax*) ;
 int FUNC_3 (struct device*,int *) ;
 struct nd_dax* FUNC_4 (struct device*) ;
 struct nd_region* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct nd_region *VAR_1 = FUNC_5(VAR_0->parent);
 struct nd_dax *VAR_2 = FUNC_4(VAR_0);
 struct nd_pfn *VAR_3 = &VAR_2->nd_pfn;

 FUNC_0(VAR_0, "trace\n");
 FUNC_3(VAR_0, &VAR_3->ndns);
 FUNC_1(&VAR_1->dax_ida, VAR_3->id);
 FUNC_2(VAR_3->uuid);
 FUNC_2(VAR_2);
}
