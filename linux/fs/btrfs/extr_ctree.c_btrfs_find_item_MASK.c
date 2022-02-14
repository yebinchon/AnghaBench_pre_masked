
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef void* u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__ type; scalar_t__ objectid; scalar_t__* slots; struct extent_buffer** nodes; void* offset; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ objectid; scalar_t__* slots; struct extent_buffer** nodes; void* offset; } ;


 int FUNC_0 (struct btrfs_path*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_path*,scalar_t__) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_4 (int *,struct btrfs_root*,struct btrfs_path*,struct btrfs_path*,int ,int ) ;

int FUNC_5(struct btrfs_root *VAR_0, struct btrfs_path *VAR_1,
  u64 VAR_2, u64 VAR_3, u8 VAR_4,
  struct btrfs_key *VAR_5)
{
 int VAR_6;
 struct btrfs_key VAR_7;
 struct extent_buffer *VAR_8;

 FUNC_0(VAR_1);
 FUNC_0(VAR_5);

 VAR_7.type = VAR_4;
 VAR_7.objectid = VAR_2;
 VAR_7.offset = VAR_3;

 VAR_6 = FUNC_4(((void*)0), VAR_0, &VAR_7, VAR_1, 0, 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 = VAR_1->nodes[0];
 if (VAR_6 && VAR_1->slots[0] >= FUNC_1(VAR_8)) {
  VAR_6 = FUNC_3(VAR_0, VAR_1);
  if (VAR_6)
   return VAR_6;
  VAR_8 = VAR_1->nodes[0];
 }

 FUNC_2(VAR_8, VAR_5, VAR_1->slots[0]);
 if (VAR_5->type != VAR_7.type ||
   VAR_5->objectid != VAR_7.objectid)
  return 1;

 return 0;
}
