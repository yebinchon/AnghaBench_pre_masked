
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lochnagar_pin_priv {int ngroups; TYPE_1__* groups; struct lochnagar_func_groups* func_groups; int dev; } ;
struct lochnagar_func_groups {scalar_t__ ngroups; int * groups; } ;
struct TYPE_2__ {size_t type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(struct lochnagar_pin_priv *VAR_3)
{
 struct lochnagar_func_groups *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->ngroups; VAR_5++)
  VAR_3->func_groups[VAR_3->groups[VAR_5].type].ngroups++;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = &VAR_3->func_groups[VAR_5];

  if (!VAR_4->ngroups)
   continue;

  VAR_4->groups = FUNC_0(VAR_3->dev, VAR_4->ngroups,
          sizeof(*VAR_4->groups),
          VAR_1);
  if (!VAR_4->groups)
   return -VAR_0;

  VAR_4->ngroups = 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->ngroups; VAR_5++) {
  VAR_4 = &VAR_3->func_groups[VAR_3->groups[VAR_5].type];

  VAR_4->groups[VAR_4->ngroups++] = VAR_3->groups[VAR_5].name;
 }

 return 0;
}
