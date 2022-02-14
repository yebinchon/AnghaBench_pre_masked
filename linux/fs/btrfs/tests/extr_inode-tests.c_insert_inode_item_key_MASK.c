
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {struct extent_buffer* node; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ offset; void* type; void* objectid; } ;
struct btrfs_item {int dummy; } ;
typedef int path ;


 void* VAR_0 ;
 int FUNC_0 (struct btrfs_path*,int ,int) ;
 int FUNC_1 (struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,scalar_t__*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct btrfs_root *VAR_1)
{
 struct btrfs_path VAR_2;
 struct extent_buffer *VAR_3 = VAR_1->node;
 struct btrfs_key VAR_4;
 u32 VAR_5 = 0;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));

 VAR_2.nodes[0] = VAR_3;
 VAR_2.slots[0] = 0;

 VAR_4.objectid = VAR_0;
 VAR_4.type = VAR_0;
 VAR_4.offset = 0;

 FUNC_1(VAR_1, &VAR_2, &VAR_4, &VAR_5, VAR_5,
          VAR_5 + sizeof(struct btrfs_item), 1);
}
