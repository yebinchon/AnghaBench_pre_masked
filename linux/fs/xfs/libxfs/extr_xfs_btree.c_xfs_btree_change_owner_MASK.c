
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xfs_btree_cur {int dummy; } ;
struct xfs_btree_block_change_owner_info {struct list_head* buffer_list; int new_owner; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_btree_cur*,int ,struct xfs_btree_block_change_owner_info*) ;

int
FUNC_1(
 struct xfs_btree_cur *VAR_1,
 uint64_t VAR_2,
 struct list_head *VAR_3)
{
 struct xfs_btree_block_change_owner_info VAR_4;

 VAR_4.new_owner = VAR_2;
 VAR_4.buffer_list = VAR_3;

 return FUNC_0(VAR_1, VAR_0,
   &VAR_4);
}
