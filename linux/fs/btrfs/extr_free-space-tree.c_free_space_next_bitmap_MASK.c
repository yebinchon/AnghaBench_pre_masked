
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; int * nodes; } ;
struct btrfs_key {scalar_t__ offset; scalar_t__ type; int objectid; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct btrfs_key*,scalar_t__) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct btrfs_trans_handle *VAR_0,
      struct btrfs_root *VAR_1, struct btrfs_path *VAR_2)
{
 struct btrfs_key VAR_3;

 if (VAR_2->slots[0] + 1 < FUNC_0(VAR_2->nodes[0])) {
  VAR_2->slots[0]++;
  return 0;
 }

 FUNC_1(VAR_2->nodes[0], &VAR_3, VAR_2->slots[0]);
 FUNC_2(VAR_2);

 VAR_3.objectid += VAR_3.offset;
 VAR_3.type = (u8)-1;
 VAR_3.offset = (u64)-1;

 return FUNC_3(VAR_0, VAR_1, &VAR_3, VAR_2, 0, 1);
}
