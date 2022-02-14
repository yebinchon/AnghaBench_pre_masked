
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cw1200_txpriv {scalar_t__ rate_id; int tid; int raw_link_id; int offset; } ;
struct cw1200_common {int hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cw1200_common*,struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct cw1200_common*,scalar_t__) ;

void FUNC_4(struct cw1200_common *VAR_1,
       struct sk_buff *VAR_2,
       const struct cw1200_txpriv *VAR_3)
{
 FUNC_2(VAR_2, VAR_3->offset);
 if (VAR_3->rate_id != VAR_0) {
  FUNC_0(VAR_1, VAR_2,
       VAR_3->raw_link_id, VAR_3->tid);
  FUNC_3(VAR_1, VAR_3->rate_id);
 }
 FUNC_1(VAR_1->hw, VAR_2);
}
