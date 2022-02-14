
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int tpd ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int produce_idx; } ;
struct emac_tx_queue {int produce_shift; int produce_mask; scalar_t__ produce_reg; TYPE_1__ tpd; } ;
struct emac_tpd {int dummy; } ;
struct emac_adapter {scalar_t__ base; int netdev; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct emac_tpd*,int ) ;
 int FUNC_2 (struct emac_tpd*,int) ;
 int FUNC_3 (struct emac_tpd*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (scalar_t__,int,int) ;
 scalar_t__ FUNC_6 (struct emac_tx_queue*) ;
 scalar_t__ FUNC_7 (struct emac_adapter*,struct emac_tx_queue*,struct sk_buff*,struct emac_tpd*) ;
 int FUNC_8 (struct emac_adapter*,struct emac_tx_queue*,struct sk_buff*,struct emac_tpd*) ;
 int FUNC_9 (struct emac_tpd*,int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;

int FUNC_15(struct emac_adapter *VAR_3, struct emac_tx_queue *VAR_4,
    struct sk_buff *VAR_5)
{
 struct emac_tpd VAR_6;
 u32 VAR_7;

 FUNC_9(&VAR_6, 0, sizeof(VAR_6));

 if (FUNC_7(VAR_3, VAR_4, VAR_5, &VAR_6) != 0) {
  FUNC_4(VAR_5);
  return VAR_2;
 }

 if (FUNC_14(VAR_5)) {
  u16 VAR_8;

  FUNC_0(FUNC_13(VAR_5), VAR_8);
  FUNC_1(&VAR_6, VAR_8);
  FUNC_2(&VAR_6, 1);
 }

 if (FUNC_12(VAR_5) != VAR_0)
  FUNC_3(&VAR_6, 1);

 FUNC_8(VAR_3, VAR_4, VAR_5, &VAR_6);

 FUNC_10(VAR_3->netdev, VAR_5->len);






 if (FUNC_6(VAR_4) < (VAR_1 + 3))
  FUNC_11(VAR_3->netdev);


 VAR_7 = (VAR_4->tpd.produce_idx << VAR_4->produce_shift) &
      VAR_4->produce_mask;
 FUNC_5(VAR_3->base + VAR_4->produce_reg,
     VAR_4->produce_mask, VAR_7);

 return VAR_2;
}
