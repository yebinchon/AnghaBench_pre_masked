
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int it_present; int it_len; scalar_t__ it_version; } ;
struct wilc_wfi_radiotap_cb_hdr {int rate; int tx_flags; TYPE_1__ hdr; } ;
struct wilc_wfi_mon_priv {struct net_device* real_ndev; } ;
struct sk_buff {int* data; scalar_t__ len; struct net_device* dev; struct wilc_wfi_radiotap_cb_hdr* cb; int protocol; int pkt_type; int ip_summed; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int*) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct wilc_wfi_radiotap_cb_hdr*,int ,int) ;
 scalar_t__ FUNC_10 (struct net_device*,int*,scalar_t__) ;
 int FUNC_11 (struct net_device*,char*) ;
 struct wilc_wfi_mon_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 struct wilc_wfi_radiotap_cb_hdr* FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int*,scalar_t__) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_19(struct sk_buff *VAR_7,
         struct net_device *VAR_8)
{
 u32 VAR_9, VAR_10 = 0;
 struct wilc_wfi_mon_priv *VAR_11;
 struct sk_buff *VAR_12;
 struct wilc_wfi_radiotap_cb_hdr *VAR_13;
 u8 VAR_14[VAR_3];
 u8 VAR_15[VAR_3];

 VAR_11 = FUNC_12(VAR_8);
 if (!VAR_11)
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_7->data);
 if (VAR_7->len < VAR_9)
  return -1;

 FUNC_14(VAR_7, VAR_9);

 if (VAR_7->data[0] == 0xc0 && FUNC_7(&VAR_7->data[4])) {
  VAR_12 = FUNC_2(VAR_7->len + sizeof(*VAR_13));
  if (!VAR_12)
   return -VAR_2;

  FUNC_16(VAR_12, VAR_7->data, VAR_7->len);

  VAR_13 = FUNC_15(VAR_12, sizeof(*VAR_13));
  FUNC_9(VAR_13, 0, sizeof(struct wilc_wfi_radiotap_cb_hdr));

  VAR_13->hdr.it_version = 0;

  VAR_13->hdr.it_len = FUNC_0(sizeof(*VAR_13));

  VAR_13->hdr.it_present = FUNC_1(VAR_6);

  VAR_13->rate = 5;
  VAR_13->tx_flags = 0x0004;

  VAR_12->dev = VAR_8;
  FUNC_17(VAR_12);
  VAR_12->ip_summed = VAR_0;
  VAR_12->pkt_type = VAR_5;
  VAR_12->protocol = FUNC_5(VAR_4);
  FUNC_9(VAR_12->cb, 0, sizeof(VAR_12->cb));

  FUNC_13(VAR_12);

  return 0;
 }
 VAR_7->dev = VAR_11->real_ndev;

 FUNC_4(VAR_14, &VAR_7->data[10]);
 FUNC_4(VAR_15, &VAR_7->data[16]);




 if (!(FUNC_8(VAR_14, VAR_15, 6))) {
  VAR_10 = FUNC_10(VAR_11->real_ndev, VAR_7->data, VAR_7->len);
  if (VAR_10)
   FUNC_11(VAR_8, "fail to mgmt tx\n");
  FUNC_3(VAR_7);
 } else {
  VAR_10 = FUNC_18(VAR_7, VAR_11->real_ndev);
 }

 return VAR_10;
}
