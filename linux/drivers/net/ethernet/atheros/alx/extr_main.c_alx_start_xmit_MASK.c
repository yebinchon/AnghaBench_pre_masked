
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct alx_priv {int dummy; } ;
typedef int netdev_tx_t ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct alx_priv*,struct sk_buff*) ;
 struct alx_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_3(struct sk_buff *VAR_0,
      struct net_device *VAR_1)
{
 struct alx_priv *VAR_2 = FUNC_2(VAR_1);
 return FUNC_0(VAR_0, FUNC_1(VAR_2, VAR_0));
}
