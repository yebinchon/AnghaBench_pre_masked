
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* dq_op; } ;
struct qc_dqblk {int dummy; } ;
struct kqid {int dummy; } ;
struct dquot {int dummy; } ;
struct TYPE_2__ {int (* get_next_id ) (struct super_block*,struct kqid*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dquot*) ;
 int FUNC_1 (struct dquot*) ;
 int FUNC_2 (struct dquot*,struct qc_dqblk*) ;
 struct dquot* FUNC_3 (struct super_block*,struct kqid) ;
 int FUNC_4 (struct dquot*) ;
 int FUNC_5 (struct super_block*,struct kqid*) ;

int FUNC_6(struct super_block *VAR_1, struct kqid *VAR_2,
    struct qc_dqblk *VAR_3)
{
 struct dquot *VAR_4;
 int VAR_5;

 if (!VAR_1->dq_op->get_next_id)
  return -VAR_0;
 VAR_5 = VAR_1->dq_op->get_next_id(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4 = FUNC_3(VAR_1, *VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 FUNC_2(VAR_4, VAR_3);
 FUNC_4(VAR_4);

 return 0;
}
