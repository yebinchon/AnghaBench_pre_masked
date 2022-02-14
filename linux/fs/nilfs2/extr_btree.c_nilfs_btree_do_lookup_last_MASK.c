
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int bp_index; int * bp_bh; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap const*,struct nilfs_btree_node*,int) ;
 int FUNC_1 (struct nilfs_bmap const*,int ,int **) ;
 struct nilfs_btree_node* FUNC_2 (struct nilfs_btree_path*,int) ;
 struct nilfs_btree_node* FUNC_3 (struct nilfs_bmap const*) ;
 int FUNC_4 (struct nilfs_bmap const*) ;
 int FUNC_5 (struct nilfs_btree_node*,int) ;
 int FUNC_6 (struct nilfs_btree_node*) ;
 int FUNC_7 (struct nilfs_btree_node*) ;
 int FUNC_8 (struct nilfs_btree_node*,int,int) ;

__attribute__((used)) static int FUNC_9(const struct nilfs_bmap *VAR_3,
          struct nilfs_btree_path *VAR_4,
          __u64 *VAR_5, __u64 *VAR_6)
{
 struct nilfs_btree_node *VAR_7;
 __u64 VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_7 = FUNC_3(VAR_3);
 VAR_9 = FUNC_7(VAR_7) - 1;
 if (VAR_9 < 0)
  return -VAR_1;
 VAR_10 = FUNC_6(VAR_7);
 VAR_8 = FUNC_8(VAR_7, VAR_9,
           VAR_2);
 VAR_4[VAR_10].bp_bh = ((void*)0);
 VAR_4[VAR_10].bp_index = VAR_9;
 VAR_11 = FUNC_4(VAR_3);

 for (VAR_10--; VAR_10 > 0; VAR_10--) {
  VAR_12 = FUNC_1(VAR_3, VAR_8, &VAR_4[VAR_10].bp_bh);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_7 = FUNC_2(VAR_4, VAR_10);
  if (FUNC_0(VAR_3, VAR_7, VAR_10))
   return -VAR_0;
  VAR_9 = FUNC_7(VAR_7) - 1;
  VAR_8 = FUNC_8(VAR_7, VAR_9, VAR_11);
  VAR_4[VAR_10].bp_index = VAR_9;
 }

 if (VAR_5 != ((void*)0))
  *VAR_5 = FUNC_5(VAR_7, VAR_9);
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8;

 return 0;
}
