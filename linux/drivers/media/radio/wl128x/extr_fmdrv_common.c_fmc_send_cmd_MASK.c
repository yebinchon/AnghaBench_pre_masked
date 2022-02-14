
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct fmdev {int resp_skb_lock; struct sk_buff* resp_skb; int maintask_comp; } ;
struct fm_event_msg_hdr {int status; unsigned int dlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fmdev*,int ,int ,void*,unsigned int,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (void*,scalar_t__,unsigned int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,int ) ;

int FUNC_10(struct fmdev *VAR_4, u8 VAR_5, u16 VAR_6, void *VAR_7,
  unsigned int VAR_8, void *VAR_9, int *VAR_10)
{
 struct sk_buff *VAR_11;
 struct fm_event_msg_hdr *VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_2(&VAR_4->maintask_comp);
 VAR_14 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
       &VAR_4->maintask_comp);
 if (VAR_14)
  return VAR_14;

 if (!FUNC_9(&VAR_4->maintask_comp,
      VAR_3)) {
  FUNC_1("Timeout(%d sec),didn't get regcompletion signal from RX tasklet\n",
      FUNC_3(VAR_3) / 1000);
  return -VAR_2;
 }
 if (!VAR_4->resp_skb) {
  FUNC_1("Response SKB is missing\n");
  return -VAR_0;
 }
 FUNC_7(&VAR_4->resp_skb_lock, VAR_13);
 VAR_11 = VAR_4->resp_skb;
 VAR_4->resp_skb = ((void*)0);
 FUNC_8(&VAR_4->resp_skb_lock, VAR_13);

 VAR_12 = (void *)VAR_11->data;
 if (VAR_12->status != 0) {
  FUNC_1("Received event pkt status(%d) is not zero\n",
      VAR_12->status);
  FUNC_4(VAR_11);
  return -VAR_1;
 }

 if (VAR_9 != ((void*)0) && VAR_10 != ((void*)0) && VAR_12->dlen &&
     VAR_12->dlen <= VAR_8) {

  FUNC_6(VAR_11, sizeof(struct fm_event_msg_hdr));
  FUNC_5(VAR_9, VAR_11->data, VAR_12->dlen);
  *VAR_10 = VAR_12->dlen;
 } else if (VAR_10 != ((void*)0) && VAR_12->dlen == 0) {
  *VAR_10 = 0;
 }
 FUNC_4(VAR_11);

 return 0;
}
