
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ulist {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_trans_handle*,int ) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_fs_info*,int ,int ,struct ulist**,int) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_fs_info*) ;
 int FUNC_3 (struct btrfs_trans_handle*,int ,int ,struct ulist*,struct ulist*) ;
 scalar_t__ FUNC_4 (struct btrfs_fs_info*,int ,int ,int ) ;
 int FUNC_5 (struct btrfs_root*,int ,int ,int ,int ) ;
 int FUNC_6 (struct btrfs_root*,int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ulist*) ;

__attribute__((used)) static int FUNC_10(struct btrfs_root *VAR_2,
  u32 VAR_3, u32 VAR_4)
{
 struct btrfs_trans_handle VAR_5;
 struct btrfs_fs_info *VAR_6 = VAR_2->fs_info;
 struct ulist *VAR_7 = ((void*)0);
 struct ulist *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_2(&VAR_5, VAR_6);

 FUNC_8("running qgroup add/remove tests");
 VAR_9 = FUNC_0(&VAR_5, VAR_0);
 if (VAR_9) {
  FUNC_7("couldn't create a qgroup %d", VAR_9);
  return VAR_9;
 }






 VAR_9 = FUNC_1(&VAR_5, VAR_6, VAR_4, 0, &VAR_7,
   0);
 if (VAR_9) {
  FUNC_9(VAR_7);
  FUNC_7("couldn't find old roots: %d", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_2, VAR_4, VAR_4, 0,
    VAR_0);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(&VAR_5, VAR_6, VAR_4, 0, &VAR_8,
   0);
 if (VAR_9) {
  FUNC_9(VAR_7);
  FUNC_9(VAR_8);
  FUNC_7("couldn't find old roots: %d", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(&VAR_5, VAR_4, VAR_4, VAR_7,
       VAR_8);
 if (VAR_9) {
  FUNC_7("couldn't account space for a qgroup %d", VAR_9);
  return VAR_9;
 }

 if (FUNC_4(VAR_6, VAR_0,
    VAR_4, VAR_4)) {
  FUNC_7("qgroup counts didn't match expected values");
  return -VAR_1;
 }
 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);

 VAR_9 = FUNC_1(&VAR_5, VAR_6, VAR_4, 0, &VAR_7,
   0);
 if (VAR_9) {
  FUNC_9(VAR_7);
  FUNC_7("couldn't find old roots: %d", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_6(VAR_2, VAR_4, VAR_4);
 if (VAR_9)
  return -VAR_1;

 VAR_9 = FUNC_1(&VAR_5, VAR_6, VAR_4, 0, &VAR_8,
   0);
 if (VAR_9) {
  FUNC_9(VAR_7);
  FUNC_9(VAR_8);
  FUNC_7("couldn't find old roots: %d", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(&VAR_5, VAR_4, VAR_4, VAR_7,
       VAR_8);
 if (VAR_9) {
  FUNC_7("couldn't account space for a qgroup %d", VAR_9);
  return -VAR_1;
 }

 if (FUNC_4(VAR_6, VAR_0, 0, 0)) {
  FUNC_7("qgroup counts didn't match expected values");
  return -VAR_1;
 }

 return 0;
}
