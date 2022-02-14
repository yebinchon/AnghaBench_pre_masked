
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_inode {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (struct btrfs_inode*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_5 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_inode*,struct btrfs_path*,struct btrfs_path*,scalar_t__*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct btrfs_trans_handle *VAR_1,
    struct btrfs_root *VAR_2,
    struct btrfs_inode *VAR_3,
    struct btrfs_path *VAR_4,
    struct btrfs_path *VAR_5)
{
 int VAR_6;
 struct btrfs_key VAR_7;
 const u64 VAR_8 = FUNC_2(VAR_3);
 int VAR_9 = 0;
 int VAR_10 = 0;

 VAR_7.objectid = VAR_8;
 VAR_7.type = VAR_0;
 VAR_7.offset = 0;

 VAR_6 = FUNC_5(((void*)0), VAR_2, &VAR_7, VAR_4, 0, 0);
 if (VAR_6 < 0)
  return VAR_6;

 while (1) {
  int VAR_11 = VAR_4->slots[0];
  struct extent_buffer *VAR_12 = VAR_4->nodes[0];
  int VAR_13 = FUNC_1(VAR_12);

  if (VAR_11 >= VAR_13) {
   if (VAR_9 > 0) {
    u64 VAR_14 = 0;

    VAR_6 = FUNC_7(VAR_1, VAR_3, VAR_5, VAR_4,
       &VAR_14, VAR_10,
       VAR_9, 1, 0);

    FUNC_0(VAR_6 <= 0);
    if (VAR_6 < 0)
     return VAR_6;
    VAR_9 = 0;
   }
   VAR_6 = FUNC_4(VAR_2, VAR_4);
   if (VAR_6 < 0)
    return VAR_6;
   else if (VAR_6 > 0)
    break;
   continue;
  }

  FUNC_3(VAR_12, &VAR_7, VAR_11);
  if (VAR_7.objectid != VAR_8 || VAR_7.type != VAR_0)
   break;

  if (VAR_9 == 0)
   VAR_10 = VAR_11;
  VAR_9++;
  VAR_4->slots[0]++;
  FUNC_6();
 }
 if (VAR_9 > 0) {
  u64 VAR_15 = 0;

  VAR_6 = FUNC_7(VAR_1, VAR_3, VAR_5, VAR_4,
     &VAR_15, VAR_10,
     VAR_9, 1, 0);

  FUNC_0(VAR_6 <= 0);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
