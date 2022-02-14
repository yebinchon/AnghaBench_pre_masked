
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct cxgbi_sock {int lock; int l2t; int tid; int flags; int state; } ;
struct cpl_act_open_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int,int ,int ) ;
 struct cxgbi_sock* VAR_5 ;
 int FUNC_1 (struct cxgbi_sock*,int ) ;
 int FUNC_2 (struct cxgbi_sock*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 struct cxgbi_sock* FUNC_4 (int ,struct timer_list*,int ) ;
 int FUNC_5 (int,char*,struct cxgbi_sock*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (struct cxgbi_sock*,struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_7)
{
 struct cxgbi_sock *VAR_8 = FUNC_4(VAR_8, VAR_7, VAR_6);
 struct sk_buff *VAR_9;

 FUNC_5(1 << VAR_1 | 1 << VAR_0,
  "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_8, VAR_8->state, VAR_8->flags, VAR_8->tid);

 FUNC_2(VAR_8);
 FUNC_8(&VAR_8->lock);
 VAR_9 = FUNC_0(sizeof(struct cpl_act_open_req), 0, VAR_3);
 if (!VAR_9)
  FUNC_1(VAR_8, -VAR_2);
 else {
  VAR_9->sk = (struct sock *)VAR_8;
  FUNC_7(VAR_9, VAR_4);
  FUNC_6(VAR_8, VAR_9, VAR_8->l2t);
 }
 FUNC_9(&VAR_8->lock);
 FUNC_3(VAR_8);
}
