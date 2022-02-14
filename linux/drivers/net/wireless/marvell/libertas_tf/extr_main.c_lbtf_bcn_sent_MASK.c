
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct lbtf_private {TYPE_1__* vif; int hw; int tx_work; int bc_ps_buf; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (int ,TYPE_1__*) ;
 struct sk_buff* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct lbtf_private*,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;

void FUNC_8(struct lbtf_private *VAR_2)
{
 struct sk_buff *VAR_3 = ((void*)0);

 if (VAR_2->vif->type != VAR_0)
  return;

 if (FUNC_6(&VAR_2->bc_ps_buf)) {
  bool VAR_4 = 0;

  while ((VAR_3 = FUNC_1(VAR_2->hw, VAR_2->vif))) {
   FUNC_7(&VAR_2->bc_ps_buf, VAR_3);
   VAR_4 = 1;
  }
  if (VAR_4) {
   FUNC_2(VAR_2->hw);
   FUNC_5(VAR_1, &VAR_2->tx_work);
  }
 }

 VAR_3 = FUNC_0(VAR_2->hw, VAR_2->vif);

 if (VAR_3) {
  FUNC_4(VAR_2, VAR_3);
  FUNC_3(VAR_3);
 }
}
