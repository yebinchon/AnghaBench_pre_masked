
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct send_ctx {int cur_ino; int cur_inode_gen; int cur_inode_mode; int cur_inode_rdev; TYPE_1__* send_root; } ;
struct fs_path {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_3__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_8 (struct send_ctx*,int ,int) ;
 int FUNC_9 (struct send_ctx*,int) ;
 int FUNC_10 (struct btrfs_fs_info*,char*,int) ;
 int FUNC_11 (struct btrfs_fs_info*,char*,int) ;
 struct fs_path* FUNC_12 () ;
 int FUNC_13 (struct fs_path*) ;
 int FUNC_14 (struct fs_path*) ;
 int FUNC_15 (struct send_ctx*,int,int,struct fs_path*) ;
 int FUNC_16 (TYPE_1__*,int,int *,int*,int*,int *,int *,int*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_1__*,int,struct fs_path*) ;
 int FUNC_19 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_20(struct send_ctx *VAR_14, u64 VAR_15)
{
 struct btrfs_fs_info *VAR_16 = VAR_14->send_root->fs_info;
 int VAR_17 = 0;
 struct fs_path *VAR_18;
 int VAR_19;
 u64 VAR_20;
 u64 VAR_21;
 u64 VAR_22;

 FUNC_10(VAR_16, "send_create_inode %llu", VAR_15);

 VAR_18 = FUNC_12();
 if (!VAR_18)
  return -VAR_11;

 if (VAR_15 != VAR_14->cur_ino) {
  VAR_17 = FUNC_16(VAR_14->send_root, VAR_15, ((void*)0), &VAR_20, &VAR_21,
         ((void*)0), ((void*)0), &VAR_22);
  if (VAR_17 < 0)
   goto out;
 } else {
  VAR_20 = VAR_14->cur_inode_gen;
  VAR_21 = VAR_14->cur_inode_mode;
  VAR_22 = VAR_14->cur_inode_rdev;
 }

 if (FUNC_5(VAR_21)) {
  VAR_19 = VAR_7;
 } else if (FUNC_2(VAR_21)) {
  VAR_19 = VAR_5;
 } else if (FUNC_4(VAR_21)) {
  VAR_19 = VAR_10;
 } else if (FUNC_1(VAR_21) || FUNC_0(VAR_21)) {
  VAR_19 = VAR_8;
 } else if (FUNC_3(VAR_21)) {
  VAR_19 = VAR_6;
 } else if (FUNC_6(VAR_21)) {
  VAR_19 = VAR_9;
 } else {
  FUNC_11(VAR_14->send_root->fs_info, "unexpected inode type %o",
    (int)(VAR_21 & VAR_13));
  VAR_17 = -VAR_12;
  goto out;
 }

 VAR_17 = FUNC_9(VAR_14, VAR_19);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_15(VAR_14, VAR_15, VAR_20, VAR_18);
 if (VAR_17 < 0)
  goto out;

 FUNC_7(VAR_14, VAR_2, VAR_18);
 FUNC_8(VAR_14, VAR_0, VAR_15);

 if (FUNC_4(VAR_21)) {
  FUNC_14(VAR_18);
  VAR_17 = FUNC_18(VAR_14->send_root, VAR_15, VAR_18);
  if (VAR_17 < 0)
   goto out;
  FUNC_7(VAR_14, VAR_3, VAR_18);
 } else if (FUNC_1(VAR_21) || FUNC_0(VAR_21) ||
     FUNC_3(VAR_21) || FUNC_6(VAR_21)) {
  FUNC_8(VAR_14, VAR_4, FUNC_17(VAR_22));
  FUNC_8(VAR_14, VAR_1, VAR_21);
 }

 VAR_17 = FUNC_19(VAR_14);
 if (VAR_17 < 0)
  goto out;


tlv_put_failure:
out:
 FUNC_13(VAR_18);
 return VAR_17;
}
