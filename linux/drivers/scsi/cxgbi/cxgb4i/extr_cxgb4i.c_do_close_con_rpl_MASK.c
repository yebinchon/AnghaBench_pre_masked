
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {int tid; int flags; int state; int daddr; int saddr; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_close_con_rpl {int snd_nxt; } ;


 unsigned int FUNC_0 (struct cpl_close_con_rpl*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct cxgb4_lld_info* FUNC_2 (struct cxgbi_device*) ;
 int FUNC_3 (struct cxgbi_sock*,int ) ;
 struct cxgbi_sock* FUNC_4 (struct tid_info*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (char*,int *,int *,struct cxgbi_sock*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct cxgbi_device *VAR_0, struct sk_buff *VAR_1)
{
 struct cxgbi_sock *VAR_2;
 struct cpl_close_con_rpl *VAR_3 = (struct cpl_close_con_rpl *)VAR_1->data;
 unsigned int VAR_4 = FUNC_0(VAR_3);
 struct cxgb4_lld_info *VAR_5 = FUNC_2(VAR_0);
 struct tid_info *VAR_6 = VAR_5->tids;

 VAR_2 = FUNC_4(VAR_6, VAR_4);
 if (FUNC_8(!VAR_2)) {
  FUNC_6("can't find connection for tid %u.\n", VAR_4);
  goto rel_skb;
 }
 FUNC_7("csk 0x%p,%u,0x%lx,%u.\n",
         (&VAR_2->saddr), (&VAR_2->daddr),
         VAR_2, VAR_2->state, VAR_2->flags, VAR_2->tid);
 FUNC_3(VAR_2, FUNC_5(VAR_3->snd_nxt));
rel_skb:
 FUNC_1(VAR_1);
}
