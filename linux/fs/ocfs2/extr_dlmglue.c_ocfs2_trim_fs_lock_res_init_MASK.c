
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_name; } ;
struct ocfs2_super {int obs_trim_fs_mutex; struct ocfs2_lock_res osb_trim_fs_lockres; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct ocfs2_super*,struct ocfs2_lock_res*,int ,int *,struct ocfs2_super*) ;
 int FUNC_3 (struct ocfs2_lock_res*) ;
 int VAR_1 ;

void FUNC_4(struct ocfs2_super *VAR_2)
{
 struct ocfs2_lock_res *VAR_3 = &VAR_2->osb_trim_fs_lockres;


 FUNC_0(&VAR_2->obs_trim_fs_mutex);

 FUNC_3(VAR_3);
 FUNC_1(VAR_0, 0, 0, VAR_3->l_name);
 FUNC_2(VAR_2, VAR_3, VAR_0,
       &VAR_1, VAR_2);
}
