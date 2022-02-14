
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dx_root_block {int dr_num_entries; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_leaf_bh; int * dl_prev_leaf_bh; struct buffer_head* dl_dx_root_bh; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ocfs2_dx_root_block*) ;
 int FUNC_5 (struct inode*,struct buffer_head*) ;
 int FUNC_6 (struct ocfs2_super*,struct inode*,struct buffer_head*,int,struct ocfs2_dir_lookup_result*,struct buffer_head**) ;
 int FUNC_7 (struct ocfs2_super*,struct inode*,struct buffer_head*,struct buffer_head*,char const*,int,struct ocfs2_dir_lookup_result*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct inode*,struct ocfs2_dinode*,struct buffer_head**) ;
 int FUNC_10 (struct inode*,struct buffer_head*,int,struct ocfs2_dir_lookup_result*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_2,
        struct buffer_head *VAR_3,
        const char *VAR_4,
        int VAR_5,
        struct ocfs2_dir_lookup_result *VAR_6)
{
 int VAR_7, VAR_8 = 1;
 struct ocfs2_super *VAR_9 = FUNC_0(VAR_2->i_sb);
 struct buffer_head *VAR_10 = ((void*)0);
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_dinode *VAR_12 = (struct ocfs2_dinode *)VAR_3->b_data;
 struct ocfs2_dx_root_block *VAR_13;

 VAR_7 = FUNC_9(VAR_2, VAR_12, &VAR_10);
 if (VAR_7) {
  FUNC_3(VAR_7);
  goto out;
 }

 VAR_13 = (struct ocfs2_dx_root_block *)VAR_10->b_data;
 if (FUNC_2(VAR_13->dr_num_entries) == VAR_1) {
  VAR_7 = -VAR_0;
  FUNC_3(VAR_7);
  goto out;
 }

 if (FUNC_4(VAR_13)) {
  VAR_7 = FUNC_8(VAR_10);

  if (VAR_7 == 0)
   goto search_el;






  VAR_7 = FUNC_5(VAR_2, VAR_10);
  if (VAR_7) {
   FUNC_3(VAR_7);
   goto out;
  }
 }







 VAR_7 = FUNC_7(VAR_9, VAR_2, VAR_3, VAR_10, VAR_4,
          VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_7);
  goto out;
 }

search_el:






 VAR_7 = FUNC_10(VAR_2, VAR_10, VAR_5, VAR_6);
 if (VAR_7 && VAR_7 != -VAR_0) {
  FUNC_3(VAR_7);
  goto out;
 }


 VAR_6->dl_dx_root_bh = VAR_10;
 VAR_8 = 0;

 if (VAR_7 == -VAR_0) {
  VAR_7 = FUNC_6(VAR_9, VAR_2, VAR_3, 1, VAR_6, &VAR_11);

  if (VAR_7) {
   FUNC_3(VAR_7);
   goto out;
  }





  VAR_6->dl_prev_leaf_bh = ((void*)0);
  VAR_6->dl_leaf_bh = VAR_11;
 }

out:
 if (VAR_8)
  FUNC_1(VAR_10);
 return VAR_7;
}
