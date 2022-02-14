
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int dummy; } ;


 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (int *,struct btrfs_root*,struct btrfs_key const*,struct btrfs_path*,int ,int ) ;

int FUNC_5(struct btrfs_root *VAR_0,
          const struct btrfs_key *VAR_1,
          struct btrfs_path *VAR_2, int VAR_3,
          int VAR_4)
{
 int VAR_5;
 struct extent_buffer *VAR_6;

again:
 VAR_5 = FUNC_4(((void*)0), VAR_0, VAR_1, VAR_2, 0, 0);
 if (VAR_5 <= 0)
  return VAR_5;







 VAR_6 = VAR_2->nodes[0];

 if (VAR_3) {
  if (VAR_2->slots[0] >= FUNC_0(VAR_6)) {
   VAR_5 = FUNC_1(VAR_0, VAR_2);
   if (VAR_5 <= 0)
    return VAR_5;
   if (!VAR_4)
    return 1;




   VAR_4 = 0;
   VAR_3 = 0;
   FUNC_3(VAR_2);
   goto again;
  }
 } else {
  if (VAR_2->slots[0] == 0) {
   VAR_5 = FUNC_2(VAR_0, VAR_2);
   if (VAR_5 < 0)
    return VAR_5;
   if (!VAR_5) {
    VAR_6 = VAR_2->nodes[0];
    if (VAR_2->slots[0] == FUNC_0(VAR_6))
     VAR_2->slots[0]--;
    return 0;
   }
   if (!VAR_4)
    return 1;




   VAR_4 = 0;
   VAR_3 = 1;
   FUNC_3(VAR_2);
   goto again;
  } else {
   --VAR_2->slots[0];
  }
 }
 return 0;
}
