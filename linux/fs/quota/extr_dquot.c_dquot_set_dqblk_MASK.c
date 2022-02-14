
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct qc_dqblk {int dummy; } ;
struct kqid {int dummy; } ;
struct dquot {int dummy; } ;


 scalar_t__ FUNC_0 (struct dquot*) ;
 int FUNC_1 (struct dquot*) ;
 int FUNC_2 (struct dquot*,struct qc_dqblk*) ;
 struct dquot* FUNC_3 (struct super_block*,struct kqid) ;
 int FUNC_4 (struct dquot*) ;

int FUNC_5(struct super_block *VAR_0, struct kqid VAR_1,
    struct qc_dqblk *VAR_2)
{
 struct dquot *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto out;
 }
 VAR_4 = FUNC_2(VAR_3, VAR_2);
 FUNC_4(VAR_3);
out:
 return VAR_4;
}
