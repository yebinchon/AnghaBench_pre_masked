
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k_sdio_rx_data {int trailer_only; struct sk_buff* skb; } ;
struct ath10k_htc_hdr {int flags; scalar_t__ trailer_len; int eid; } ;
struct ath10k_htc {int dummy; } ;
struct ath10k {struct ath10k_htc htc; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k_htc*,int *,scalar_t__,int,int *,int*) ;
 scalar_t__ FUNC_1 (struct ath10k_sdio_rx_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_1,
           struct ath10k_sdio_rx_data *VAR_2,
           u32 *VAR_3,
           int *VAR_4)
{
 struct ath10k_htc *VAR_5 = &VAR_1->htc;
 struct sk_buff *VAR_6 = VAR_2->skb;
 struct ath10k_htc_hdr *VAR_7 = (struct ath10k_htc_hdr *)VAR_6->data;
 bool VAR_8 = VAR_7->flags & VAR_0;
 enum ath10k_htc_ep_id VAR_9;
 u8 *VAR_10;
 int VAR_11;

 if (VAR_8) {
  VAR_10 = VAR_6->data + VAR_6->len - VAR_7->trailer_len;

  VAR_9 = FUNC_2(VAR_7->eid);

  VAR_11 = FUNC_0(VAR_5,
       VAR_10,
       VAR_7->trailer_len,
       VAR_9,
       VAR_3,
       VAR_4);
  if (VAR_11)
   return VAR_11;

  if (FUNC_1(VAR_2))
   VAR_2->trailer_only = 1;

  FUNC_4(VAR_6, VAR_6->len - VAR_7->trailer_len);
 }

 FUNC_3(VAR_6, sizeof(*VAR_7));

 return 0;
}
