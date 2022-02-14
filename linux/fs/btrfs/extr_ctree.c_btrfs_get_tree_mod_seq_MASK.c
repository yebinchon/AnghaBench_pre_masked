
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_list {scalar_t__ seq; int list; } ;
struct btrfs_fs_info {int tree_mod_log_lock; int tree_mod_seq_lock; int tree_mod_seq_list; } ;


 scalar_t__ FUNC_0 (struct btrfs_fs_info*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u64 FUNC_6(struct btrfs_fs_info *VAR_0,
      struct seq_list *VAR_1)
{
 FUNC_4(&VAR_0->tree_mod_log_lock);
 FUNC_2(&VAR_0->tree_mod_seq_lock);
 if (!VAR_1->seq) {
  VAR_1->seq = FUNC_0(VAR_0);
  FUNC_1(&VAR_1->list, &VAR_0->tree_mod_seq_list);
 }
 FUNC_3(&VAR_0->tree_mod_seq_lock);
 FUNC_5(&VAR_0->tree_mod_log_lock);

 return VAR_1->seq;
}
