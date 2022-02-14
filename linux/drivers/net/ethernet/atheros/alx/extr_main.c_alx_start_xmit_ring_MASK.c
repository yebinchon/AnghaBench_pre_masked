
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct alx_txd {int dummy; } ;
struct alx_tx_queue {size_t write_idx; int count; int p_reg; struct alx_txd* tpd; int netdev; } ;
struct alx_priv {int hw; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct alx_tx_queue*) ;
 scalar_t__ FUNC_1 (struct alx_tx_queue*,struct sk_buff*) ;
 int FUNC_2 (struct alx_tx_queue*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct alx_txd*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct alx_txd*) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct alx_txd*,int ,int) ;
 struct alx_priv* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_1,
           struct alx_tx_queue *VAR_2)
{
 struct alx_priv *VAR_3;
 struct alx_txd *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_9(VAR_2->netdev);

 if (FUNC_2(VAR_2) < FUNC_3(VAR_1)) {
  FUNC_11(FUNC_0(VAR_2));
  goto drop;
 }

 VAR_4 = &VAR_2->tpd[VAR_2->write_idx];
 FUNC_8(VAR_4, 0, sizeof(*VAR_4));

 VAR_5 = FUNC_4(VAR_1, VAR_4);
 if (VAR_5 < 0)
  goto drop;
 else if (!VAR_5 && FUNC_5(VAR_1, VAR_4))
  goto drop;

 if (FUNC_1(VAR_2, VAR_1) < 0)
  goto drop;

 FUNC_10(FUNC_0(VAR_2), VAR_1->len);


 FUNC_12();
 FUNC_6(&VAR_3->hw, VAR_2->p_reg, VAR_2->write_idx);

 if (FUNC_2(VAR_2) < VAR_2->count / 8)
  FUNC_11(FUNC_0(VAR_2));

 return VAR_0;

drop:
 FUNC_7(VAR_1);
 return VAR_0;
}
