
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct emac_adapter {int tx_q; } ;


 int FUNC_0 (struct emac_adapter*,int *,struct sk_buff*) ;
 struct emac_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 struct emac_adapter *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2, &VAR_2->tx_q, VAR_0);
}
