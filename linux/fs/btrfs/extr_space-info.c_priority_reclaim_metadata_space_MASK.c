
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct reserve_ticket {scalar_t__ bytes; } ;
struct btrfs_space_info {int lock; } ;
struct btrfs_fs_info {int dummy; } ;
typedef enum btrfs_flush_state { ____Placeholder_btrfs_flush_state } btrfs_flush_state ;


 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_space_info*,int) ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_space_info*,int ,int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct btrfs_fs_info *VAR_0,
    struct btrfs_space_info *VAR_1,
    struct reserve_ticket *VAR_2,
    const enum btrfs_flush_state *VAR_3,
    int VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1->lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1,
            0);
 if (!VAR_5) {
  FUNC_3(&VAR_1->lock);
  return;
 }
 FUNC_3(&VAR_1->lock);

 VAR_6 = 0;
 do {
  FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3[VAR_6]);
  VAR_6++;
  FUNC_2(&VAR_1->lock);
  if (VAR_2->bytes == 0) {
   FUNC_3(&VAR_1->lock);
   return;
  }
  FUNC_3(&VAR_1->lock);
 } while (VAR_6 < VAR_4);
}
