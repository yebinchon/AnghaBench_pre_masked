
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root {int inode_lock; int delayed_nodes_tree; } ;
struct btrfs_delayed_node {int refs; scalar_t__ inode_id; } ;


 int FUNC_0 (struct btrfs_delayed_node**) ;
 int FUNC_1 (struct btrfs_delayed_node*) ;
 int FUNC_2 (struct btrfs_delayed_node*) ;
 int FUNC_3 (int *,void**,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct btrfs_root *VAR_0)
{
 u64 VAR_1 = 0;
 struct btrfs_delayed_node *VAR_2[8];
 int VAR_3, VAR_4;

 while (1) {
  FUNC_5(&VAR_0->inode_lock);
  VAR_4 = FUNC_3(&VAR_0->delayed_nodes_tree,
        (void **)VAR_2, VAR_1,
        FUNC_0(VAR_2));
  if (!VAR_4) {
   FUNC_6(&VAR_0->inode_lock);
   break;
  }

  VAR_1 = VAR_2[VAR_4 - 1]->inode_id + 1;

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   FUNC_4(&VAR_2[VAR_3]->refs);
  FUNC_6(&VAR_0->inode_lock);

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
   FUNC_1(VAR_2[VAR_3]);
   FUNC_2(VAR_2[VAR_3]);
  }
 }
}
