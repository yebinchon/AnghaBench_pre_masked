
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k_htc_hdr {size_t eid; int flags; size_t trailer_len; int len; } ;
struct TYPE_2__ {int (* ep_rx_complete ) (struct ath10k*,struct sk_buff*) ;} ;
struct ath10k_htc_ep {TYPE_1__ ep_ops; } ;
struct ath10k_htc {struct ath10k_htc_ep* endpoint; } ;
struct ath10k_ath10k_htc_record_hdr {int dummy; } ;
struct ath10k {struct ath10k_htc htc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,size_t,...) ;
 int FUNC_2 (struct ath10k*,int ,char*,char*,struct ath10k_htc_hdr*,int) ;
 int FUNC_3 (struct ath10k_htc*,size_t*,size_t,size_t,int *,int *) ;
 int FUNC_4 (struct ath10k*,char*,size_t) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,size_t) ;
 int FUNC_8 (struct ath10k*,struct sk_buff*) ;

void FUNC_9(struct ath10k *VAR_4, struct sk_buff *VAR_5)
{
 int VAR_6 = 0;
 struct ath10k_htc *VAR_7 = &VAR_4->htc;
 struct ath10k_htc_hdr *VAR_8;
 struct ath10k_htc_ep *VAR_9;
 u16 VAR_10;
 u32 VAR_11 = 0;
 size_t VAR_12;
 u8 VAR_13;
 bool VAR_14;

 VAR_8 = (struct ath10k_htc_hdr *)VAR_5->data;
 FUNC_6(VAR_5, sizeof(*VAR_8));

 VAR_13 = VAR_8->eid;

 if (VAR_13 >= VAR_1) {
  FUNC_4(VAR_4, "HTC Rx: invalid eid %d\n", VAR_13);
  FUNC_2(VAR_4, VAR_0, "htc bad header", "",
    VAR_8, sizeof(*VAR_8));
  goto out;
 }

 VAR_9 = &VAR_7->endpoint[VAR_13];

 VAR_10 = FUNC_0(VAR_8->len);

 if (VAR_10 + sizeof(*VAR_8) > VAR_3) {
  FUNC_4(VAR_4, "HTC rx frame too long, len: %zu\n",
       VAR_10 + sizeof(*VAR_8));
  FUNC_2(VAR_4, VAR_0, "htc bad rx pkt len", "",
    VAR_8, sizeof(*VAR_8));
  goto out;
 }

 if (VAR_5->len < VAR_10) {
  FUNC_1(VAR_4, VAR_0,
      "HTC Rx: insufficient length, got %d, expected %d\n",
      VAR_5->len, VAR_10);
  FUNC_2(VAR_4, VAR_0, "htc bad rx pkt len",
    "", VAR_8, sizeof(*VAR_8));
  goto out;
 }


 VAR_14 = VAR_8->flags & VAR_2;
 if (VAR_14) {
  u8 *VAR_15;

  VAR_11 = VAR_8->trailer_len;
  VAR_12 = sizeof(struct ath10k_ath10k_htc_record_hdr);

  if ((VAR_11 < VAR_12) ||
      (VAR_11 > VAR_10)) {
   FUNC_4(VAR_4, "Invalid trailer length: %d\n",
        VAR_11);
   goto out;
  }

  VAR_15 = (u8 *)VAR_8;
  VAR_15 += sizeof(*VAR_8);
  VAR_15 += VAR_10;
  VAR_15 -= VAR_11;
  VAR_6 = FUNC_3(VAR_7, VAR_15,
          VAR_11, VAR_8->eid,
          ((void*)0), ((void*)0));
  if (VAR_6)
   goto out;

  FUNC_7(VAR_5, VAR_5->len - VAR_11);
 }

 if (((int)VAR_10 - (int)VAR_11) <= 0)

  goto out;

 FUNC_1(VAR_4, VAR_0, "htc rx completion ep %d skb %pK\n",
     VAR_13, VAR_5);
 VAR_9->ep_ops.ep_rx_complete(VAR_4, VAR_5);


 VAR_5 = ((void*)0);
out:
 FUNC_5(VAR_5);
}
