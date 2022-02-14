
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct wilc_vif {TYPE_1__ netstats; struct wilc* wilc; } ;
struct wilc {int vif_num; int vif_mutex; TYPE_2__** vif; } ;
struct tx_complete_data {scalar_t__ size; int buff; struct sk_buff* skb; } ;
struct sk_buff {scalar_t__ len; int data; struct net_device* dev; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int ndev; scalar_t__ mac_opened; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct tx_complete_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_8 (struct net_device*,void*,int ,scalar_t__,int ) ;

netdev_tx_t FUNC_9(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct wilc_vif *VAR_5 = FUNC_5(VAR_4);
 struct wilc *VAR_6 = VAR_5->wilc;
 struct tx_complete_data *VAR_7 = ((void*)0);
 int VAR_8;

 if (VAR_3->dev != VAR_4) {
  FUNC_4(VAR_4, "Packet not destined to this device\n");
  return 0;
 }

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_0(VAR_3);
  FUNC_7(VAR_4);
  return 0;
 }

 VAR_7->buff = VAR_3->data;
 VAR_7->size = VAR_3->len;
 VAR_7->skb = VAR_3;

 VAR_5->netstats.tx_packets++;
 VAR_5->netstats.tx_bytes += VAR_7->size;
 VAR_8 = FUNC_8(VAR_4, (void *)VAR_7,
      VAR_7->buff, VAR_7->size,
      VAR_2);

 if (VAR_8 > VAR_0) {
  int VAR_9;

  FUNC_2(&VAR_6->vif_mutex);
  for (VAR_9 = 0; VAR_9 < VAR_6->vif_num; VAR_9++) {
   if (VAR_6->vif[VAR_9]->mac_opened)
    FUNC_6(VAR_6->vif[VAR_9]->ndev);
  }
  FUNC_3(&VAR_6->vif_mutex);
 }

 return 0;
}
