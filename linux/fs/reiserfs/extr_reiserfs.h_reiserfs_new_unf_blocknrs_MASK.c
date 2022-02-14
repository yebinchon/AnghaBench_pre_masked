
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct reiserfs_transaction_handle {int dummy; } ;
struct inode {int dummy; } ;
typedef int sector_t ;
struct TYPE_3__ {int preallocate; int formatted_node; int block; struct inode* inode; struct treepath* path; struct reiserfs_transaction_handle* th; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef int b_blocknr_t ;


 int FUNC_0 (TYPE_1__*,int *,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct reiserfs_transaction_handle
         *VAR_0, struct inode *VAR_1,
         b_blocknr_t * VAR_2,
         struct treepath *VAR_3,
         sector_t VAR_4)
{
 reiserfs_blocknr_hint_t VAR_5 = {
  .th = VAR_0,
  .path = VAR_3,
  .inode = VAR_1,
  .block = VAR_4,
  .formatted_node = 0,
  .preallocate = 0
 };
 return FUNC_0(&VAR_5, VAR_2, 1, 0);
}
