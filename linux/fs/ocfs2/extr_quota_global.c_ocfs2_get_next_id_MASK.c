
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_mem_dqinfo {int dqi_gi; } ;
struct kqid {int type; } ;
struct TYPE_2__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct kqid) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocfs2_mem_dqinfo*,int ) ;
 int FUNC_3 (struct ocfs2_mem_dqinfo*,int ) ;
 int FUNC_4 (struct ocfs2_mem_dqinfo*,int ) ;
 int FUNC_5 (struct ocfs2_mem_dqinfo*,int ) ;
 int FUNC_6 (int *,struct kqid*) ;
 TYPE_1__* FUNC_7 (struct super_block*,int) ;
 int FUNC_8 (struct super_block*,int) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_3, struct kqid *VAR_4)
{
 int VAR_5 = VAR_4->type;
 struct ocfs2_mem_dqinfo *VAR_6 = FUNC_7(VAR_3, VAR_5)->dqi_priv;
 int VAR_7 = 0;

 FUNC_9(FUNC_0(&VAR_2, *VAR_4), VAR_5);
 if (!FUNC_8(VAR_3, VAR_5)) {
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_7 = FUNC_2(VAR_6, 0);
 if (VAR_7 < 0)
  goto out;
 VAR_7 = FUNC_3(VAR_6, 0);
 if (VAR_7 < 0)
  goto out_global;
 VAR_7 = FUNC_6(&VAR_6->dqi_gi, VAR_4);
 FUNC_4(VAR_6, 0);
out_global:
 FUNC_5(VAR_6, 0);
out:




 if (VAR_7 && VAR_7 != -VAR_0 && VAR_7 != -VAR_1)
  FUNC_1(VAR_7);
 return VAR_7;
}
