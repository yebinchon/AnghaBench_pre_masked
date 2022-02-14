
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_extent_list {int * l_recs; int l_next_free_rec; scalar_t__ l_tree_depth; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct ocfs2_dinode {int i_last_eb_blk; } ;
struct inode {int i_ino; int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ,unsigned long long) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,struct buffer_head**) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1,
      struct ocfs2_dinode *VAR_2)
{
 int VAR_3, VAR_4;
 u64 VAR_5 = FUNC_3(VAR_2->i_last_eb_blk);
 struct buffer_head *VAR_6 = ((void*)0);
 struct ocfs2_extent_block *VAR_7;
 struct ocfs2_extent_list *VAR_8;

 VAR_3 = FUNC_7(FUNC_0(VAR_1), VAR_5, &VAR_6);
 if (VAR_3) {
  FUNC_4(VAR_3);
  goto out;
 }

 VAR_7 = (struct ocfs2_extent_block *) VAR_6->b_data;
 VAR_8 = &VAR_7->h_list;

 if (VAR_8->l_tree_depth) {
  FUNC_5(VAR_1->i_sb,
       "Inode %lu has non zero tree depth in leaf block %llu\n",
       VAR_1->i_ino,
       (unsigned long long)VAR_6->b_blocknr);
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_2(VAR_8->l_next_free_rec);

 if (VAR_4 == 0 ||
     (VAR_4 == 1 && FUNC_6(&VAR_8->l_recs[0])))
  VAR_3 = 1;

out:
 FUNC_1(VAR_6);
 return VAR_3;
}
