
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {int lock; int err; int tid; int flags; int state; int daddr; int saddr; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_abort_req_rss {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct cpl_abort_req_rss*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct cxgbi_sock*,int ,int*) ;
 struct cxgb4_lld_info* FUNC_3 (struct cxgbi_device*) ;
 int FUNC_4 (struct cxgbi_sock*,int ) ;
 int FUNC_5 (struct cxgbi_sock*) ;
 int FUNC_6 (struct cxgbi_sock*,int ) ;
 int FUNC_7 (struct cxgbi_sock*) ;
 int FUNC_8 (struct cxgbi_sock*) ;
 int FUNC_9 (struct cxgbi_sock*,int ) ;
 int FUNC_10 (struct cxgbi_sock*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 struct cxgbi_sock* FUNC_12 (struct tid_info*,unsigned int) ;
 int FUNC_13 (char*,unsigned int) ;
 int FUNC_14 (char*,int *,int *,struct cxgbi_sock*,int ,int ,int ,int ) ;
 int FUNC_15 (struct cxgbi_sock*,int) ;
 int FUNC_16 (struct cxgbi_sock*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(struct cxgbi_device *VAR_5, struct sk_buff *VAR_6)
{
 struct cxgbi_sock *VAR_7;
 struct cpl_abort_req_rss *VAR_8 = (struct cpl_abort_req_rss *)VAR_6->data;
 unsigned int VAR_9 = FUNC_0(VAR_8);
 struct cxgb4_lld_info *VAR_10 = FUNC_3(VAR_5);
 struct tid_info *VAR_11 = VAR_10->tids;
 int VAR_12 = VAR_0;

 VAR_7 = FUNC_12(VAR_11, VAR_9);
 if (FUNC_19(!VAR_7)) {
  FUNC_13("can't find connection for tid %u.\n", VAR_9);
  goto rel_skb;
 }

 FUNC_14("csk 0x%p,%u,0x%lx,%u, status %u.\n",
         (&VAR_7->saddr), (&VAR_7->daddr),
         VAR_7, VAR_7->state, VAR_7->flags, VAR_7->tid, VAR_8->status);

 if (FUNC_11(VAR_8->status))
  goto rel_skb;

 FUNC_7(VAR_7);
 FUNC_17(&VAR_7->lock);

 FUNC_4(VAR_7, VAR_1);

 if (!FUNC_6(VAR_7, VAR_3)) {
  FUNC_16(VAR_7);
  FUNC_9(VAR_7, VAR_3);
 }

 FUNC_9(VAR_7, VAR_1);
 FUNC_10(VAR_7, VAR_4);

 FUNC_15(VAR_7, VAR_12);

 if (!FUNC_6(VAR_7, VAR_2)) {
  VAR_7->err = FUNC_2(VAR_7, VAR_8->status, &VAR_12);
  FUNC_5(VAR_7);
 }

 FUNC_18(&VAR_7->lock);
 FUNC_8(VAR_7);
rel_skb:
 FUNC_1(VAR_6);
}
