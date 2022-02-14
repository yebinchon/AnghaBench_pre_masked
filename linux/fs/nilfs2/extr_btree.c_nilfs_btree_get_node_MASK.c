
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int dummy; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;


 int VAR_0 ;
 struct nilfs_btree_node* FUNC_0 (struct nilfs_btree_path const*,int) ;
 struct nilfs_btree_node* FUNC_1 (struct nilfs_bmap const*) ;
 int FUNC_2 (struct nilfs_bmap const*) ;
 int FUNC_3 (struct nilfs_bmap const*) ;

__attribute__((used)) static struct nilfs_btree_node *
FUNC_4(const struct nilfs_bmap *VAR_1,
       const struct nilfs_btree_path *VAR_2,
       int VAR_3, int *VAR_4)
{
 struct nilfs_btree_node *VAR_5;

 if (VAR_3 == FUNC_2(VAR_1) - 1) {
  VAR_5 = FUNC_1(VAR_1);
  *VAR_4 = VAR_0;
 } else {
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  *VAR_4 = FUNC_3(VAR_1);
 }
 return VAR_5;
}
