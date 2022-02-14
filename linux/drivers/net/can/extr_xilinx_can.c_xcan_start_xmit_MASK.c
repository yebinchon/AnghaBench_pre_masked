
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct xcan_priv {TYPE_1__ devtype; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct xcan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct xcan_priv *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 if (FUNC_0(VAR_4, VAR_3))
  return VAR_1;

 if (VAR_5->devtype.flags & VAR_2)
  VAR_6 = FUNC_5(VAR_3, VAR_4);
 else
  VAR_6 = FUNC_4(VAR_3, VAR_4);

 if (VAR_6 < 0) {
  FUNC_1(VAR_4, "BUG!, TX full when queue awake!\n");
  FUNC_3(VAR_4);
  return VAR_0;
 }

 return VAR_1;
}
