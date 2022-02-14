
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct mpc52xx_fec_priv {int tx_dmatsk; int lock; } ;
struct bcom_fec_bd {int status; int skb_pa; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,int ,int,int ) ;
 scalar_t__ FUNC_5 () ;
 struct mpc52xx_fec_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t
FUNC_11(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct mpc52xx_fec_priv *VAR_7 = FUNC_6(VAR_6);
 struct bcom_fec_bd *VAR_8;
 unsigned long VAR_9;

 if (FUNC_1(VAR_7->tx_dmatsk)) {
  if (FUNC_5())
   FUNC_3(&VAR_6->dev, "transmit queue overrun\n");
  return VAR_3;
 }

 FUNC_9(&VAR_7->lock, VAR_9);

 VAR_8 = (struct bcom_fec_bd *)
  FUNC_0(VAR_7->tx_dmatsk);

 VAR_8->status = VAR_5->len | VAR_1 | VAR_0;
 VAR_8->skb_pa = FUNC_4(VAR_6->dev.parent, VAR_5->data, VAR_5->len,
        VAR_2);

 FUNC_8(VAR_5);
 FUNC_2(VAR_7->tx_dmatsk, VAR_5);
 FUNC_10(&VAR_7->lock, VAR_9);

 if (FUNC_1(VAR_7->tx_dmatsk)) {
  FUNC_7(VAR_6);
 }

 return VAR_4;
}
