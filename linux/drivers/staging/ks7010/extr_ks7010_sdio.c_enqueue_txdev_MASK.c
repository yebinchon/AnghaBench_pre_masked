
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_device_buffer {unsigned char* sendp; unsigned long size; void (* complete_handler ) (struct ks_wlan_private*,struct sk_buff*) ;struct sk_buff* skb; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {size_t qtail; struct tx_device_buffer* tx_dev_buff; } ;
struct ks_wlan_private {scalar_t__ dev_state; TYPE_1__ tx_dev; int net_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ks_wlan_private*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,char*) ;
 void FUNC_3 (struct ks_wlan_private*,struct sk_buff*) ;
 int FUNC_4 (struct ks_wlan_private*) ;

__attribute__((used)) static int FUNC_5(struct ks_wlan_private *VAR_4, unsigned char *VAR_5,
    unsigned long VAR_6,
    void (*VAR_7)(struct ks_wlan_private *VAR_8,
        struct sk_buff *VAR_9),
    struct sk_buff *VAR_10)
{
 struct tx_device_buffer *VAR_11;
 int VAR_12;

 if (VAR_4->dev_state < VAR_0) {
  VAR_12 = -VAR_2;
  goto err_complete;
 }

 if ((VAR_3 - 1) <= FUNC_4(VAR_4)) {
  FUNC_2(VAR_4->net_dev, "tx buffer overflow\n");
  VAR_12 = -VAR_1;
  goto err_complete;
 }

 VAR_11 = &VAR_4->tx_dev.tx_dev_buff[VAR_4->tx_dev.qtail];
 VAR_11->sendp = VAR_5;
 VAR_11->size = VAR_6;
 VAR_11->complete_handler = VAR_7;
 VAR_11->skb = VAR_10;
 FUNC_0(VAR_4);

 return 0;

err_complete:
 FUNC_1(VAR_5);
 if (VAR_7)
  (*VAR_7)(VAR_4, VAR_10);

 return VAR_12;
}
