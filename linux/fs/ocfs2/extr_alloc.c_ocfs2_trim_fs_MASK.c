
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_trim_fs_info {int tf_success; scalar_t__ tf_start; scalar_t__ tf_len; scalar_t__ tf_minlen; scalar_t__ tf_trimlen; int tf_nodenum; scalar_t__ tf_valid; } ;
struct ocfs2_super {int node_num; int dev_str; } ;
struct fstrim_range {scalar_t__ start; scalar_t__ len; scalar_t__ minlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_trim_fs_info*,int) ;
 int FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (struct ocfs2_super*) ;
 int FUNC_6 (struct ocfs2_super*,struct ocfs2_trim_fs_info*) ;
 int FUNC_7 (struct super_block*,struct fstrim_range*) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_9(struct super_block *VAR_2, struct fstrim_range *VAR_3)
{
 int VAR_4;
 struct ocfs2_super *VAR_5 = FUNC_0(VAR_2);
 struct ocfs2_trim_fs_info VAR_6, *VAR_7 = ((void*)0);

 FUNC_4(VAR_5);

 FUNC_8(VAR_3->start, VAR_3->len, VAR_3->minlen);

 VAR_4 = FUNC_3(VAR_5, ((void*)0), 1);
 if (VAR_4 < 0) {
  if (VAR_4 != -VAR_0) {
   FUNC_2(VAR_4);
   FUNC_5(VAR_5);
   return VAR_4;
  }

  FUNC_1(VAR_1, "Wait for trim on device (%s) to "
       "finish, which is running from another node.\n",
       VAR_5->dev_str);
  VAR_4 = FUNC_3(VAR_5, &VAR_6, 0);
  if (VAR_4 < 0) {
   FUNC_2(VAR_4);
   FUNC_5(VAR_5);
   return VAR_4;
  }

  if (VAR_6.tf_valid && VAR_6.tf_success &&
      VAR_6.tf_start == VAR_3->start &&
      VAR_6.tf_len == VAR_3->len &&
      VAR_6.tf_minlen == VAR_3->minlen) {

   FUNC_1(VAR_1, "The same trim on device (%s) was "
        "just done from node (%u), return.\n",
        VAR_5->dev_str, VAR_6.tf_nodenum);
   VAR_3->len = VAR_6.tf_trimlen;
   goto out;
  }
 }

 VAR_6.tf_nodenum = VAR_5->node_num;
 VAR_6.tf_start = VAR_3->start;
 VAR_6.tf_len = VAR_3->len;
 VAR_6.tf_minlen = VAR_3->minlen;

 VAR_4 = FUNC_7(VAR_2, VAR_3);

 VAR_6.tf_trimlen = VAR_3->len;
 VAR_6.tf_success = (VAR_4 < 0 ? 0 : 1);
 VAR_7 = &VAR_6;
out:
 FUNC_6(VAR_5, VAR_7);
 FUNC_5(VAR_5);
 return VAR_4;
}
