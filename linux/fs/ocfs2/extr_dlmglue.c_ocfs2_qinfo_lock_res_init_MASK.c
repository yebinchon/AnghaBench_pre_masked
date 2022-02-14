
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dqi_sb; int dqi_type; } ;
struct ocfs2_mem_dqinfo {TYPE_1__ dqi_gi; } ;
struct ocfs2_lock_res {int l_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct ocfs2_lock_res*,int ,int *,struct ocfs2_mem_dqinfo*) ;
 int FUNC_3 (struct ocfs2_lock_res*) ;
 int VAR_1 ;

void FUNC_4(struct ocfs2_lock_res *VAR_2,
          struct ocfs2_mem_dqinfo *VAR_3)
{
 FUNC_3(VAR_2);
 FUNC_1(VAR_0, VAR_3->dqi_gi.dqi_type,
         0, VAR_2->l_name);
 FUNC_2(FUNC_0(VAR_3->dqi_gi.dqi_sb), VAR_2,
       VAR_0, &VAR_1,
       VAR_3);
}
