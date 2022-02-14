
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int ns_ida; } ;
struct nd_namespace_blk {scalar_t__ id; struct nd_namespace_blk* res; struct nd_namespace_blk* uuid; struct nd_namespace_blk* alt_name; } ;
struct device {int parent; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct nd_namespace_blk*) ;
 struct nd_namespace_blk* FUNC_2 (struct device*) ;
 struct nd_region* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct nd_namespace_blk *VAR_1 = FUNC_2(VAR_0);
 struct nd_region *VAR_2 = FUNC_3(VAR_0->parent);

 if (VAR_1->id >= 0)
  FUNC_0(&VAR_2->ns_ida, VAR_1->id);
 FUNC_1(VAR_1->alt_name);
 FUNC_1(VAR_1->uuid);
 FUNC_1(VAR_1->res);
 FUNC_1(VAR_1);
}
