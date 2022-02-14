
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct TYPE_2__ {int dqi_sb; } ;
struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_mem_dqinfo {TYPE_1__ dqi_gi; struct ocfs2_lock_res dqi_gqlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*,int) ;
 int FUNC_2 (struct ocfs2_super*) ;
 int FUNC_3 (struct ocfs2_super*) ;

void FUNC_4(struct ocfs2_mem_dqinfo *VAR_2, int VAR_3)
{
 struct ocfs2_lock_res *VAR_4 = &VAR_2->dqi_gqlock;
 struct ocfs2_super *VAR_5 = FUNC_0(VAR_2->dqi_gi.dqi_sb);
 int VAR_6 = VAR_3 ? VAR_0 : VAR_1;

 if (!FUNC_2(VAR_5) && !FUNC_3(VAR_5))
  FUNC_1(VAR_5, VAR_4, VAR_6);
}
