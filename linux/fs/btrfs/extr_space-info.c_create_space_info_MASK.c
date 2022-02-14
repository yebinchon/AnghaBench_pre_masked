
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_space_info {int flags; int list; int priority_tickets; int tickets; int ro_bgs; int wait; int force_alloc; int lock; int groups_sem; int * block_groups; int total_bytes_pinned; } ;
struct btrfs_fs_info {struct btrfs_space_info* data_sinfo; int space_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_space_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct btrfs_space_info*) ;
 struct btrfs_space_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct btrfs_fs_info *VAR_7, u64 VAR_8)
{

 struct btrfs_space_info *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_6);
 if (!VAR_9)
  return -VAR_4;

 VAR_11 = FUNC_7(&VAR_9->total_bytes_pinned, 0,
     VAR_5);
 if (VAR_11) {
  FUNC_4(VAR_9);
  return VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  FUNC_0(&VAR_9->block_groups[VAR_10]);
 FUNC_2(&VAR_9->groups_sem);
 FUNC_8(&VAR_9->lock);
 VAR_9->flags = VAR_8 & VAR_1;
 VAR_9->force_alloc = VAR_3;
 FUNC_3(&VAR_9->wait);
 FUNC_0(&VAR_9->ro_bgs);
 FUNC_0(&VAR_9->tickets);
 FUNC_0(&VAR_9->priority_tickets);

 VAR_11 = FUNC_1(VAR_7, VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_6(&VAR_9->list, &VAR_7->space_info);
 if (VAR_8 & VAR_0)
  VAR_7->data_sinfo = VAR_9;

 return VAR_11;
}
