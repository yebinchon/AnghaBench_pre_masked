
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int hw; } ;
struct stmmac_flow_entry {int in_use; int is_l4; scalar_t__ cookie; int idx; } ;
struct flow_cls_offload {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,int ,int ,int,int,int,int,int ) ;
 int FUNC_1 (struct stmmac_priv*,int ,int ,int,int,int,int,int ) ;
 struct stmmac_flow_entry* FUNC_2 (struct stmmac_priv*,struct flow_cls_offload*,int) ;

__attribute__((used)) static int FUNC_3(struct stmmac_priv *VAR_1,
         struct flow_cls_offload *VAR_2)
{
 struct stmmac_flow_entry *VAR_3 = FUNC_2(VAR_1, VAR_2, 0);
 int VAR_4;

 if (!VAR_3 || !VAR_3->in_use)
  return -VAR_0;

 if (VAR_3->is_l4) {
  VAR_4 = FUNC_1(VAR_1, VAR_1->hw, VAR_3->idx, 0,
           0, 0, 0, 0);
 } else {
  VAR_4 = FUNC_0(VAR_1, VAR_1->hw, VAR_3->idx, 0,
           0, 0, 0, 0);
 }

 VAR_3->in_use = 0;
 VAR_3->cookie = 0;
 VAR_3->is_l4 = 0;
 return VAR_4;
}
