
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_transaction_handle {int t_blocks_allocated; int t_blocks_logged; } ;



__attribute__((used)) static inline int FUNC_0(struct reiserfs_transaction_handle *VAR_0)
{
 return VAR_0->t_blocks_allocated - VAR_0->t_blocks_logged;
}
