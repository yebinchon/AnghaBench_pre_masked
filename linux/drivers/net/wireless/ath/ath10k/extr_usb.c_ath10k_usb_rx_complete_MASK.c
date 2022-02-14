
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int data; int len; } ;
struct ath10k_htc_hdr {int trailer_len; int flags; int len; } ;
struct TYPE_2__ {int (* ep_rx_complete ) (struct ath10k*,struct sk_buff*) ;} ;
struct ath10k_htc_ep {scalar_t__ service_id; TYPE_1__ ep_ops; } ;
struct ath10k_htc {struct ath10k_htc_ep* endpoint; } ;
struct ath10k {struct ath10k_htc htc; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k_htc*,int *,int,int,int *,int *) ;
 int FUNC_1 (struct ath10k*,char*,...) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ath10k_htc_hdr*) ;
 scalar_t__ FUNC_4 (struct ath10k_htc_hdr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct ath10k*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 struct ath10k_htc *VAR_3 = &VAR_1->htc;
 struct ath10k_htc_hdr *VAR_4;
 enum ath10k_htc_ep_id VAR_5;
 struct ath10k_htc_ep *VAR_6;
 u16 VAR_7;
 u8 *VAR_8;
 int VAR_9;

 VAR_4 = (struct ath10k_htc_hdr *)VAR_2->data;
 VAR_5 = FUNC_3(VAR_4);
 VAR_6 = &VAR_1->htc.endpoint[VAR_5];

 if (VAR_6->service_id == 0) {
  FUNC_1(VAR_1, "ep %d is not connected\n", VAR_5);
  goto out_free_skb;
 }

 VAR_7 = FUNC_5(VAR_4->len);
 if (!VAR_7) {
  FUNC_1(VAR_1, "zero length frame received, firmware crashed?\n");
  goto out_free_skb;
 }

 if (VAR_7 < VAR_4->trailer_len) {
  FUNC_1(VAR_1, "malformed frame received, firmware crashed?\n");
  goto out_free_skb;
 }

 if (VAR_4->flags & VAR_0) {
  VAR_8 = VAR_2->data + sizeof(*VAR_4) + VAR_7 -
     VAR_4->trailer_len;

  VAR_9 = FUNC_0(VAR_3,
       VAR_8,
       VAR_4->trailer_len,
       VAR_5,
       ((void*)0),
       ((void*)0));
  if (VAR_9)
   goto out_free_skb;

  if (FUNC_4(VAR_4))
   goto out_free_skb;




  FUNC_7(VAR_2, VAR_2->len - VAR_4->trailer_len);
 }

 FUNC_6(VAR_2, sizeof(*VAR_4));
 VAR_6->ep_ops.ep_rx_complete(VAR_1, VAR_2);


 return;

out_free_skb:
 FUNC_2(VAR_2);
}
