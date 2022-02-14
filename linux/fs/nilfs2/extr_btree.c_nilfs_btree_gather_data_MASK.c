
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __u64 ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nilfs_bmap*,int ,struct buffer_head**) ;
 struct nilfs_btree_node* FUNC_4 (struct nilfs_bmap*) ;
 int FUNC_5 (struct nilfs_bmap*) ;
 int FUNC_6 (struct nilfs_bmap*) ;
 int * FUNC_7 (struct nilfs_btree_node*) ;
 int * FUNC_8 (struct nilfs_btree_node*,int) ;
 int FUNC_9 (struct nilfs_btree_node*) ;
 int FUNC_10 (struct nilfs_btree_node*,int,int) ;

__attribute__((used)) static int FUNC_11(struct nilfs_bmap *VAR_2,
       __u64 *VAR_3, __u64 *VAR_4, int VAR_5)
{
 struct buffer_head *VAR_6;
 struct nilfs_btree_node *VAR_7, *VAR_8;
 __le64 *VAR_9;
 __le64 *VAR_10;
 __u64 VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_8 = FUNC_4(VAR_2);
 switch (FUNC_5(VAR_2)) {
 case 2:
  VAR_6 = ((void*)0);
  VAR_7 = VAR_8;
  VAR_13 = VAR_1;
  break;
 case 3:
  VAR_12 = FUNC_9(VAR_8);
  FUNC_0(VAR_12 > 1);
  VAR_11 = FUNC_10(VAR_8, VAR_12 - 1,
            VAR_1);
  VAR_15 = FUNC_3(VAR_2, VAR_11, &VAR_6);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_7 = (struct nilfs_btree_node *)VAR_6->b_data;
  VAR_13 = FUNC_6(VAR_2);
  break;
 default:
  VAR_7 = ((void*)0);
  return -VAR_0;
 }

 VAR_12 = FUNC_9(VAR_7);
 if (VAR_12 < VAR_5)
  VAR_5 = VAR_12;
 VAR_9 = FUNC_7(VAR_7);
 VAR_10 = FUNC_8(VAR_7, VAR_13);
 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_3[VAR_14] = FUNC_2(VAR_9[VAR_14]);
  VAR_4[VAR_14] = FUNC_2(VAR_10[VAR_14]);
 }

 if (VAR_6 != ((void*)0))
  FUNC_1(VAR_6);

 return VAR_5;
}
