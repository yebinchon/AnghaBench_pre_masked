
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_node {int dummy; } ;
typedef int __le64 ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (struct nilfs_btree_node*) ;
 int * FUNC_3 (struct nilfs_btree_node*,int) ;
 int FUNC_4 (struct nilfs_btree_node*) ;
 int FUNC_5 (struct nilfs_btree_node*,int) ;

__attribute__((used)) static void FUNC_6(struct nilfs_btree_node *VAR_0,
           struct nilfs_btree_node *VAR_1,
           int VAR_2, int VAR_3, int VAR_4)
{
 __le64 *VAR_5, *VAR_6;
 __le64 *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 VAR_5 = FUNC_2(VAR_0);
 VAR_7 = FUNC_3(VAR_0, VAR_3);
 VAR_9 = FUNC_4(VAR_0);

 VAR_6 = FUNC_2(VAR_1);
 VAR_8 = FUNC_3(VAR_1, VAR_4);
 VAR_10 = FUNC_4(VAR_1);

 FUNC_0(VAR_5 + VAR_9, VAR_6, VAR_2 * sizeof(*VAR_6));
 FUNC_0(VAR_7 + VAR_9, VAR_8, VAR_2 * sizeof(*VAR_8));
 FUNC_1(VAR_6, VAR_6 + VAR_2, (VAR_10 - VAR_2) * sizeof(*VAR_6));
 FUNC_1(VAR_8, VAR_8 + VAR_2, (VAR_10 - VAR_2) * sizeof(*VAR_8));

 VAR_9 += VAR_2;
 VAR_10 -= VAR_2;
 FUNC_5(VAR_0, VAR_9);
 FUNC_5(VAR_1, VAR_10);
}
