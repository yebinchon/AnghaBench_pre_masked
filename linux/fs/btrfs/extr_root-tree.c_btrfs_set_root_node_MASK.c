
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int start; } ;
struct btrfs_root_item {int dummy; } ;


 int FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct btrfs_root_item*,int ) ;
 int FUNC_3 (struct btrfs_root_item*,int ) ;
 int FUNC_4 (struct btrfs_root_item*,int ) ;

void FUNC_5(struct btrfs_root_item *VAR_0,
    struct extent_buffer *VAR_1)
{
 FUNC_2(VAR_0, VAR_1->start);
 FUNC_4(VAR_0, FUNC_1(VAR_1));
 FUNC_3(VAR_0, FUNC_0(VAR_1));
}
