
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cls_u32_offload {int dummy; } ;
struct stmmac_tc_entry {int in_use; int is_frag; struct stmmac_tc_entry* frag_ptr; } ;
struct stmmac_priv {int dummy; } ;


 struct stmmac_tc_entry* FUNC_0 (struct stmmac_priv*,struct tc_cls_u32_offload*,int) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_0,
       struct tc_cls_u32_offload *VAR_1)
{
 struct stmmac_tc_entry *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, 0);
 if (!VAR_2)
  return;

 VAR_2->in_use = 0;
 if (VAR_2->frag_ptr) {
  VAR_2 = VAR_2->frag_ptr;
  VAR_2->is_frag = 0;
  VAR_2->in_use = 0;
 }
}
