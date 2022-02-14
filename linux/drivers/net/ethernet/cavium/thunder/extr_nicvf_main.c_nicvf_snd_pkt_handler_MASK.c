
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct sq_hdr_subdesc {scalar_t__ subdesc_type; size_t rsvd2; scalar_t__ subdesc_cnt; scalar_t__ dont_send; } ;
struct snd_queue {void** skbuff; void** xdp_page; scalar_t__ is_xdp; } ;
struct sk_buff {scalar_t__ len; } ;
struct page {int dummy; } ;
struct nicvf {int hw_tso; TYPE_3__* pnicvf; TYPE_1__* qs; } ;
struct net_device {int dummy; } ;
struct cqe_send_t {size_t sq_idx; size_t sqe_ptr; scalar_t__ send_status; } ;
struct TYPE_6__ {struct sk_buff* ptp_skb; } ;
struct TYPE_5__ {int tx_flags; } ;
struct TYPE_4__ {struct snd_queue* sq; } ;


 scalar_t__ FUNC_0 (struct snd_queue*,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct nicvf* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_3__*,struct cqe_send_t*) ;
 int FUNC_4 (struct nicvf*,struct snd_queue*,size_t,scalar_t__) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct page*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2,
      struct cqe_send_t *VAR_3,
      int VAR_4, int *VAR_5,
      unsigned int *VAR_6, unsigned int *VAR_7)
{
 struct sk_buff *VAR_8 = ((void*)0);
 struct page *VAR_9;
 struct nicvf *VAR_10 = FUNC_2(VAR_2);
 struct snd_queue *VAR_11;
 struct sq_hdr_subdesc *VAR_12;
 struct sq_hdr_subdesc *VAR_13;

 VAR_11 = &VAR_10->qs->sq[VAR_3->sq_idx];

 VAR_12 = (struct sq_hdr_subdesc *)FUNC_0(VAR_11, VAR_3->sqe_ptr);
 if (VAR_12->subdesc_type != VAR_1)
  return;


 if (VAR_3->send_status)
  FUNC_3(VAR_10->pnicvf, VAR_3);


 if (VAR_11->is_xdp) {
  VAR_9 = (struct page *)VAR_11->xdp_page[VAR_3->sqe_ptr];

  if (VAR_9 && (FUNC_5(VAR_9) == 1))
   FUNC_4(VAR_10, VAR_11, VAR_3->sqe_ptr,
       VAR_12->subdesc_cnt);


  if (VAR_9)
   FUNC_7(VAR_9);
  VAR_11->xdp_page[VAR_3->sqe_ptr] = (u64)((void*)0);
  *VAR_5 += VAR_12->subdesc_cnt + 1;
  return;
 }

 VAR_8 = (struct sk_buff *)VAR_11->skbuff[VAR_3->sqe_ptr];
 if (VAR_8) {

  if (VAR_12->dont_send) {

   VAR_13 =
    (struct sq_hdr_subdesc *)FUNC_0(VAR_11, VAR_12->rsvd2);
   FUNC_4(VAR_10, VAR_11, VAR_12->rsvd2,
       VAR_13->subdesc_cnt);
   *VAR_5 += VAR_13->subdesc_cnt + 1;
  } else {
   FUNC_4(VAR_10, VAR_11, VAR_3->sqe_ptr,
       VAR_12->subdesc_cnt);
  }
  *VAR_5 += VAR_12->subdesc_cnt + 1;
  FUNC_6(VAR_8);
  (*VAR_6)++;
  *VAR_7 += VAR_8->len;

  if (FUNC_8(VAR_8)->tx_flags & VAR_0 &&
      !VAR_10->pnicvf->ptp_skb)
   VAR_10->pnicvf->ptp_skb = VAR_8;
  else
   FUNC_1(VAR_8, VAR_4);
  VAR_11->skbuff[VAR_3->sqe_ptr] = (u64)((void*)0);
 } else {



  if (!VAR_10->hw_tso)
   *VAR_5 += VAR_12->subdesc_cnt + 1;
 }
}
