
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdmacg_resource_pool {TYPE_1__* resources; int num_max_cnt; } ;
struct TYPE_2__ {int max; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rdmacg_resource_pool *VAR_1,
          int VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  if (VAR_1->resources[VAR_2].max != VAR_0)
   VAR_1->num_max_cnt++;
 } else {
  if (VAR_1->resources[VAR_2].max == VAR_0)
   VAR_1->num_max_cnt--;
 }
 VAR_1->resources[VAR_2].max = VAR_3;
}
