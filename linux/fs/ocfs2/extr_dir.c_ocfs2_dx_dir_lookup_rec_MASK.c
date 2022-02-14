
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_cpos; int e_blkno; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; scalar_t__ l_tree_depth; } ;
struct ocfs2_extent_block {struct ocfs2_extent_list h_list; } ;
struct inode {int i_ino; int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ,unsigned long long,...) ;
 int FUNC_7 (int ,struct ocfs2_extent_list*,int ,struct buffer_head**) ;
 int FUNC_8 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0,
       struct ocfs2_extent_list *VAR_1,
       u32 VAR_2,
       u32 *VAR_3,
       u64 *VAR_4,
       unsigned int *VAR_5)
{
 int VAR_6 = 0, VAR_7, VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_extent_block *VAR_10;
 struct ocfs2_extent_rec *VAR_11 = ((void*)0);

 if (VAR_1->l_tree_depth) {
  VAR_6 = FUNC_7(FUNC_0(VAR_0), VAR_1, VAR_2,
          &VAR_9);
  if (VAR_6) {
   FUNC_5(VAR_6);
   goto out;
  }

  VAR_10 = (struct ocfs2_extent_block *) VAR_9->b_data;
  VAR_1 = &VAR_10->h_list;

  if (VAR_1->l_tree_depth) {
   VAR_6 = FUNC_6(VAR_0->i_sb,
       "Inode %lu has non zero tree depth in btree tree block %llu\n",
       VAR_0->i_ino,
       (unsigned long long)VAR_9->b_blocknr);
   goto out;
  }
 }

 VAR_8 = 0;
 for (VAR_7 = FUNC_2(VAR_1->l_next_free_rec) - 1; VAR_7 >= 0; VAR_7--) {
  VAR_11 = &VAR_1->l_recs[VAR_7];

  if (FUNC_3(VAR_11->e_cpos) <= VAR_2) {
   VAR_8 = 1;
   break;
  }
 }

 if (!VAR_8) {
  VAR_6 = FUNC_6(VAR_0->i_sb,
      "Inode %lu has bad extent record (%u, %u, 0) in btree\n",
      VAR_0->i_ino,
      FUNC_3(VAR_11->e_cpos),
      FUNC_8(VAR_1, VAR_11));
  goto out;
 }

 if (VAR_4)
  *VAR_4 = FUNC_4(VAR_11->e_blkno);
 if (VAR_3)
  *VAR_3 = FUNC_3(VAR_11->e_cpos);
 if (VAR_5)
  *VAR_5 = FUNC_2(VAR_11->e_leaf_clusters);

out:
 FUNC_1(VAR_9);
 return VAR_6;
}
