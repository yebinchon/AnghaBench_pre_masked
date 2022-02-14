
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ handle; } ;
struct tc_cls_u32_offload {TYPE_1__ knode; } ;
struct stmmac_tc_entry {int in_use; scalar_t__ handle; int val; int is_frag; } ;
struct stmmac_priv {int tc_entries_max; struct stmmac_tc_entry* tc_entries; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static struct stmmac_tc_entry *FUNC_1(struct stmmac_priv *VAR_0,
          struct tc_cls_u32_offload *VAR_1,
          bool VAR_2)
{
 struct stmmac_tc_entry *VAR_3, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 u32 VAR_6 = VAR_1->knode.handle;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0->tc_entries_max; VAR_7++) {
  VAR_3 = &VAR_0->tc_entries[VAR_7];
  if (!VAR_3->in_use && !VAR_4 && VAR_2)
   VAR_4 = VAR_3;
  if ((VAR_3->handle == VAR_6) && !VAR_2 && !VAR_3->is_frag)
   VAR_5 = VAR_3;
 }

 if (VAR_5)
  return VAR_5;
 if (VAR_4) {
  VAR_4->handle = VAR_6;
  VAR_4->in_use = 1;


  FUNC_0(&VAR_4->val, 0, sizeof(VAR_4->val));
 }

 return VAR_4;
}
