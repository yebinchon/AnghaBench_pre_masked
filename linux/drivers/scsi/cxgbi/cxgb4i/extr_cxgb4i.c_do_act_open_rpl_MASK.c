
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ function; } ;
struct cxgbi_sock {int lock; TYPE_1__ retry_timer; int csk_family; int port_id; int flags; int state; int daddr; int saddr; } ;
struct cxgbi_device {int owner; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_act_open_rpl {int atid_status; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (struct cpl_act_open_rpl*) ;
 int VAR_3 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct tid_info*,int ,unsigned int,int ) ;
 struct cxgb4_lld_info* FUNC_8 (struct cxgbi_device*) ;
 int FUNC_9 (struct cxgbi_sock*,int ) ;
 int FUNC_10 (struct cxgbi_sock*) ;
 int FUNC_11 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_12 (unsigned int) ;
 scalar_t__ VAR_5 ;
 struct cxgbi_sock* FUNC_13 (struct tid_info*,unsigned int) ;
 int FUNC_14 (TYPE_1__*,scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,unsigned int,unsigned int) ;
 int FUNC_17 (char*,int *,int *,unsigned int,unsigned int,unsigned int,struct cxgbi_sock*,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static void FUNC_21(struct cxgbi_device *VAR_6, struct sk_buff *VAR_7)
{
 struct cxgbi_sock *VAR_8;
 struct cpl_act_open_rpl *VAR_9 = (struct cpl_act_open_rpl *)VAR_7->data;
 unsigned int VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11 =
  FUNC_3(FUNC_0(FUNC_6(VAR_9->atid_status)));
 unsigned int VAR_12 = FUNC_1(FUNC_6(VAR_9->atid_status));
 struct cxgb4_lld_info *VAR_13 = FUNC_8(VAR_6);
 struct tid_info *VAR_14 = VAR_13->tids;

 VAR_8 = FUNC_13(VAR_14, VAR_11);
 if (FUNC_20(!VAR_8)) {
  FUNC_16("NO matching conn. atid %u, tid %u.\n", VAR_11, VAR_10);
  goto rel_skb;
 }

 FUNC_17("tid %u/%u, status %u.\n"
         "csk 0x%p,%u,0x%lx. ", (&VAR_8->saddr), (&VAR_8->daddr),
         VAR_11, VAR_10, VAR_12, VAR_8, VAR_8->state, VAR_8->flags);

 if (FUNC_12(VAR_12))
  goto rel_skb;

 FUNC_15(VAR_6->owner);

 if (VAR_12 && VAR_12 != VAR_2 &&
     VAR_12 != VAR_1 &&
     VAR_12 != VAR_0)
  FUNC_7(VAR_13->tids, VAR_8->port_id, FUNC_2(VAR_9),
     VAR_8->csk_family);

 FUNC_10(VAR_8);
 FUNC_18(&VAR_8->lock);

 if (VAR_12 == VAR_1 &&
     VAR_8->retry_timer.function != VAR_4) {
  VAR_8->retry_timer.function = VAR_4;
  FUNC_14(&VAR_8->retry_timer, VAR_5 + VAR_3 / 2);
 } else
  FUNC_9(VAR_8,
     FUNC_5(VAR_12));

 FUNC_19(&VAR_8->lock);
 FUNC_11(VAR_8);
rel_skb:
 FUNC_4(VAR_7);
}
