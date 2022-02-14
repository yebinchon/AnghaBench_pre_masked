
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int bp_index; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 struct nilfs_btree_node* FUNC_0 (struct nilfs_btree_path const*,int) ;
 struct nilfs_btree_node* FUNC_1 (struct nilfs_bmap const*) ;
 int FUNC_2 (struct nilfs_bmap const*) ;
 int FUNC_3 (struct nilfs_btree_node*,int) ;
 int FUNC_4 (struct nilfs_btree_node*) ;

__attribute__((used)) static int FUNC_5(const struct nilfs_bmap *VAR_1,
        const struct nilfs_btree_path *VAR_2,
        int VAR_3, __u64 *VAR_4)
{
 struct nilfs_btree_node *VAR_5;
 int VAR_6 = FUNC_2(VAR_1) - 1;
 int VAR_7, VAR_8, VAR_9;


 VAR_8 = 0;
 for (VAR_9 = VAR_3; VAR_9 <= VAR_6; VAR_9++) {
  if (VAR_9 == VAR_6)
   VAR_5 = FUNC_1(VAR_1);
  else
   VAR_5 = FUNC_0(VAR_2, VAR_9);

  VAR_7 = VAR_2[VAR_9].bp_index + VAR_8;
  if (VAR_7 < FUNC_4(VAR_5)) {

   *VAR_4 = FUNC_3(VAR_5, VAR_7);
   return 0;
  }

  VAR_8 = 1;
 }
 return -VAR_0;
}
