
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct cc770_priv {struct sk_buff* tx_skb; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int ctrl1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct cc770_priv*,int ) ;
 int FUNC_2 (struct net_device*,unsigned int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (struct net_device*,char*) ;
 struct cc770_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct cc770_priv *VAR_8 = FUNC_4(VAR_7);
 unsigned int VAR_9 = FUNC_6(VAR_0);

 if (FUNC_0(VAR_7, VAR_6))
  return VAR_2;

 FUNC_5(VAR_7);

 if ((FUNC_1(VAR_8,
       VAR_5[VAR_9].ctrl1) & VAR_4) == VAR_3) {
  FUNC_3(VAR_7, "TX register is still occupied!\n");
  return VAR_1;
 }

 VAR_8->tx_skb = VAR_6;
 FUNC_2(VAR_7, VAR_9);

 return VAR_2;
}
