
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct btrfs_log_ctx {int log_new_dentries; int list; struct inode* inode; scalar_t__ log_transid; scalar_t__ log_ret; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct btrfs_log_ctx *VAR_0,
          struct inode *VAR_1)
{
 VAR_0->log_ret = 0;
 VAR_0->log_transid = 0;
 VAR_0->log_new_dentries = 0;
 VAR_0->inode = VAR_1;
 FUNC_0(&VAR_0->list);
}
