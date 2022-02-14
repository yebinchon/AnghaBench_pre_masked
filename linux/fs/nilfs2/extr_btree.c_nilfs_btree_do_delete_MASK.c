
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int bp_index; int bp_bh; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nilfs_btree_node* FUNC_2 (struct nilfs_btree_path*,int) ;
 struct nilfs_btree_node* FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct nilfs_bmap*) ;
 int FUNC_5 (struct nilfs_bmap*) ;
 int FUNC_6 (struct nilfs_btree_node*,int ,int *,int *,int) ;
 int FUNC_7 (struct nilfs_btree_node*,int ) ;
 int FUNC_8 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct nilfs_bmap *VAR_1,
      struct nilfs_btree_path *VAR_2,
      int VAR_3, __u64 *VAR_4, __u64 *VAR_5)
{
 struct nilfs_btree_node *VAR_6;
 int VAR_7;

 if (VAR_3 < FUNC_4(VAR_1) - 1) {
  VAR_6 = FUNC_2(VAR_2, VAR_3);
  VAR_7 = FUNC_5(VAR_1);
  FUNC_6(VAR_6, VAR_2[VAR_3].bp_index,
     VAR_4, VAR_5, VAR_7);
  if (!FUNC_0(VAR_2[VAR_3].bp_bh))
   FUNC_1(VAR_2[VAR_3].bp_bh);
  if (VAR_2[VAR_3].bp_index == 0)
   FUNC_8(VAR_1, VAR_2, VAR_3 + 1,
    FUNC_7(VAR_6, 0));
 } else {
  VAR_6 = FUNC_3(VAR_1);
  FUNC_6(VAR_6, VAR_2[VAR_3].bp_index,
     VAR_4, VAR_5,
     VAR_0);
 }
}
