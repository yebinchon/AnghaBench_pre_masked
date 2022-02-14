
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
 int VAR_2 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ,int ) ;
 int FUNC_3 (struct ocfs2_lock_res*,int) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;
 int FUNC_6 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_7 (struct ocfs2_mem_dqinfo*) ;
 int FUNC_8 (struct ocfs2_lock_res*) ;

int FUNC_9(struct ocfs2_mem_dqinfo *VAR_3, int VAR_4)
{
 struct ocfs2_lock_res *VAR_5 = &VAR_3->dqi_gqlock;
 struct ocfs2_super *VAR_6 = FUNC_0(VAR_3->dqi_gi.dqi_sb);
 int VAR_7 = VAR_4 ? VAR_0 : VAR_1;
 int VAR_8 = 0;


 if (FUNC_4(VAR_6)) {
  if (VAR_4)
   VAR_8 = -VAR_2;
  goto bail;
 }
 if (FUNC_5(VAR_6))
  goto bail;

 VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_7, 0, 0);
 if (VAR_8 < 0) {
  FUNC_1(VAR_8);
  goto bail;
 }
 if (!FUNC_8(VAR_5))
  goto bail;

 VAR_8 = FUNC_7(VAR_3);
 if (VAR_8)
  FUNC_6(VAR_3, VAR_4);
 FUNC_3(VAR_5, VAR_8);
bail:
 return VAR_8;
}
