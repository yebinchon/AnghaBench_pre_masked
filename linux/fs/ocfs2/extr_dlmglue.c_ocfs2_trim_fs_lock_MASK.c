
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_trim_fs_lvb {scalar_t__ lvb_version; int lvb_trimlen; int lvb_minlen; int lvb_len; int lvb_start; int lvb_nodenum; int lvb_success; } ;
struct ocfs2_trim_fs_info {int tf_valid; void* tf_trimlen; void* tf_minlen; void* tf_len; void* tf_start; int tf_nodenum; int tf_success; } ;
struct ocfs2_lock_res {int l_lksb; } ;
struct ocfs2_super {struct ocfs2_lock_res osb_trim_fs_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_lock_res*,int ,int ,int ) ;
 struct ocfs2_trim_fs_lvb* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ocfs2_super*) ;
 scalar_t__ FUNC_7 (struct ocfs2_super*) ;

int FUNC_8(struct ocfs2_super *VAR_5,
         struct ocfs2_trim_fs_info *VAR_6, int VAR_7)
{
 int VAR_8;
 struct ocfs2_trim_fs_lvb *VAR_9;
 struct ocfs2_lock_res *VAR_10 = &VAR_5->osb_trim_fs_lockres;

 if (VAR_6)
  VAR_6->tf_valid = 0;

 if (FUNC_6(VAR_5))
  return -VAR_3;

 if (FUNC_7(VAR_5))
  return 0;

 VAR_8 = FUNC_3(VAR_5, VAR_10, VAR_1,
        VAR_7 ? VAR_0 : 0, 0);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_2)
   FUNC_2(VAR_8);
  return VAR_8;
 }

 if (VAR_6) {
  VAR_9 = FUNC_4(&VAR_10->l_lksb);
  if (FUNC_5(&VAR_10->l_lksb) &&
      VAR_9->lvb_version == VAR_4) {
   VAR_6->tf_valid = 1;
   VAR_6->tf_success = VAR_9->lvb_success;
   VAR_6->tf_nodenum = FUNC_0(VAR_9->lvb_nodenum);
   VAR_6->tf_start = FUNC_1(VAR_9->lvb_start);
   VAR_6->tf_len = FUNC_1(VAR_9->lvb_len);
   VAR_6->tf_minlen = FUNC_1(VAR_9->lvb_minlen);
   VAR_6->tf_trimlen = FUNC_1(VAR_9->lvb_trimlen);
  }
 }

 return VAR_8;
}
