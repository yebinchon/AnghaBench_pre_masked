
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_node {int dummy; } ;
typedef int __u64 ;
typedef int __le64 ;


 int FUNC_0 (int const) ;
 int * FUNC_1 (struct nilfs_btree_node*) ;
 int * FUNC_2 (struct nilfs_btree_node*,int) ;
 int FUNC_3 (struct nilfs_btree_node*,int) ;
 int FUNC_4 (struct nilfs_btree_node*,int) ;
 int FUNC_5 (struct nilfs_btree_node*,int) ;

__attribute__((used)) static void FUNC_6(struct nilfs_btree_node *VAR_0, int VAR_1,
      int VAR_2, int VAR_3, int VAR_4,
      const __u64 *VAR_5, const __u64 *VAR_6)
{
 __le64 *VAR_7;
 __le64 *VAR_8;
 int VAR_9;

 FUNC_3(VAR_0, VAR_1);
 FUNC_4(VAR_0, VAR_2);
 FUNC_5(VAR_0, VAR_3);

 VAR_7 = FUNC_1(VAR_0);
 VAR_8 = FUNC_2(VAR_0, VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7[VAR_9] = FUNC_0(VAR_5[VAR_9]);
  VAR_8[VAR_9] = FUNC_0(VAR_6[VAR_9]);
 }
}
