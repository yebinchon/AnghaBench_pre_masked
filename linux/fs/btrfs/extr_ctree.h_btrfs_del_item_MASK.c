
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct btrfs_trans_handle *VAR_0,
     struct btrfs_root *VAR_1,
     struct btrfs_path *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->slots[0], 1);
}
