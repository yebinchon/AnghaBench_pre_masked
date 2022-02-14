
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct qedf_skb_work {int work; struct qedf_ctx* qedf; struct sk_buff* skb; } ;
struct qedf_ctx {int ll2_recv_wq; int dbg_ctx; int link_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 struct qedf_skb_work* FUNC_5 (int,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_4, struct sk_buff *VAR_5,
 u32 VAR_6, u32 VAR_7)
{
 struct qedf_ctx *VAR_8 = (struct qedf_ctx *)VAR_4;
 struct qedf_skb_work *VAR_9;

 if (FUNC_3(&VAR_8->link_state) == VAR_1) {
  FUNC_1(&VAR_8->dbg_ctx, VAR_2,
     "Dropping frame as link state is down.\n");
  FUNC_4(VAR_5);
  return 0;
 }

 VAR_9 = FUNC_5(sizeof(struct qedf_skb_work), VAR_0);
 if (!VAR_9) {
  FUNC_2(&(VAR_8->dbg_ctx), "Could not allocate skb_work so "
      "dropping frame.\n");
  FUNC_4(VAR_5);
  return 0;
 }

 FUNC_0(&VAR_9->work, VAR_3);
 VAR_9->skb = VAR_5;
 VAR_9->qedf = VAR_8;
 FUNC_6(VAR_8->ll2_recv_wq, &VAR_9->work);

 return 0;
}
