
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int tmp ;
struct send_ctx {int parent_root; int send_root; } ;
struct fs_path {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_dir_item {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct btrfs_dir_item*) ;
 int FUNC_2 (struct btrfs_dir_item*) ;
 struct btrfs_path* FUNC_3 () ;
 int FUNC_4 (struct btrfs_path*) ;
 struct btrfs_dir_item* FUNC_5 (int *,int ,struct btrfs_path*,int ,char*,int ,int ) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct fs_path*,char*,int ) ;
 int FUNC_8 (char*,int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct send_ctx *VAR_2,
      u64 VAR_3, u64 VAR_4,
      struct fs_path *VAR_5)
{
 int VAR_6 = 0;
 struct btrfs_path *VAR_7;
 struct btrfs_dir_item *VAR_8;
 char VAR_9[64];
 int VAR_10;
 u64 VAR_11 = 0;

 VAR_7 = FUNC_3();
 if (!VAR_7)
  return -VAR_1;

 while (1) {
  VAR_10 = FUNC_8(VAR_9, sizeof(VAR_9), "o%llu-%llu-%llu",
    VAR_3, VAR_4, VAR_11);
  FUNC_0(VAR_10 < sizeof(VAR_9));

  VAR_8 = FUNC_5(((void*)0), VAR_2->send_root,
    VAR_7, VAR_0,
    VAR_9, FUNC_9(VAR_9), 0);
  FUNC_6(VAR_7);
  if (FUNC_1(VAR_8)) {
   VAR_6 = FUNC_2(VAR_8);
   goto out;
  }
  if (VAR_8) {

   VAR_11++;
   continue;
  }

  if (!VAR_2->parent_root) {

   VAR_6 = 0;
   break;
  }

  VAR_8 = FUNC_5(((void*)0), VAR_2->parent_root,
    VAR_7, VAR_0,
    VAR_9, FUNC_9(VAR_9), 0);
  FUNC_6(VAR_7);
  if (FUNC_1(VAR_8)) {
   VAR_6 = FUNC_2(VAR_8);
   goto out;
  }
  if (VAR_8) {

   VAR_11++;
   continue;
  }

  break;
 }

 VAR_6 = FUNC_7(VAR_5, VAR_9, FUNC_9(VAR_9));

out:
 FUNC_4(VAR_7);
 return VAR_6;
}
