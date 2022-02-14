
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visornic_devdata {int num_rcv_bufs; int bad_rcv_buf; int n_repost_deficit; struct sk_buff** rcvbuf; int alloc_failed_in_repost_rtn_cnt; int num_rcv_bufs_could_not_alloc; int repost_found_skb_cnt; int found_repost_rcvbuf_cnt; int n_rcvx; int n_rcv2; int n_rcv1; int n_rcv0; } ;
struct net_pkt_rcv {int numrcvbufs; struct sk_buff** rcvbuf; } ;
struct TYPE_2__ {struct net_pkt_rcv rcv; } ;
struct uiscmdrsp {TYPE_1__ net; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct uiscmdrsp*,struct visornic_devdata*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct uiscmdrsp *VAR_2,
    struct visornic_devdata *VAR_3,
    struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct net_pkt_rcv VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 VAR_6 = VAR_2->net.rcv;
 switch (VAR_6.numrcvbufs) {
 case 0:
  VAR_3->n_rcv0++;
  break;
 case 1:
  VAR_3->n_rcv1++;
  break;
 case 2:
  VAR_3->n_rcv2++;
  break;
 default:
  VAR_3->n_rcvx++;
  break;
 }
 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_6.numrcvbufs; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_3->num_rcv_bufs; VAR_7++) {
   if (VAR_3->rcvbuf[VAR_7] != VAR_6.rcvbuf[VAR_8])
    continue;

   if ((VAR_4) && VAR_3->rcvbuf[VAR_7] == VAR_4) {
    VAR_3->found_repost_rcvbuf_cnt++;
    VAR_10 = 1;
    VAR_3->repost_found_skb_cnt++;
   }
   VAR_3->rcvbuf[VAR_7] = FUNC_0(VAR_5);
   if (!VAR_3->rcvbuf[VAR_7]) {
    VAR_3->num_rcv_bufs_could_not_alloc++;
    VAR_3->alloc_failed_in_repost_rtn_cnt++;
    VAR_11 = -VAR_1;
    break;
   }
   VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_3->rcvbuf[VAR_7]);
   if (VAR_11) {
    FUNC_1(VAR_3->rcvbuf[VAR_7]);
    VAR_3->rcvbuf[VAR_7] = ((void*)0);
    break;
   }
   VAR_9++;
   break;
  }
 }
 if (VAR_9 != VAR_6.numrcvbufs) {
  VAR_3->n_repost_deficit++;
  VAR_11 = -VAR_0;
 }
 if (VAR_4) {
  if (VAR_10) {
   FUNC_1(VAR_4);
  } else {
   VAR_11 = -VAR_0;
   VAR_3->bad_rcv_buf++;
  }
 }
 return VAR_11;
}
