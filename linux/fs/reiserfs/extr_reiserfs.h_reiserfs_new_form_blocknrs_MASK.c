
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tree_balance {int key; int tb_path; int transaction_handle; } ;
struct TYPE_3__ {int formatted_node; int block; int key; int * inode; int path; int th; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef int b_blocknr_t ;


 int FUNC_0 (TYPE_1__*,int *,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct tree_balance *VAR_0,
          b_blocknr_t * VAR_1,
          int VAR_2)
{
 reiserfs_blocknr_hint_t VAR_3 = {
  .th = VAR_0->transaction_handle,
  .path = VAR_0->tb_path,
  .inode = ((void*)0),
  .key = VAR_0->key,
  .block = 0,
  .formatted_node = 1
 };
 return FUNC_0(&VAR_3, VAR_1, VAR_2,
       0);
}
