
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quota_info {int dqio_sem; TYPE_1__* info; } ;
struct ocfs2_mem_dqinfo {int dummy; } ;
struct TYPE_2__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_3 (struct ocfs2_mem_dqinfo*,int) ;
 struct quota_info* FUNC_4 (struct super_block*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct super_block *VAR_0, int VAR_1)
{
 int VAR_2;
 struct quota_info *VAR_3 = FUNC_4(VAR_0);
 struct ocfs2_mem_dqinfo *VAR_4 = VAR_3->info[VAR_1].dqi_priv;

 FUNC_1(&VAR_3->dqio_sem);
 VAR_2 = FUNC_2(VAR_4, 1);
 if (VAR_2 < 0)
  goto out_sem;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(VAR_4, 1);
out_sem:
 FUNC_5(&VAR_3->dqio_sem);
 return VAR_2;
}
