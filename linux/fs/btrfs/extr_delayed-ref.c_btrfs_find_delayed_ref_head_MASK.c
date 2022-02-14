
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_delayed_ref_root {int lock; } ;
struct btrfs_delayed_ref_head {int dummy; } ;


 struct btrfs_delayed_ref_head* FUNC_0 (struct btrfs_delayed_ref_root*,int ,int) ;
 int FUNC_1 (int *) ;

struct btrfs_delayed_ref_head *
FUNC_2(struct btrfs_delayed_ref_root *VAR_0, u64 VAR_1)
{
 FUNC_1(&VAR_0->lock);

 return FUNC_0(VAR_0, VAR_1, 0);
}
