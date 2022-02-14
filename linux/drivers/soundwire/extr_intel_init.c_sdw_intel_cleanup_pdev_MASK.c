
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_link_data {scalar_t__ pdev; } ;
struct sdw_intel_ctx {int count; struct sdw_link_data* links; } ;


 int FUNC_0 (struct sdw_link_data*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sdw_intel_ctx *VAR_0)
{
 struct sdw_link_data *VAR_1 = VAR_0->links;
 int VAR_2;

 if (!VAR_1)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  if (VAR_1->pdev)
   FUNC_1(VAR_1->pdev);
  VAR_1++;
 }

 FUNC_0(VAR_0->links);
 VAR_0->links = ((void*)0);

 return 0;
}
