
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_dev_item {int dummy; } ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_dev_item*) ;
 int FUNC_3 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct extent_buffer *VAR_0,
      struct btrfs_dev_item *VAR_1)
{
 FUNC_3("\t\tdev item devid %llu total_bytes %llu bytes used %llu\n",
        FUNC_1(VAR_0, VAR_1),
        FUNC_2(VAR_0, VAR_1),
        FUNC_0(VAR_0, VAR_1));
}
