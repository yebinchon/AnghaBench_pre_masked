
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_delayed_ref_root {int num_entries; } ;
struct btrfs_delayed_ref_node {scalar_t__ in_tree; int add_list; int ref_node; } ;
struct btrfs_delayed_ref_head {int ref_tree; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_delayed_ref_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static inline void FUNC_7(struct btrfs_trans_handle *VAR_0,
        struct btrfs_delayed_ref_root *VAR_1,
        struct btrfs_delayed_ref_head *VAR_2,
        struct btrfs_delayed_ref_node *VAR_3)
{
 FUNC_5(&VAR_2->lock);
 FUNC_6(&VAR_3->ref_node, &VAR_2->ref_tree);
 FUNC_0(&VAR_3->ref_node);
 if (!FUNC_4(&VAR_3->add_list))
  FUNC_3(&VAR_3->add_list);
 VAR_3->in_tree = 0;
 FUNC_2(VAR_3);
 FUNC_1(&VAR_1->num_entries);
}
