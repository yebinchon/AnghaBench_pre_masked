
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; } ;
struct btrfs_key {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

__attribute__((used)) static int FUNC_2(struct btrfs_trans_handle *VAR_1,
      struct btrfs_root *VAR_2,
      struct btrfs_key *VAR_3, struct btrfs_path *VAR_4,
      int VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_7 == 0) {
  FUNC_0(0);
  return -VAR_0;
 }

 if (VAR_4->slots[0] == 0) {
  FUNC_0(0);
  return -VAR_0;
 }
 VAR_4->slots[0]--;

 return 0;
}
