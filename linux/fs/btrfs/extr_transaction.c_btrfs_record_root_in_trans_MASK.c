
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {scalar_t__ last_trans; int state; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int reloc_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct btrfs_trans_handle *VAR_2,
          struct btrfs_root *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_3->fs_info;

 if (!FUNC_4(VAR_1, &VAR_3->state))
  return 0;





 FUNC_3();
 if (VAR_3->last_trans == VAR_2->transid &&
     !FUNC_4(VAR_0, &VAR_3->state))
  return 0;

 FUNC_0(&VAR_4->reloc_mutex);
 FUNC_2(VAR_2, VAR_3, 0);
 FUNC_1(&VAR_4->reloc_mutex);

 return 0;
}
