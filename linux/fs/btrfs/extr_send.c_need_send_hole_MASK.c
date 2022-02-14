
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int cur_inode_mode; int cur_inode_deleted; int cur_inode_new_gen; int cur_inode_new; scalar_t__ parent_root; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct send_ctx *VAR_0)
{
 return (VAR_0->parent_root && !VAR_0->cur_inode_new &&
  !VAR_0->cur_inode_new_gen && !VAR_0->cur_inode_deleted &&
  FUNC_0(VAR_0->cur_inode_mode));
}
