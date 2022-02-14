
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_item {int dummy; } ;


 int FUNC_0 (struct extent_buffer*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct extent_buffer*,scalar_t__) ;
 int FUNC_2 (struct extent_buffer*,int ,int ,scalar_t__) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_path*,struct btrfs_key const*,scalar_t__*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,scalar_t__) ;

int FUNC_5(struct btrfs_trans_handle *VAR_0,
    struct btrfs_root *VAR_1,
    struct btrfs_path *VAR_2,
    const struct btrfs_key *VAR_3)
{
 struct extent_buffer *VAR_4;
 int VAR_5;
 u32 VAR_6;

 VAR_4 = VAR_2->nodes[0];
 VAR_6 = FUNC_1(VAR_4, VAR_2->slots[0]);
 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2,
       VAR_6 + sizeof(struct btrfs_item));
 if (VAR_5)
  return VAR_5;

 VAR_2->slots[0]++;
 FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_6,
          VAR_6, VAR_6 +
          sizeof(struct btrfs_item), 1);
 VAR_4 = VAR_2->nodes[0];
 FUNC_2(VAR_4,
        FUNC_0(VAR_4, VAR_2->slots[0]),
        FUNC_0(VAR_4, VAR_2->slots[0] - 1),
        VAR_6);
 return 0;
}
