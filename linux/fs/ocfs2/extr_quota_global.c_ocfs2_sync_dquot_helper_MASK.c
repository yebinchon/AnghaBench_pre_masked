
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_id; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_mem_dqinfo {int dummy; } ;
struct TYPE_6__ {unsigned long type; } ;
struct dquot {TYPE_3__ dq_id; struct super_block* dq_sb; } ;
typedef int handle_t ;
struct TYPE_5__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;
struct TYPE_4__ {int dqio_sem; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,int *) ;
 int FUNC_7 (struct dquot*) ;
 int FUNC_8 (struct ocfs2_mem_dqinfo*,int) ;
 int * FUNC_9 (struct ocfs2_super*,int ) ;
 int FUNC_10 (struct dquot*) ;
 int FUNC_11 (struct ocfs2_mem_dqinfo*,int) ;
 TYPE_2__* FUNC_12 (struct super_block*,unsigned long) ;
 TYPE_1__* FUNC_13 (struct super_block*) ;
 int FUNC_14 (int ,unsigned long,unsigned long,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct dquot *VAR_2, unsigned long VAR_3)
{
 handle_t *VAR_4;
 struct super_block *VAR_5 = VAR_2->dq_sb;
 struct ocfs2_mem_dqinfo *VAR_6 = FUNC_12(VAR_5, VAR_3)->dqi_priv;
 struct ocfs2_super *VAR_7 = FUNC_1(VAR_5);
 int VAR_8 = 0;

 FUNC_14(FUNC_4(&VAR_1, VAR_2->dq_id),
          VAR_2->dq_id.type,
          VAR_3, VAR_5->s_id);
 if (VAR_3 != VAR_2->dq_id.type)
  goto out;
 VAR_8 = FUNC_8(VAR_6, 1);
 if (VAR_8 < 0)
  goto out;

 VAR_4 = FUNC_9(VAR_7, VAR_0);
 if (FUNC_0(VAR_4)) {
  VAR_8 = FUNC_2(VAR_4);
  FUNC_5(VAR_8);
  goto out_ilock;
 }
 FUNC_3(&FUNC_13(VAR_5)->dqio_sem);
 VAR_8 = FUNC_10(VAR_2);
 if (VAR_8 < 0)
  FUNC_5(VAR_8);

 VAR_8 = FUNC_7(VAR_2);
 if (VAR_8 < 0)
  FUNC_5(VAR_8);
 FUNC_15(&FUNC_13(VAR_5)->dqio_sem);
 FUNC_6(VAR_7, VAR_4);
out_ilock:
 FUNC_11(VAR_6, 1);
out:
 return VAR_8;
}
