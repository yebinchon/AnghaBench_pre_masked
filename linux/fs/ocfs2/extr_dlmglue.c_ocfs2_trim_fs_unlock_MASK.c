
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_trim_fs_lvb {void* lvb_trimlen; void* lvb_minlen; void* lvb_len; void* lvb_start; int lvb_nodenum; int lvb_success; int lvb_version; } ;
struct ocfs2_trim_fs_info {int tf_trimlen; int tf_minlen; int tf_len; int tf_start; int tf_nodenum; int tf_success; } ;
struct ocfs2_lock_res {int l_lksb; } ;
struct ocfs2_super {struct ocfs2_lock_res osb_trim_fs_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_super*,struct ocfs2_lock_res*,int ) ;
 struct ocfs2_trim_fs_lvb* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;

void FUNC_5(struct ocfs2_super *VAR_2,
     struct ocfs2_trim_fs_info *VAR_3)
{
 struct ocfs2_trim_fs_lvb *VAR_4;
 struct ocfs2_lock_res *VAR_5 = &VAR_2->osb_trim_fs_lockres;

 if (FUNC_4(VAR_2))
  return;

 if (VAR_3) {
  VAR_4 = FUNC_3(&VAR_5->l_lksb);
  VAR_4->lvb_version = VAR_1;
  VAR_4->lvb_success = VAR_3->tf_success;
  VAR_4->lvb_nodenum = FUNC_0(VAR_3->tf_nodenum);
  VAR_4->lvb_start = FUNC_1(VAR_3->tf_start);
  VAR_4->lvb_len = FUNC_1(VAR_3->tf_len);
  VAR_4->lvb_minlen = FUNC_1(VAR_3->tf_minlen);
  VAR_4->lvb_trimlen = FUNC_1(VAR_3->tf_trimlen);
 }

 FUNC_2(VAR_2, VAR_5, VAR_0);
}
