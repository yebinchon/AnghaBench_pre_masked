
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_super {struct ocfs2_lock_res osb_rename_lockres; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_super*,struct ocfs2_lock_res*,int ) ;
 int FUNC_1 (struct ocfs2_super*) ;

void FUNC_2(struct ocfs2_super *VAR_1)
{
 struct ocfs2_lock_res *VAR_2 = &VAR_1->osb_rename_lockres;

 if (!FUNC_1(VAR_1))
  FUNC_0(VAR_1, VAR_2, VAR_0);
}
