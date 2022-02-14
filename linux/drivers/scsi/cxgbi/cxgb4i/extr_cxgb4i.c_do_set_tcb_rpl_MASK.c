
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {int cmpl; int err; int tid; int flags; int state; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_set_tcb_rpl {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct cpl_set_tcb_rpl*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 struct cxgb4_lld_info* FUNC_3 (struct cxgbi_device*) ;
 int FUNC_4 (int,char*,struct cxgbi_sock*,int ,int ,int ,scalar_t__) ;
 struct cxgbi_sock* FUNC_5 (struct tid_info*,unsigned int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(struct cxgbi_device *VAR_4, struct sk_buff *VAR_5)
{
 struct cpl_set_tcb_rpl *VAR_6 = (struct cpl_set_tcb_rpl *)VAR_5->data;
 unsigned int VAR_7 = FUNC_0(VAR_6);
 struct cxgb4_lld_info *VAR_8 = FUNC_3(VAR_4);
 struct tid_info *VAR_9 = VAR_8->tids;
 struct cxgbi_sock *VAR_10;

 VAR_10 = FUNC_5(VAR_9, VAR_7);
 if (!VAR_10) {
  FUNC_6("can't find conn. for tid %u.\n", VAR_7);
  return;
 }

 FUNC_4(1 << VAR_2 | 1 << VAR_1,
  "csk 0x%p,%u,%lx,%u, status 0x%x.\n",
  VAR_10, VAR_10->state, VAR_10->flags, VAR_10->tid, VAR_6->status);

 if (VAR_6->status != VAR_0) {
  FUNC_6("csk 0x%p,%u, SET_TCB_RPL status %u.\n",
   VAR_10, VAR_7, VAR_6->status);
  VAR_10->err = -VAR_3;
 }

 FUNC_2(&VAR_10->cmpl);

 FUNC_1(VAR_5);
}
