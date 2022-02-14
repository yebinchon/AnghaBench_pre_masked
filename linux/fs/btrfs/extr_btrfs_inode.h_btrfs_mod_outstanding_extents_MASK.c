
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_inode {int outstanding_extents; int root; int lock; } ;


 int FUNC_0 (struct btrfs_inode*) ;
 scalar_t__ FUNC_1 (struct btrfs_inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct btrfs_inode *VAR_0,
       int VAR_1)
{
 FUNC_2(&VAR_0->lock);
 VAR_0->outstanding_extents += VAR_1;
 if (FUNC_1(VAR_0))
  return;
 FUNC_3(VAR_0->root, FUNC_0(VAR_0),
        VAR_1);
}
