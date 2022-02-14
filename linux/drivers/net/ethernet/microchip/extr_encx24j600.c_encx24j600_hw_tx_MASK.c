
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct encx24j600_priv {TYPE_1__* tx_skb; struct net_device* ndev; } ;
struct TYPE_2__ {int len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (struct encx24j600_priv*,int ,int ) ;
 int FUNC_2 (struct encx24j600_priv*,int ) ;
 int FUNC_3 (struct encx24j600_priv*,int ,int *,int ) ;
 int FUNC_4 (struct encx24j600_priv*,int ) ;
 int FUNC_5 (struct encx24j600_priv*) ;
 int FUNC_6 (struct encx24j600_priv*,int ,int ) ;
 int FUNC_7 (struct encx24j600_priv*,int ,struct net_device*,char*,int ) ;
 scalar_t__ FUNC_8 (struct encx24j600_priv*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_9(struct encx24j600_priv *VAR_10)
{
 struct net_device *VAR_11 = VAR_10->ndev;

 FUNC_7(VAR_10, VAR_9, VAR_11, "TX Packet Len:%d\n",
     VAR_10->tx_skb->len);

 if (FUNC_8(VAR_10))
  FUNC_0("TX", VAR_10->tx_skb->len, VAR_10->tx_skb->data);

 if (FUNC_4(VAR_10, VAR_1) & VAR_6)

  FUNC_5(VAR_10);


 FUNC_1(VAR_10, VAR_1, VAR_7);


 FUNC_6(VAR_10, VAR_0, VAR_2);


 FUNC_3(VAR_10, VAR_8, (u8 *)VAR_10->tx_skb->data,
        VAR_10->tx_skb->len);


 FUNC_6(VAR_10, VAR_4, VAR_2);


 FUNC_6(VAR_10, VAR_3, VAR_10->tx_skb->len);


 FUNC_2(VAR_10, VAR_5);
}
