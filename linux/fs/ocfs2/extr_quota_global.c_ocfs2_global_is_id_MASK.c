
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_mem_dqinfo {int dqi_gi; } ;
struct ocfs2_global_disk_dqblk {int dqb_id; } ;
struct TYPE_4__ {int type; } ;
struct dquot {TYPE_2__ dq_id; int dq_sb; } ;
struct TYPE_3__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,TYPE_2__) ;
 scalar_t__ FUNC_3 (int *,void*) ;
 TYPE_1__* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, struct dquot *VAR_2)
{
 struct ocfs2_global_disk_dqblk *VAR_3 = VAR_1;
 struct ocfs2_mem_dqinfo *VAR_4 =
   FUNC_4(VAR_2->dq_sb, VAR_2->dq_id.type)->dqi_priv;

 if (FUNC_3(&VAR_4->dqi_gi, VAR_1))
  return 0;

 return FUNC_2(FUNC_1(&VAR_0, VAR_2->dq_id.type,
    FUNC_0(VAR_3->dqb_id)),
        VAR_2->dq_id);
}
