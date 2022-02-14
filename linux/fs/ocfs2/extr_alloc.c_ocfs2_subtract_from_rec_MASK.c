
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_blkno; int e_cpos; } ;
typedef enum ocfs2_split_type { ____Placeholder_ocfs2_split_type } ocfs2_split_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct super_block*,int ) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_1,
        enum ocfs2_split_type VAR_2,
        struct ocfs2_extent_rec *VAR_3,
        struct ocfs2_extent_rec *VAR_4)
{
 u64 VAR_5;

 VAR_5 = FUNC_4(VAR_1,
    FUNC_1(VAR_4->e_leaf_clusters));

 if (VAR_2 == VAR_0) {




  FUNC_2(&VAR_3->e_cpos,
        FUNC_1(VAR_4->e_leaf_clusters));
  FUNC_3(&VAR_3->e_blkno, VAR_5);
  FUNC_0(&VAR_3->e_leaf_clusters,
        -FUNC_1(VAR_4->e_leaf_clusters));
 } else {




  FUNC_0(&VAR_3->e_leaf_clusters,
        -FUNC_1(VAR_4->e_leaf_clusters));
 }
}
