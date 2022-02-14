
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_key*,scalar_t__) ;
 int FUNC_2 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_path*) ;

int FUNC_4(struct btrfs_root *VAR_2,
   struct btrfs_path *VAR_3, u64 VAR_4)
{
 struct btrfs_key VAR_5;
 struct extent_buffer *VAR_6;
 u32 VAR_7;
 int VAR_8;

 while (1) {
  if (VAR_3->slots[0] == 0) {
   FUNC_3(VAR_3);
   VAR_8 = FUNC_2(VAR_2, VAR_3);
   if (VAR_8 != 0)
    return VAR_8;
  } else {
   VAR_3->slots[0]--;
  }
  VAR_6 = VAR_3->nodes[0];
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 == 0)
   return 1;
  if (VAR_3->slots[0] == VAR_7)
   VAR_3->slots[0]--;

  FUNC_1(VAR_6, &VAR_5, VAR_3->slots[0]);
  if (VAR_5.objectid < VAR_4)
   break;
  if (VAR_5.type == VAR_0 ||
      VAR_5.type == VAR_1)
   return 0;
  if (VAR_5.objectid == VAR_4 &&
      VAR_5.type < VAR_0)
   break;
 }
 return 1;
}
