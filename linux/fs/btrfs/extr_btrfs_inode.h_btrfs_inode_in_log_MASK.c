
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int modified_extents; } ;
struct btrfs_inode {scalar_t__ logged_trans; scalar_t__ last_sub_trans; scalar_t__ last_log_commit; int lock; TYPE_2__ extent_tree; TYPE_1__* root; } ;
struct TYPE_3__ {scalar_t__ last_log_commit; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(struct btrfs_inode *VAR_0, u64 VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_0->lock);
 if (VAR_0->logged_trans == VAR_1 &&
     VAR_0->last_sub_trans <= VAR_0->last_log_commit &&
     VAR_0->last_sub_trans <= VAR_0->root->last_log_commit) {






  FUNC_1();
  if (FUNC_0(&VAR_0->extent_tree.modified_extents))
   VAR_2 = 1;
 }
 FUNC_3(&VAR_0->lock);
 return VAR_2;
}
