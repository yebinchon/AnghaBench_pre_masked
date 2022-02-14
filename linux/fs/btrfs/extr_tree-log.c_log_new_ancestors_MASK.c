
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_log_ctx {int dummy; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; scalar_t__ type; } ;
struct btrfs_fs_info {scalar_t__ last_trans_committed; int sb; } ;
struct TYPE_3__ {scalar_t__ const generation; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct extent_buffer*) ;
 struct inode* FUNC_5 (int ,struct btrfs_key*,struct btrfs_root*,int *) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,TYPE_1__*,int ,int ,int ,struct btrfs_log_ctx*) ;
 int FUNC_8 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct btrfs_trans_handle *VAR_6,
        struct btrfs_root *VAR_7,
        struct btrfs_path *VAR_8,
        struct btrfs_log_ctx *VAR_9)
{
 struct btrfs_key VAR_10;

 FUNC_6(VAR_8->nodes[0], &VAR_10, VAR_8->slots[0]);

 while (1) {
  struct btrfs_fs_info *VAR_11 = VAR_7->fs_info;
  const u64 VAR_12 = VAR_11->last_trans_committed;
  struct extent_buffer *VAR_13 = VAR_8->nodes[0];
  int VAR_14 = VAR_8->slots[0];
  struct btrfs_key VAR_15;
  struct inode *VAR_16;
  int VAR_17 = 0;

  FUNC_9(VAR_8);

  VAR_15.objectid = VAR_10.offset;
  VAR_15.type = VAR_1;
  VAR_15.offset = 0;
  VAR_16 = FUNC_5(VAR_11->sb, &VAR_15, VAR_7, ((void*)0));
  if (FUNC_1(VAR_16))
   return FUNC_2(VAR_16);

  if (FUNC_0(VAR_16)->generation > VAR_12)
   VAR_17 = FUNC_7(VAR_6, VAR_7, FUNC_0(VAR_16),
           VAR_5,
           0, VAR_4, VAR_9);
  FUNC_3(VAR_16);
  if (VAR_17)
   return VAR_17;

  if (VAR_15.objectid == VAR_0)
   break;

  VAR_15.type = VAR_2;
  VAR_17 = FUNC_10(((void*)0), VAR_7, &VAR_15, VAR_8, 0, 0);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_13 = VAR_8->nodes[0];
  VAR_14 = VAR_8->slots[0];
  if (VAR_14 >= FUNC_4(VAR_13)) {
   VAR_17 = FUNC_8(VAR_7, VAR_8);
   if (VAR_17 < 0)
    return VAR_17;
   else if (VAR_17 > 0)
    return -VAR_3;
   VAR_13 = VAR_8->nodes[0];
   VAR_14 = VAR_8->slots[0];
  }

  FUNC_6(VAR_13, &VAR_10, VAR_14);
  if (VAR_10.objectid != VAR_15.objectid ||
      VAR_10.type != VAR_2)
   return -VAR_3;
 }
 return 0;
}
