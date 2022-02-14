
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct gsm_mux_net {struct gsm_dlci* dlci; } ;
struct gsm_dlci {int skb_list; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct gsm_dlci*) ;
 int FUNC_1 (struct gsm_mux_net*) ;
 int FUNC_2 (struct gsm_mux_net*) ;
 struct gsm_mux_net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_1,
          struct net_device *VAR_2)
{
 struct gsm_mux_net *VAR_3 = FUNC_3(VAR_2);
 struct gsm_dlci *VAR_4 = VAR_3->dlci;
 FUNC_1(VAR_3);

 FUNC_5(&VAR_4->skb_list, VAR_1);
 VAR_2->stats.tx_packets++;
 VAR_2->stats.tx_bytes += VAR_1->len;
 FUNC_0(VAR_4);

 FUNC_4(VAR_2);
 FUNC_2(VAR_3);
 return VAR_0;
}
