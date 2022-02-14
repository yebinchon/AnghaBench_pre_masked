
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct waiting_dir_move {int orphanized; } ;
struct send_ctx {int deleted_refs; int new_refs; int cur_inode_gen; int cur_ino; TYPE_1__* send_root; TYPE_1__* parent_root; int waiting_dir_moves; } ;
struct recorded_ref {int name_len; int name; int dir; } ;
struct btrfs_path {int * nodes; } ;
struct btrfs_key {scalar_t__ type; int objectid; int offset; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_dir_item {int dummy; } ;
struct TYPE_3__ {struct btrfs_fs_info* fs_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct send_ctx*,int ,int ,int ,int *,int *,int const) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (int ,struct btrfs_dir_item*,struct btrfs_key*) ;
 int FUNC_4 (struct btrfs_path*) ;
 struct btrfs_dir_item* FUNC_5 (struct btrfs_fs_info*,struct btrfs_path*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,TYPE_1__*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int *,scalar_t__*,int *,int *,int *,int *) ;
 struct waiting_dir_move* FUNC_9 (struct send_ctx*,int ) ;

__attribute__((used)) static int FUNC_10(struct send_ctx *VAR_4,
      struct recorded_ref *VAR_5,
      const bool VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_4->parent_root->fs_info;
 struct btrfs_path *VAR_8;
 struct btrfs_key VAR_9;
 struct btrfs_key VAR_10;
 struct btrfs_dir_item *VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 int VAR_14 = 0;
 struct waiting_dir_move *VAR_15;

 if (FUNC_0(&VAR_4->waiting_dir_moves))
  return 0;

 VAR_8 = FUNC_2();
 if (!VAR_8)
  return -VAR_3;

 VAR_9.objectid = VAR_5->dir;
 VAR_9.type = VAR_0;
 VAR_9.offset = FUNC_6(VAR_5->name, VAR_5->name_len);

 VAR_14 = FUNC_7(((void*)0), VAR_4->parent_root, &VAR_9, VAR_8, 0, 0);
 if (VAR_14 < 0) {
  goto out;
 } else if (VAR_14 > 0) {
  VAR_14 = 0;
  goto out;
 }

 VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_5->name,
           VAR_5->name_len);
 if (!VAR_11) {
  VAR_14 = 0;
  goto out;
 }
 FUNC_3(VAR_8->nodes[0], VAR_11, &VAR_10);
 if (VAR_10.type != VAR_1) {
  VAR_14 = 0;
  goto out;
 }

 VAR_14 = FUNC_8(VAR_4->parent_root, VAR_10.objectid, ((void*)0),
        &VAR_12, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 if (VAR_14 < 0)
  goto out;
 VAR_14 = FUNC_8(VAR_4->send_root, VAR_10.objectid, ((void*)0),
        &VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 if (VAR_14 < 0) {
  if (VAR_14 == -VAR_2)
   VAR_14 = 0;
  goto out;
 }


 if (VAR_13 != VAR_12) {
  VAR_14 = 0;
  goto out;
 }

 VAR_15 = FUNC_9(VAR_4, VAR_10.objectid);
 if (VAR_15 && !VAR_15->orphanized) {
  VAR_14 = FUNC_1(VAR_4,
        VAR_4->cur_ino,
        VAR_4->cur_inode_gen,
        VAR_10.objectid,
        &VAR_4->new_refs,
        &VAR_4->deleted_refs,
        VAR_6);
  if (!VAR_14)
   VAR_14 = 1;
 }
out:
 FUNC_4(VAR_8);
 return VAR_14;
}
