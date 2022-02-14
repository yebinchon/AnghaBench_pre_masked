
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct mpc52xx_fec_priv {int rx_dmatsk; } ;
struct bcom_fec_bd {int skb_pa; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct mpc52xx_fec_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_2, struct sk_buff *VAR_3)
{
 struct mpc52xx_fec_priv *VAR_4 = FUNC_3(VAR_2);
 struct bcom_fec_bd *VAR_5;

 VAR_5 = (struct bcom_fec_bd *) FUNC_0(VAR_4->rx_dmatsk);
 VAR_5->status = VAR_1;
 VAR_5->skb_pa = FUNC_2(VAR_2->dev.parent, VAR_3->data,
        VAR_1, VAR_0);
 FUNC_1(VAR_4->rx_dmatsk, VAR_3);
}
