
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct nilfs_bmap*,scalar_t__,struct buffer_head**) ;
 struct nilfs_btree_node* FUNC_2 (struct nilfs_bmap*) ;
 int FUNC_3 (struct nilfs_bmap*) ;
 scalar_t__ FUNC_4 (struct nilfs_btree_node*,int) ;
 int FUNC_5 (struct nilfs_btree_node*) ;
 scalar_t__ FUNC_6 (struct nilfs_btree_node*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct nilfs_bmap *VAR_2, __u64 VAR_3)
{
 struct buffer_head *VAR_4;
 struct nilfs_btree_node *VAR_5, *VAR_6;
 __u64 VAR_7, VAR_8;
 __u64 VAR_9;
 int VAR_10, VAR_11;

 VAR_5 = FUNC_2(VAR_2);
 switch (FUNC_3(VAR_2)) {
 case 2:
  VAR_4 = ((void*)0);
  VAR_6 = VAR_5;
  break;
 case 3:
  VAR_10 = FUNC_5(VAR_5);
  if (VAR_10 > 1)
   return 0;
  VAR_9 = FUNC_6(VAR_5, VAR_10 - 1,
            VAR_1);
  VAR_11 = FUNC_1(VAR_2, VAR_9, &VAR_4);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_6 = (struct nilfs_btree_node *)VAR_4->b_data;
  break;
 default:
  return 0;
 }

 VAR_10 = FUNC_5(VAR_6);
 VAR_7 = FUNC_4(VAR_6, VAR_10 - 1);
 VAR_8 = (VAR_10 > 1) ?
  FUNC_4(VAR_6, VAR_10 - 2) : 0;
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4);

 return (VAR_7 == VAR_3) && (VAR_8 < VAR_0);
}
