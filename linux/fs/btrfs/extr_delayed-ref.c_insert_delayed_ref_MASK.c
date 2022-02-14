
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_delayed_ref_root {int num_entries; } ;
struct btrfs_delayed_ref_node {scalar_t__ action; int ref_mod; int add_list; } ;
struct btrfs_delayed_ref_head {int lock; int ref_add_list; int ref_tree; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_delayed_ref_root*,struct btrfs_delayed_ref_head*,struct btrfs_delayed_ref_node*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct btrfs_delayed_ref_node* FUNC_8 (int *,struct btrfs_delayed_ref_node*) ;

__attribute__((used)) static int FUNC_9(struct btrfs_trans_handle *VAR_2,
         struct btrfs_delayed_ref_root *VAR_3,
         struct btrfs_delayed_ref_head *VAR_4,
         struct btrfs_delayed_ref_node *VAR_5)
{
 struct btrfs_delayed_ref_node *VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 FUNC_6(&VAR_4->lock);
 VAR_6 = FUNC_8(&VAR_4->ref_tree, VAR_5);
 if (!VAR_6)
  goto inserted;


 VAR_8 = 1;
 if (VAR_6->action == VAR_5->action) {
  VAR_7 = VAR_5->ref_mod;
 } else {

  if (VAR_6->ref_mod < VAR_5->ref_mod) {
   VAR_6->action = VAR_5->action;
   VAR_7 = -VAR_6->ref_mod;
   VAR_6->ref_mod = VAR_5->ref_mod;
   if (VAR_5->action == VAR_0)
    FUNC_3(&VAR_6->add_list,
           &VAR_4->ref_add_list);
   else if (VAR_5->action == VAR_1) {
    FUNC_0(!FUNC_5(&VAR_6->add_list));
    FUNC_4(&VAR_6->add_list);
   } else {
    FUNC_0(0);
   }
  } else
   VAR_7 = -VAR_5->ref_mod;
 }
 VAR_6->ref_mod += VAR_7;


 if (VAR_6->ref_mod == 0)
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6);
 FUNC_7(&VAR_4->lock);
 return VAR_8;
inserted:
 if (VAR_5->action == VAR_0)
  FUNC_3(&VAR_5->add_list, &VAR_4->ref_add_list);
 FUNC_1(&VAR_3->num_entries);
 FUNC_7(&VAR_4->lock);
 return VAR_8;
}
