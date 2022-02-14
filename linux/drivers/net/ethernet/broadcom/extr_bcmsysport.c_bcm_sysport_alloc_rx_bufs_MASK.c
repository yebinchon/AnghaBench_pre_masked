
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct bcm_sysport_priv {unsigned int num_rx_bds; struct bcm_sysport_cb* rx_cbs; } ;
struct bcm_sysport_cb {int skb; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct bcm_sysport_priv*,struct bcm_sysport_cb*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct bcm_sysport_priv *VAR_1)
{
 struct bcm_sysport_cb *VAR_2;
 struct sk_buff *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_rx_bds; VAR_4++) {
  VAR_2 = &VAR_1->rx_cbs[VAR_4];
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_3);
  if (!VAR_2->skb)
   return -VAR_0;
 }

 return 0;
}
