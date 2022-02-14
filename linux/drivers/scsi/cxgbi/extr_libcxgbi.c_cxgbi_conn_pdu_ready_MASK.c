
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int copied_seq; int len; int receive_queue; struct iscsi_conn* user_data; struct cxgbi_device* cdev; } ;
struct iscsi_conn {int suspend_rx; int id; unsigned int rxdata_octets; } ;
struct cxgbi_sock {unsigned int copied_seq; int len; int receive_queue; struct iscsi_conn* user_data; struct cxgbi_device* cdev; } ;
struct cxgbi_device {scalar_t__ skb_rx_extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct iscsi_conn*,int ) ;
 int FUNC_7 (int,char*,struct sk_buff*,...) ;
 int FUNC_8 (char*,struct sk_buff*,struct sk_buff*,int ,unsigned int,scalar_t__,...) ;
 int FUNC_9 (char*,struct sk_buff*,struct iscsi_conn*,int,unsigned int) ;
 struct sk_buff* FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*,struct iscsi_conn*,struct sk_buff*) ;
 int FUNC_12 (struct iscsi_conn*,struct sk_buff*,struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(struct cxgbi_sock *VAR_6)
{
 struct cxgbi_device *VAR_7 = VAR_6->cdev;
 struct iscsi_conn *VAR_8 = VAR_6->user_data;
 struct sk_buff *VAR_9;
 unsigned int VAR_10 = 0;
 int VAR_11 = 0;

 FUNC_7(1 << VAR_0,
  "csk 0x%p, conn 0x%p.\n", VAR_6, VAR_8);

 if (FUNC_13(!VAR_8 || VAR_8->suspend_rx)) {
  FUNC_7(1 << VAR_0,
   "csk 0x%p, conn 0x%p, id %d, suspend_rx %lu!\n",
   VAR_6, VAR_8, VAR_8 ? VAR_8->id : 0xFF,
   VAR_8 ? VAR_8->suspend_rx : 0xFF);
  return;
 }

 while (!VAR_11) {
  VAR_9 = FUNC_10(&VAR_6->receive_queue);
  if (!VAR_9 ||
      !(FUNC_5(VAR_9, VAR_5))) {
   if (VAR_9)
    FUNC_7(1 << VAR_0,
     "skb 0x%p, NOT ready 0x%lx.\n",
     VAR_9, FUNC_3(VAR_9));
   break;
  }
  FUNC_1(VAR_9, &VAR_6->receive_queue);

  VAR_10 += FUNC_4(VAR_9);
  FUNC_7(1 << VAR_0,
   "csk 0x%p, skb 0x%p,%u,f 0x%lx, pdu len %u.\n",
   VAR_6, VAR_9, VAR_9->len, FUNC_3(VAR_9),
   FUNC_4(VAR_9));

  if (FUNC_5(VAR_9, VAR_3)) {
   VAR_11 = FUNC_11(VAR_6, VAR_8, VAR_9);
   if (VAR_11 < 0) {
    FUNC_8("coalesced bhs, csk 0x%p, skb 0x%p,%u, "
     "f 0x%lx, plen %u.\n",
     VAR_6, VAR_9, VAR_9->len,
     FUNC_3(VAR_9),
     FUNC_4(VAR_9));
    goto skb_done;
   }
   VAR_11 = FUNC_12(VAR_8, VAR_9, VAR_9,
      VAR_11 + VAR_7->skb_rx_extra);
   if (VAR_11 < 0)
    FUNC_8("coalesced data, csk 0x%p, skb 0x%p,%u, "
     "f 0x%lx, plen %u.\n",
     VAR_6, VAR_9, VAR_9->len,
     FUNC_3(VAR_9),
     FUNC_4(VAR_9));
  } else {
   VAR_11 = FUNC_11(VAR_6, VAR_8, VAR_9);
   if (VAR_11 < 0) {
    FUNC_8("bhs, csk 0x%p, skb 0x%p,%u, "
     "f 0x%lx, plen %u.\n",
     VAR_6, VAR_9, VAR_9->len,
     FUNC_3(VAR_9),
     FUNC_4(VAR_9));
    goto skb_done;
   }

   if (FUNC_5(VAR_9, VAR_4)) {
    struct sk_buff *VAR_12;

    VAR_12 = FUNC_10(&VAR_6->receive_queue);
    if (!VAR_12) {
     FUNC_8("csk 0x%p, skb 0x%p,%u, f 0x%lx,"
      " plen %u, NO data.\n",
      VAR_6, VAR_9, VAR_9->len,
      FUNC_3(VAR_9),
      FUNC_4(VAR_9));
     VAR_11 = -VAR_1;
     goto skb_done;
    }
    FUNC_1(VAR_12, &VAR_6->receive_queue);

    VAR_11 = FUNC_12(VAR_8, VAR_9, VAR_12, 0);
    if (VAR_11 < 0)
     FUNC_8("data, csk 0x%p, skb 0x%p,%u, "
      "f 0x%lx, plen %u, dskb 0x%p,"
      "%u.\n",
      VAR_6, VAR_9, VAR_9->len,
      FUNC_3(VAR_9),
      FUNC_4(VAR_9),
      VAR_12, VAR_12->len);
    FUNC_0(VAR_12);
   } else
    VAR_11 = FUNC_12(VAR_8, VAR_9, VAR_9, 0);
  }
skb_done:
  FUNC_0(VAR_9);

  if (VAR_11 < 0)
   break;
 }

 FUNC_7(1 << VAR_0, "csk 0x%p, read %u.\n", VAR_6, VAR_10);
 if (VAR_10) {
  VAR_6->copied_seq += VAR_10;
  FUNC_2(VAR_6, VAR_10);
  VAR_8->rxdata_octets += VAR_10;
 }

 if (VAR_11 < 0) {
  FUNC_9("csk 0x%p, 0x%p, rx failed %d, read %u.\n",
   VAR_6, VAR_8, VAR_11, VAR_10);
  FUNC_6(VAR_8, VAR_2);
 }
}
