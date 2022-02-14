
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_ref_root {int num_heads_ready; int num_heads; int num_entries; int href_root; int lock; } ;
struct btrfs_delayed_ref_head {scalar_t__ processing; int href_node; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct btrfs_delayed_ref_root *VAR_0,
      struct btrfs_delayed_ref_head *VAR_1)
{
 FUNC_2(&VAR_0->lock);
 FUNC_2(&VAR_1->lock);

 FUNC_3(&VAR_1->href_node, &VAR_0->href_root);
 FUNC_0(&VAR_1->href_node);
 FUNC_1(&VAR_0->num_entries);
 VAR_0->num_heads--;
 if (VAR_1->processing == 0)
  VAR_0->num_heads_ready--;
}
