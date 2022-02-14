
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {scalar_t__ dc_task; int dquot_drop_work; int ocfs2_wq; int dquot_drop_list; } ;
struct ocfs2_mem_dqinfo {int dummy; } ;
struct TYPE_5__ {int type; } ;
struct dquot {int dq_lock; int dq_flags; scalar_t__ dq_off; TYPE_2__ dq_id; int dq_sb; int dq_count; } ;
typedef int handle_t ;
struct TYPE_6__ {int list; } ;
struct TYPE_4__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (struct dquot*) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct dquot*) ;
 int FUNC_7 (int *,TYPE_2__) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct ocfs2_super*,int *) ;
 int FUNC_14 (struct dquot*) ;
 int FUNC_15 (int *,struct dquot*) ;
 int FUNC_16 (struct ocfs2_mem_dqinfo*,int) ;
 int * FUNC_17 (struct ocfs2_super*,int ) ;
 int FUNC_18 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_19 (int ,int *) ;
 TYPE_1__* FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;

__attribute__((used)) static int FUNC_22(struct dquot *VAR_3)
{
 handle_t *VAR_4;
 struct ocfs2_mem_dqinfo *VAR_5 =
   FUNC_20(VAR_3->dq_sb, VAR_3->dq_id.type)->dqi_priv;
 struct ocfs2_super *VAR_6 = FUNC_2(VAR_3->dq_sb);
 int VAR_7 = 0;

 FUNC_21(FUNC_7(&VAR_2, VAR_3->dq_id),
      VAR_3->dq_id.type);

 FUNC_10(&VAR_3->dq_lock);

 if (FUNC_4(&VAR_3->dq_count) > 1)
  goto out;

 if (VAR_1 == VAR_6->dc_task) {





  FUNC_6(VAR_3);

  if (FUNC_8(&FUNC_1(VAR_3)->list, &VAR_6->dquot_drop_list))
   FUNC_19(VAR_6->ocfs2_wq, &VAR_6->dquot_drop_work);
  goto out;
 }
 VAR_7 = FUNC_16(VAR_5, 1);
 if (VAR_7 < 0)
  goto out;
 VAR_4 = FUNC_17(VAR_6,
  FUNC_12(VAR_3->dq_sb, VAR_3->dq_id.type));
 if (FUNC_0(VAR_4)) {
  VAR_7 = FUNC_3(VAR_4);
  FUNC_9(VAR_7);
  goto out_ilock;
 }

 VAR_7 = FUNC_14(VAR_3);
 if (VAR_7 < 0) {
  FUNC_9(VAR_7);
  goto out_trans;
 }
 VAR_7 = FUNC_15(VAR_4, VAR_3);




 if (VAR_7 < 0)
  FUNC_9(VAR_7);





 VAR_3->dq_off = 0;
 FUNC_5(VAR_0, &VAR_3->dq_flags);
out_trans:
 FUNC_13(VAR_6, VAR_4);
out_ilock:
 FUNC_18(VAR_5, 1);
out:
 FUNC_11(&VAR_3->dq_lock);
 if (VAR_7)
  FUNC_9(VAR_7);
 return VAR_7;
}
