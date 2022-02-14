
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {int tid; int flags; int state; int daddr; int saddr; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_abort_rpl_rss {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct cpl_abort_rpl_rss*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct cxgb4_lld_info* FUNC_2 (struct cxgbi_device*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 struct cxgbi_sock* FUNC_4 (struct tid_info*,unsigned int) ;
 int FUNC_5 (char*,int *,int *,struct cxgbi_sock*,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cxgbi_device *VAR_1, struct sk_buff *VAR_2)
{
 struct cxgbi_sock *VAR_3;
 struct cpl_abort_rpl_rss *VAR_4 = (struct cpl_abort_rpl_rss *)VAR_2->data;
 unsigned int VAR_5 = FUNC_0(VAR_4);
 struct cxgb4_lld_info *VAR_6 = FUNC_2(VAR_1);
 struct tid_info *VAR_7 = VAR_6->tids;

 VAR_3 = FUNC_4(VAR_7, VAR_5);
 if (!VAR_3)
  goto rel_skb;

 if (VAR_3)
  FUNC_5("csk 0x%p,%u,0x%lx,%u, status %u.\n",
          (&VAR_3->saddr), (&VAR_3->daddr), VAR_3,
          VAR_3->state, VAR_3->flags, VAR_3->tid, VAR_4->status);

 if (VAR_4->status == VAR_0)
  goto rel_skb;

 FUNC_3(VAR_3);
rel_skb:
 FUNC_1(VAR_2);
}
