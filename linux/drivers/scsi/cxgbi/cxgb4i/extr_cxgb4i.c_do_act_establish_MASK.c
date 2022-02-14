
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int * function; } ;
struct cxgbi_sock {unsigned int atid; scalar_t__ state; unsigned int tid; int rcv_win; int advmss; int lock; int write_queue; int rcv_wup; int rcv_nxt; int copied_seq; TYPE_1__ retry_timer; int flags; int csk_family; int daddr; int saddr; } ;
struct cxgbi_device {int owner; } ;
struct cxgb4_lld_info {int* mtus; struct tid_info* tids; } ;
struct cpl_act_establish {int tcp_opt; int snd_isn; int rcv_isn; int tos_atid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct cpl_act_establish*) ;
 int VAR_5 ;
 size_t FUNC_1 (unsigned short) ;
 scalar_t__ FUNC_2 (unsigned short) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tid_info*,struct cxgbi_sock*,unsigned int,int ) ;
 struct cxgb4_lld_info* FUNC_7 (struct cxgbi_device*) ;
 int FUNC_8 (struct cxgbi_sock*) ;
 int FUNC_9 (struct cxgbi_sock*,int ,unsigned short) ;
 int FUNC_10 (struct cxgbi_sock*,int ) ;
 int FUNC_11 (struct cxgbi_sock*) ;
 int FUNC_12 (struct cxgbi_sock*,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct cxgbi_sock*) ;
 int FUNC_15 (int,char*,struct cxgbi_sock*,size_t,int) ;
 struct cxgbi_sock* FUNC_16 (struct tid_info*,unsigned int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 unsigned short FUNC_19 (int ) ;
 int FUNC_20 (char*,unsigned int,...) ;
 int FUNC_21 (char*,struct cxgbi_sock*,scalar_t__,int ,unsigned int) ;
 int FUNC_22 (char*,int *,int *,unsigned int,unsigned int,struct cxgbi_sock*,scalar_t__,int ,int ) ;
 int FUNC_23 (struct cxgbi_sock*,int ) ;
 int FUNC_24 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int) ;

__attribute__((used)) static void FUNC_29(struct cxgbi_device *VAR_6, struct sk_buff *VAR_7)
{
 struct cxgbi_sock *VAR_8;
 struct cpl_act_establish *VAR_9 = (struct cpl_act_establish *)VAR_7->data;
 unsigned short VAR_10 = FUNC_19(VAR_9->tcp_opt);
 unsigned int VAR_11 = FUNC_0(VAR_9);
 unsigned int VAR_12 = FUNC_3(FUNC_18(VAR_9->tos_atid));
 struct cxgb4_lld_info *VAR_13 = FUNC_7(VAR_6);
 struct tid_info *VAR_14 = VAR_13->tids;
 u32 VAR_15 = FUNC_5(VAR_9->rcv_isn);

 VAR_8 = FUNC_16(VAR_14, VAR_12);
 if (FUNC_28(!VAR_8)) {
  FUNC_20("NO conn. for atid %u, cdev 0x%p.\n", VAR_12, VAR_6);
  goto rel_skb;
 }

 if (VAR_8->atid != VAR_12) {
  FUNC_20("bad conn atid %u, csk 0x%p,%u,0x%lx,tid %u, atid %u.\n",
   VAR_12, VAR_8, VAR_8->state, VAR_8->flags, VAR_8->tid, VAR_8->atid);
  goto rel_skb;
 }

 FUNC_22("atid 0x%x, tid 0x%x, csk 0x%p,%u,0x%lx, isn %u.\n",
         (&VAR_8->saddr), (&VAR_8->daddr),
         VAR_12, VAR_11, VAR_8, VAR_8->state, VAR_8->flags, VAR_15);

 FUNC_17(VAR_6->owner);

 FUNC_11(VAR_8);
 VAR_8->tid = VAR_11;
 FUNC_6(VAR_13->tids, VAR_8, VAR_11, VAR_8->csk_family);
 FUNC_12(VAR_8, VAR_1);

 FUNC_14(VAR_8);

 FUNC_26(&VAR_8->lock);
 if (FUNC_28(VAR_8->state != VAR_2))
  FUNC_21("csk 0x%p,%u,0x%lx,%u, got EST.\n",
   VAR_8, VAR_8->state, VAR_8->flags, VAR_8->tid);

 if (VAR_8->retry_timer.function) {
  FUNC_13(&VAR_8->retry_timer);
  VAR_8->retry_timer.function = ((void*)0);
 }

 VAR_8->copied_seq = VAR_8->rcv_wup = VAR_8->rcv_nxt = VAR_15;




 if (VAR_8->rcv_win > (VAR_5 << 10))
  VAR_8->rcv_wup -= VAR_8->rcv_win - (VAR_5 << 10);

 VAR_8->advmss = VAR_13->mtus[FUNC_1(VAR_10)] - 40;
 if (FUNC_2(VAR_10))
  VAR_8->advmss -= 12;
 if (VAR_8->advmss < 128)
  VAR_8->advmss = 128;

 FUNC_15(1 << VAR_4 | 1 << VAR_3,
  "csk 0x%p, mss_idx %u, advmss %u.\n",
   VAR_8, FUNC_1(VAR_10), VAR_8->advmss);

 FUNC_9(VAR_8, FUNC_18(VAR_9->snd_isn), FUNC_19(VAR_9->tcp_opt));

 if (FUNC_28(FUNC_10(VAR_8, VAR_0)))
  FUNC_24(VAR_8);
 else {
  if (FUNC_25(&VAR_8->write_queue))
   FUNC_23(VAR_8, 0);
  FUNC_8(VAR_8);
 }
 FUNC_27(&VAR_8->lock);

rel_skb:
 FUNC_4(VAR_7);
}
