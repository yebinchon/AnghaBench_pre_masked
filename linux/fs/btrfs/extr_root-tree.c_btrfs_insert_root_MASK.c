
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_key {int dummy; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key const*,struct btrfs_root_item*,int) ;
 int FUNC_1 (struct btrfs_root_item*) ;
 int FUNC_2 (struct btrfs_root_item*,int ) ;

int FUNC_3(struct btrfs_trans_handle *VAR_0, struct btrfs_root *VAR_1,
        const struct btrfs_key *VAR_2, struct btrfs_root_item *VAR_3)
{



 FUNC_2(VAR_3, FUNC_1(VAR_3));
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, sizeof(*VAR_3));
}
