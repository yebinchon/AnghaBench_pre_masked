
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct mpc52xx_fec_priv {int lock; int tx_dmatsk; } ;
struct bcom_fec_bd {int skb_pa; } ;
struct bcom_bd {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int ,int *,struct bcom_bd**) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct mpc52xx_fec_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct mpc52xx_fec_priv *VAR_5 = FUNC_4(VAR_4);

 FUNC_6(&VAR_5->lock);
 while (FUNC_0(VAR_5->tx_dmatsk)) {
  struct sk_buff *VAR_6;
  struct bcom_fec_bd *VAR_7;
  VAR_6 = FUNC_1(VAR_5->tx_dmatsk, ((void*)0),
    (struct bcom_bd **)&VAR_7);
  FUNC_3(VAR_4->dev.parent, VAR_7->skb_pa, VAR_6->len,
     VAR_0);

  FUNC_2(VAR_6);
 }
 FUNC_7(&VAR_5->lock);

 FUNC_5(VAR_4);

 return VAR_1;
}
