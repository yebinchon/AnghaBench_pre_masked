
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {scalar_t__ bp_index; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct nilfs_btree_node* FUNC_0 (struct nilfs_bmap const*,struct nilfs_btree_path const*,int,int*) ;
 int FUNC_1 (struct nilfs_bmap const*) ;
 int FUNC_2 (struct nilfs_btree_node*,scalar_t__,int) ;

__attribute__((used)) static __u64 FUNC_3(const struct nilfs_bmap *VAR_2,
       const struct nilfs_btree_path *VAR_3)
{
 struct nilfs_btree_node *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3 == ((void*)0))
  return VAR_0;


 VAR_5 = VAR_1;
 if (VAR_3[VAR_5].bp_index > 0) {
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_5, &VAR_6);
  return FUNC_2(VAR_4,
      VAR_3[VAR_5].bp_index - 1,
      VAR_6);
 }


 VAR_5 = VAR_1 + 1;
 if (VAR_5 <= FUNC_1(VAR_2) - 1) {
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_5, &VAR_6);
  return FUNC_2(VAR_4, VAR_3[VAR_5].bp_index,
      VAR_6);
 }

 return VAR_0;
}
