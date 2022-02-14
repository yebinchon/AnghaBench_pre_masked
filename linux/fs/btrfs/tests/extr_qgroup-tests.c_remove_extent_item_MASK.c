
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int leave_spinning; } ;
struct btrfs_key {void* offset; int type; void* objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_trans_handle*,int *) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct btrfs_root *VAR_3, u64 VAR_4,
         u64 VAR_5)
{
 struct btrfs_trans_handle VAR_6;
 struct btrfs_key VAR_7;
 struct btrfs_path *VAR_8;
 int VAR_9;

 FUNC_3(&VAR_6, ((void*)0));

 VAR_7.objectid = VAR_4;
 VAR_7.type = VAR_0;
 VAR_7.offset = VAR_5;

 VAR_8 = FUNC_0();
 if (!VAR_8) {
  FUNC_6(VAR_2);
  return -VAR_1;
 }
 VAR_8->leave_spinning = 1;

 VAR_9 = FUNC_4(&VAR_6, VAR_3, &VAR_7, VAR_8, -1, 1);
 if (VAR_9) {
  FUNC_5("didn't find our key %d", VAR_9);
  FUNC_2(VAR_8);
  return VAR_9;
 }
 FUNC_1(&VAR_6, VAR_3, VAR_8);
 FUNC_2(VAR_8);
 return 0;
}
