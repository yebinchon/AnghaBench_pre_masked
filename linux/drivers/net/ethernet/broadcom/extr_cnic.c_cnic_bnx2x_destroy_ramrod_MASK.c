
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef size_t u32 ;
struct cnic_local {struct cnic_context* ctx_tbl; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct cnic_context {int ctx_flags; scalar_t__ wait_cond; int waitq; int cid; } ;
struct bnx2x {int dummy; } ;
typedef int l5_data ;


 size_t FUNC_0 (struct bnx2x*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cnic_dev*,int ,size_t,int ,union l5cm_specific_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (union l5cm_specific_data*,int ,int) ;
 struct bnx2x* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(struct cnic_dev *VAR_5, u32 VAR_6)
{
 struct cnic_local *VAR_7 = VAR_5->cnic_priv;
 struct bnx2x *VAR_8 = FUNC_4(VAR_5->netdev);
 struct cnic_context *VAR_9 = &VAR_7->ctx_tbl[VAR_6];
 union l5cm_specific_data VAR_10;
 int VAR_11;
 u32 VAR_12;

 FUNC_2(&VAR_9->waitq);
 VAR_9->wait_cond = 0;
 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_12 = FUNC_0(VAR_8, VAR_9->cid);

 VAR_11 = FUNC_1(VAR_5, VAR_4,
      VAR_12, VAR_3, &VAR_10);

 if (VAR_11 == 0) {
  FUNC_7(VAR_9->waitq, VAR_9->wait_cond, VAR_0);
  if (FUNC_6(FUNC_5(VAR_1, &VAR_9->ctx_flags)))
   return -VAR_2;
 }

 return 0;
}
