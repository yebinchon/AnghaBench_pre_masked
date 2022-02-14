
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; int len; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct net_device {TYPE_2__ dev; TYPE_1__ stats; } ;
struct mpc52xx_fec_priv {int lock; int rx_dmatsk; } ;
struct bcom_fec_bd {int skb_pa; } ;
struct bcom_bd {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int ,int*,struct bcom_bd**) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct net_device*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct net_device*,int ) ;
 struct mpc52xx_fec_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct mpc52xx_fec_priv *VAR_8 = FUNC_7(VAR_7);
 struct sk_buff *VAR_9;
 struct sk_buff *VAR_10;
 struct bcom_fec_bd *VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;

 FUNC_11(&VAR_8->lock);

 while (FUNC_0(VAR_8->rx_dmatsk)) {

  VAR_9 = FUNC_1(VAR_8->rx_dmatsk, &VAR_12,
         (struct bcom_bd **)&VAR_11);
  VAR_13 = VAR_11->skb_pa;


  if (VAR_12 & VAR_0) {

   FUNC_5(VAR_7, VAR_9);
   VAR_7->stats.rx_dropped++;
   continue;
  }



  VAR_10 = FUNC_6(VAR_7, VAR_3);
  if (!VAR_10) {

   FUNC_2(&VAR_7->dev, "Low memory - dropped packet.\n");
   FUNC_5(VAR_7, VAR_9);
   VAR_7->stats.rx_dropped++;
   continue;
  }


  FUNC_5(VAR_7, VAR_10);



  FUNC_12(&VAR_8->lock);

  FUNC_3(VAR_7->dev.parent, VAR_13, VAR_9->len,
     VAR_2);
  VAR_14 = VAR_12 & VAR_1;
  FUNC_10(VAR_9, VAR_14 - 4);
  VAR_9->protocol = FUNC_4(VAR_9, VAR_7);
  if (!FUNC_9(VAR_9))
   FUNC_8(VAR_9);

  FUNC_11(&VAR_8->lock);
 }

 FUNC_12(&VAR_8->lock);

 return VAR_4;
}
