
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_block_group_cache {TYPE_1__* free_space_ctl; } ;
struct TYPE_2__ {scalar_t__ free_space; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_block_group_cache*,int ,int,int ,scalar_t__*) ;
 int FUNC_1 (struct btrfs_block_group_cache*,int ,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct btrfs_block_group_cache *VAR_1)
{
 u64 VAR_2;
 u64 VAR_3;





 if (VAR_1->free_space_ctl->free_space != 0) {
  FUNC_2("cache free space is not 0");
  return -VAR_0;
 }


 VAR_2 = FUNC_0(VAR_1, 0, 4096, 0,
         &VAR_3);
 if (VAR_2 != 0) {
  FUNC_2("space allocation did not fail, returned offset: %llu",
    VAR_2);
  return -VAR_0;
 }


 return FUNC_1(VAR_1, 0, 0);
}
