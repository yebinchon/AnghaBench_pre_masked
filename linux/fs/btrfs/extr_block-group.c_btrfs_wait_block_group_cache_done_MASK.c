
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_caching_control {int wait; } ;
struct btrfs_block_group_cache {scalar_t__ cached; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_block_group_cache*) ;
 struct btrfs_caching_control* FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (struct btrfs_caching_control*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct btrfs_block_group_cache *VAR_2)
{
 struct btrfs_caching_control *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return (VAR_2->cached == VAR_0) ? -VAR_1 : 0;

 FUNC_3(VAR_3->wait, FUNC_0(VAR_2));
 if (VAR_2->cached == VAR_0)
  VAR_4 = -VAR_1;
 FUNC_2(VAR_3);
 return VAR_4;
}
