
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_root_item {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {unsigned long long offset; scalar_t__ objectid; scalar_t__ type; } ;
typedef int found_key ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_2 (struct extent_buffer*,int,struct btrfs_root_item*) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (int *,struct btrfs_root*,struct btrfs_key const*,struct btrfs_path*,int ,int ) ;
 int FUNC_5 (struct btrfs_key*,struct btrfs_key*,int) ;

int FUNC_6(struct btrfs_root *VAR_1, const struct btrfs_key *VAR_2,
      struct btrfs_path *VAR_3, struct btrfs_root_item *VAR_4,
      struct btrfs_key *VAR_5)
{
 struct btrfs_key VAR_6;
 struct extent_buffer *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(((void*)0), VAR_1, VAR_2, VAR_3, 0, 0);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_2->offset != -1ULL) {
  if (VAR_8 > 0)
   goto out;
 } else {
  FUNC_0(VAR_8 == 0);
  if (VAR_3->slots[0] == 0)
   goto out;
  VAR_3->slots[0]--;
  VAR_8 = 0;
 }

 VAR_7 = VAR_3->nodes[0];
 VAR_9 = VAR_3->slots[0];

 FUNC_1(VAR_7, &VAR_6, VAR_9);
 if (VAR_6.objectid != VAR_2->objectid ||
     VAR_6.type != VAR_0) {
  VAR_8 = 1;
  goto out;
 }

 if (VAR_4)
  FUNC_2(VAR_7, VAR_9, VAR_4);
 if (VAR_5)
  FUNC_5(VAR_5, &VAR_6, sizeof(VAR_6));
out:
 FUNC_3(VAR_3);
 return VAR_8;
}
