
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int free_ino_pinned; int free_ino_ctl; int commit_root; int node; scalar_t__ subv_writers; scalar_t__ anon_dev; int inode_tree; int ino_cache_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct btrfs_root *VAR_0)
{
 FUNC_6(VAR_0->ino_cache_inode);
 FUNC_1(!FUNC_0(&VAR_0->inode_tree));
 if (VAR_0->anon_dev)
  FUNC_4(VAR_0->anon_dev);
 if (VAR_0->subv_writers)
  FUNC_2(VAR_0->subv_writers);
 FUNC_5(VAR_0->node);
 FUNC_5(VAR_0->commit_root);
 FUNC_7(VAR_0->free_ino_ctl);
 FUNC_7(VAR_0->free_ino_pinned);
 FUNC_3(VAR_0);
}
