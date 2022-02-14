
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_device_buffer {int skb; int (* complete_handler ) (struct ks_wlan_private*,int ) ;int sendp; } ;
struct TYPE_2__ {size_t qhead; struct tx_device_buffer* tx_dev_buff; } ;
struct ks_wlan_private {int rx_bh_task; TYPE_1__ tx_dev; } ;


 int FUNC_0 (struct ks_wlan_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ks_wlan_private*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ks_wlan_private*) ;

__attribute__((used)) static void FUNC_5(struct ks_wlan_private *VAR_0)
{
 struct tx_device_buffer *VAR_1;


 while (FUNC_4(VAR_0)) {
  VAR_1 = &VAR_0->tx_dev.tx_dev_buff[VAR_0->tx_dev.qhead];
  FUNC_1(VAR_1->sendp);
  if (VAR_1->complete_handler)
   (*VAR_1->complete_handler)(VAR_0, VAR_1->skb);
  FUNC_0(VAR_0);
 }

 FUNC_3(&VAR_0->rx_bh_task);
}
