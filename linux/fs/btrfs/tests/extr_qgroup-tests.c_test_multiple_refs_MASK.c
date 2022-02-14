
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
 int VAR_2 ;
 int FUNC_0 (struct btrfs_root*,int ,int ,int ,int ) ;
 int FUNC_1 (struct btrfs_trans_handle*,int ) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_fs_info*,int ,int ,struct ulist**,int) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_fs_info*) ;
 int FUNC_4 (struct btrfs_trans_handle*,int ,int ,struct ulist*,struct ulist*) ;
 scalar_t__ FUNC_5 (struct btrfs_fs_info*,int ,int ,int ) ;
 int FUNC_6 (struct btrfs_root*,int ,int ,int ,int ) ;
 int FUNC_7 (struct btrfs_root*,int ,int ,int ,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct ulist*) ;

__attribute__((used)) static int FUNC_11(struct btrfs_root *VAR_3,
  u32 VAR_4, u32 VAR_5)
{
 struct btrfs_trans_handle VAR_6;
 struct btrfs_fs_info *VAR_7 = VAR_3->fs_info;
 struct ulist *VAR_8 = ((void*)0);
 struct ulist *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_3(&VAR_6, VAR_7);

 FUNC_9("running qgroup multiple refs test");





 VAR_10 = FUNC_1(&VAR_6, VAR_0);
 if (VAR_10) {
  FUNC_8("couldn't create a qgroup %d", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_2(&VAR_6, VAR_7, VAR_5, 0, &VAR_8,
   0);
 if (VAR_10) {
  FUNC_10(VAR_8);
  FUNC_8("couldn't find old roots: %d", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_3, VAR_5, VAR_5, 0,
    VAR_1);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_6, VAR_7, VAR_5, 0, &VAR_9,
   0);
 if (VAR_10) {
  FUNC_10(VAR_8);
  FUNC_10(VAR_9);
  FUNC_8("couldn't find old roots: %d", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_4(&VAR_6, VAR_5, VAR_5, VAR_8,
       VAR_9);
 if (VAR_10) {
  FUNC_8("couldn't account space for a qgroup %d", VAR_10);
  return VAR_10;
 }

 if (FUNC_5(VAR_7, VAR_1,
           VAR_5, VAR_5)) {
  FUNC_8("qgroup counts didn't match expected values");
  return -VAR_2;
 }

 VAR_10 = FUNC_2(&VAR_6, VAR_7, VAR_5, 0, &VAR_8,
   0);
 if (VAR_10) {
  FUNC_10(VAR_8);
  FUNC_8("couldn't find old roots: %d", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_0(VAR_3, VAR_5, VAR_5, 0,
   VAR_0);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_6, VAR_7, VAR_5, 0, &VAR_9,
   0);
 if (VAR_10) {
  FUNC_10(VAR_8);
  FUNC_10(VAR_9);
  FUNC_8("couldn't find old roots: %d", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_4(&VAR_6, VAR_5, VAR_5, VAR_8,
       VAR_9);
 if (VAR_10) {
  FUNC_8("couldn't account space for a qgroup %d", VAR_10);
  return VAR_10;
 }

 if (FUNC_5(VAR_7, VAR_1,
     VAR_5, 0)) {
  FUNC_8("qgroup counts didn't match expected values");
  return -VAR_2;
 }

 if (FUNC_5(VAR_7, VAR_0,
     VAR_5, 0)) {
  FUNC_8("qgroup counts didn't match expected values");
  return -VAR_2;
 }

 VAR_10 = FUNC_2(&VAR_6, VAR_7, VAR_5, 0, &VAR_8,
   0);
 if (VAR_10) {
  FUNC_10(VAR_8);
  FUNC_8("couldn't find old roots: %d", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_3, VAR_5, VAR_5, 0,
    VAR_0);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(&VAR_6, VAR_7, VAR_5, 0, &VAR_9,
   0);
 if (VAR_10) {
  FUNC_10(VAR_8);
  FUNC_10(VAR_9);
  FUNC_8("couldn't find old roots: %d", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_4(&VAR_6, VAR_5, VAR_5, VAR_8,
       VAR_9);
 if (VAR_10) {
  FUNC_8("couldn't account space for a qgroup %d", VAR_10);
  return VAR_10;
 }

 if (FUNC_5(VAR_7, VAR_0,
     0, 0)) {
  FUNC_8("qgroup counts didn't match expected values");
  return -VAR_2;
 }

 if (FUNC_5(VAR_7, VAR_1,
     VAR_5, VAR_5)) {
  FUNC_8("qgroup counts didn't match expected values");
  return -VAR_2;
 }

 return 0;
}
