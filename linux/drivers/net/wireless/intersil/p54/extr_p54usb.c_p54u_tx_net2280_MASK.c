
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; } ;
struct sk_buff {int len; scalar_t__ data; struct p54u_priv* priv; } ;
struct p54u_priv {int submitted; int udev; } ;
struct p54_hdr {int req_id; } ;
struct net2280_tx_hdr {int device_addr; void* len; void* val; void* addr; void* port; } ;
struct net2280_reg_write {int device_addr; void* len; void* val; void* addr; void* port; } ;
struct ieee80211_hw {int len; scalar_t__ data; struct p54u_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct net2280_tx_hdr*) ;
 struct net2280_tx_hdr* FUNC_4 (int,int ) ;
 int FUNC_5 (struct net2280_tx_hdr*,int ,int) ;
 int FUNC_6 (struct sk_buff*,struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct urb* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int *) ;
 int FUNC_9 (struct urb*,int ,int ,struct net2280_tx_hdr*,int,int ,struct sk_buff*) ;
 int FUNC_10 (struct urb*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct urb*,int ) ;
 int FUNC_13 (struct urb*) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_11, struct sk_buff *VAR_12)
{
 struct p54u_priv *VAR_13 = VAR_11->priv;
 struct urb *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 struct net2280_tx_hdr *VAR_16 = (void *)VAR_12->data - sizeof(*VAR_16);
 struct net2280_reg_write *VAR_17 = ((void*)0);
 int VAR_18 = -VAR_0;

 VAR_17 = FUNC_4(sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  goto out;

 VAR_14 = FUNC_7(0, VAR_1);
 if (!VAR_14)
  goto out;

 VAR_15 = FUNC_7(0, VAR_1);
 if (!VAR_15)
  goto out;

 VAR_17->port = FUNC_1(VAR_3);
 VAR_17->addr = FUNC_2(VAR_4);
 VAR_17->val = FUNC_2(VAR_2);

 FUNC_5(VAR_16, 0, sizeof(*VAR_16));
 VAR_16->len = FUNC_1(VAR_12->len);
 VAR_16->device_addr = ((struct p54_hdr *) VAR_12->data)->req_id;

 FUNC_9(VAR_14, VAR_13->udev,
  FUNC_11(VAR_13->udev, VAR_6), VAR_17, sizeof(*VAR_17),
  VAR_10, VAR_11);






 VAR_14->transfer_flags |= VAR_7 | VAR_8;
 VAR_17 = ((void*)0);

 FUNC_9(VAR_15, VAR_13->udev,
     FUNC_11(VAR_13->udev, VAR_5),
     VAR_16, VAR_12->len + sizeof(*VAR_16), FUNC_0(VAR_12) ?
     VAR_9 : VAR_10, VAR_12);
 VAR_15->transfer_flags |= VAR_8;

 FUNC_8(VAR_14, &VAR_13->submitted);
 VAR_18 = FUNC_12(VAR_14, VAR_1);
 if (VAR_18) {
  FUNC_13(VAR_14);
  goto out;
 }

 FUNC_8(VAR_15, &VAR_13->submitted);
 VAR_18 = FUNC_12(VAR_15, VAR_1);
 if (VAR_18) {
  FUNC_13(VAR_15);
  goto out;
 }
out:
 FUNC_10(VAR_14);
 FUNC_10(VAR_15);

 if (VAR_18) {
  FUNC_3(VAR_17);
  FUNC_6(VAR_11, VAR_12);
 }
}
