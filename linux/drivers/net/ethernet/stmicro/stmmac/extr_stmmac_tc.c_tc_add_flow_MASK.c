
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {int dummy; } ;
struct stmmac_flow_entry {int in_use; int cookie; } ;
struct flow_rule {int action; } ;
struct flow_cls_offload {int cookie; } ;
struct TYPE_3__ {int (* fn ) (struct stmmac_priv*,struct flow_cls_offload*,struct stmmac_flow_entry*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct flow_rule* FUNC_1 (struct flow_cls_offload*) ;
 int FUNC_2 (struct stmmac_priv*,struct flow_cls_offload*,struct stmmac_flow_entry*) ;
 struct stmmac_flow_entry* FUNC_3 (struct stmmac_priv*,struct flow_cls_offload*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (struct stmmac_priv*,int *,struct stmmac_flow_entry*) ;

__attribute__((used)) static int FUNC_5(struct stmmac_priv *VAR_3,
         struct flow_cls_offload *VAR_4)
{
 struct stmmac_flow_entry *VAR_5 = FUNC_3(VAR_3, VAR_4, 0);
 struct flow_rule *VAR_6 = FUNC_1(VAR_4);
 int VAR_7, VAR_8;

 if (!VAR_5) {
  VAR_5 = FUNC_3(VAR_3, VAR_4, 1);
  if (!VAR_5)
   return -VAR_1;
 }

 VAR_8 = FUNC_4(VAR_3, &VAR_6->action, VAR_5);
 if (VAR_8)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  VAR_8 = VAR_2[VAR_7].fn(VAR_3, VAR_4, VAR_5);
  if (!VAR_8) {
   VAR_5->in_use = 1;
   continue;
  }
 }

 if (!VAR_5->in_use)
  return -VAR_0;

 VAR_5->cookie = VAR_4->cookie;
 return 0;
}
