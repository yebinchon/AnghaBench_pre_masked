
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_node {int dummy; } ;
typedef int __u64 ;
typedef int __le64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (struct nilfs_btree_node*) ;
 int * FUNC_3 (struct nilfs_btree_node*,int) ;
 int FUNC_4 (struct nilfs_btree_node*) ;
 int FUNC_5 (struct nilfs_btree_node*,int) ;

__attribute__((used)) static void FUNC_6(struct nilfs_btree_node *VAR_0, int VAR_1,
        __u64 VAR_2, __u64 VAR_3, int VAR_4)
{
 __le64 *VAR_5;
 __le64 *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_0);
 VAR_6 = FUNC_3(VAR_0, VAR_4);
 VAR_7 = FUNC_4(VAR_0);
 if (VAR_1 < VAR_7) {
  FUNC_1(VAR_5 + VAR_1 + 1, VAR_5 + VAR_1,
   (VAR_7 - VAR_1) * sizeof(*VAR_5));
  FUNC_1(VAR_6 + VAR_1 + 1, VAR_6 + VAR_1,
   (VAR_7 - VAR_1) * sizeof(*VAR_6));
 }
 VAR_5[VAR_1] = FUNC_0(VAR_2);
 VAR_6[VAR_1] = FUNC_0(VAR_3);
 VAR_7++;
 FUNC_5(VAR_0, VAR_7);
}
