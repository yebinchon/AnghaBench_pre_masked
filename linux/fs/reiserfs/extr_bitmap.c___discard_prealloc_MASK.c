
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int t_super; int t_trans_id; } ;
struct inode {int dummy; } ;
struct reiserfs_inode_info {unsigned long i_prealloc_block; scalar_t__ i_prealloc_count; int i_prealloc_list; struct inode vfs_inode; } ;
typedef int b_blocknr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,struct inode*,int ) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,struct inode*) ;

__attribute__((used)) static void FUNC_5(struct reiserfs_transaction_handle *VAR_0,
          struct reiserfs_inode_info *VAR_1)
{
 unsigned long VAR_2 = VAR_1->i_prealloc_block;
 int VAR_3 = 0;
 struct inode *VAR_4 = &VAR_1->vfs_inode;

 FUNC_0(!VAR_0->t_trans_id);





 while (VAR_1->i_prealloc_count > 0) {
  b_blocknr_t VAR_5;







  VAR_5 = VAR_1->i_prealloc_block++;
  VAR_1->i_prealloc_count--;
  FUNC_3(VAR_0, VAR_4, VAR_5);
  VAR_3 = 1;
 }
 if (VAR_3)
  FUNC_4(VAR_0, VAR_4);
 VAR_1->i_prealloc_block = VAR_2;
 FUNC_1(&VAR_1->i_prealloc_list);
}
