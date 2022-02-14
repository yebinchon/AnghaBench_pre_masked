
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int pfn_ida; } ;
struct nd_pfn {struct nd_pfn* uuid; int id; int ndns; int dev; } ;
struct device {int parent; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nd_pfn*) ;
 int FUNC_3 (int *,int *) ;
 struct nd_pfn* FUNC_4 (struct device*) ;
 struct nd_region* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct nd_region *VAR_1 = FUNC_5(VAR_0->parent);
 struct nd_pfn *VAR_2 = FUNC_4(VAR_0);

 FUNC_0(VAR_0, "trace\n");
 FUNC_3(&VAR_2->dev, &VAR_2->ndns);
 FUNC_1(&VAR_1->pfn_ida, VAR_2->id);
 FUNC_2(VAR_2->uuid);
 FUNC_2(VAR_2);
}
