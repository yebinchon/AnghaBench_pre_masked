
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int delayed_workers; struct btrfs_delayed_root* delayed_root; } ;
struct btrfs_delayed_root {int wait; int items_seq; int items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_delayed_root*,struct btrfs_fs_info*,int ) ;
 int FUNC_3 (struct btrfs_delayed_root*,int) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct btrfs_fs_info *VAR_3)
{
 struct btrfs_delayed_root *VAR_4 = VAR_3->delayed_root;

 if ((FUNC_0(&VAR_4->items) < VAR_0) ||
  FUNC_1(VAR_3->delayed_workers))
  return;

 if (FUNC_0(&VAR_4->items) >= VAR_2) {
  int VAR_5;
  int VAR_6;

  VAR_5 = FUNC_0(&VAR_4->items_seq);

  VAR_6 = FUNC_2(VAR_4, VAR_3, 0);
  if (VAR_6)
   return;

  FUNC_4(VAR_4->wait,
      FUNC_3(VAR_4, VAR_5));
  return;
 }

 FUNC_2(VAR_4, VAR_3, VAR_1);
}
