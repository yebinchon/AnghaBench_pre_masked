
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct inode_defrag {int cycled; int last_offset; int transid; int ino; int root; } ;
struct inode {int dummy; } ;
typedef struct inode btrfs_root ;
struct btrfs_key {void* offset; int type; int objectid; } ;
struct btrfs_ioctl_defrag_range_args {int start; void* len; } ;
struct btrfs_fs_info {int subvol_srcu; int sb; } ;
typedef int range ;
struct TYPE_3__ {int runtime_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int *,struct btrfs_ioctl_defrag_range_args*,int ,int) ;
 struct inode* FUNC_4 (int ,struct btrfs_key*,struct inode*,int *) ;
 int VAR_4 ;
 struct inode* FUNC_5 (struct btrfs_fs_info*,struct btrfs_key*) ;
 int FUNC_6 (TYPE_1__*,struct inode_defrag*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,struct inode_defrag*) ;
 int FUNC_10 (struct btrfs_ioctl_defrag_range_args*,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;

__attribute__((used)) static int FUNC_15(struct btrfs_fs_info *VAR_5,
        struct inode_defrag *VAR_6)
{
 struct btrfs_root *VAR_7;
 struct inode *VAR_8;
 struct btrfs_key VAR_9;
 struct btrfs_ioctl_defrag_range_args VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;


 VAR_9.objectid = VAR_6->root;
 VAR_9.type = VAR_3;
 VAR_9.offset = (u64)-1;

 VAR_12 = FUNC_13(&VAR_5->subvol_srcu);

 VAR_7 = FUNC_5(VAR_5, &VAR_9);
 if (FUNC_1(VAR_7)) {
  VAR_13 = FUNC_2(VAR_7);
  goto cleanup;
 }

 VAR_9.objectid = VAR_6->ino;
 VAR_9.type = VAR_2;
 VAR_9.offset = 0;
 VAR_8 = FUNC_4(VAR_5->sb, &VAR_9, VAR_7, ((void*)0));
 if (FUNC_1(VAR_8)) {
  VAR_13 = FUNC_2(VAR_8);
  goto cleanup;
 }
 FUNC_14(&VAR_5->subvol_srcu, VAR_12);


 FUNC_7(VAR_1, &FUNC_0(VAR_8)->runtime_flags);
 FUNC_10(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.len = (u64)-1;
 VAR_10.start = VAR_6->last_offset;

 FUNC_12(VAR_5->sb);
 VAR_11 = FUNC_3(VAR_8, ((void*)0), &VAR_10, VAR_6->transid,
           VAR_0);
 FUNC_11(VAR_5->sb);





 if (VAR_11 == VAR_0) {
  VAR_6->last_offset = VAR_10.start;
  FUNC_6(FUNC_0(VAR_8), VAR_6);
 } else if (VAR_6->last_offset && !VAR_6->cycled) {





  VAR_6->last_offset = 0;
  VAR_6->cycled = 1;
  FUNC_6(FUNC_0(VAR_8), VAR_6);
 } else {
  FUNC_9(VAR_4, VAR_6);
 }

 FUNC_8(VAR_8);
 return 0;
cleanup:
 FUNC_14(&VAR_5->subvol_srcu, VAR_12);
 FUNC_9(VAR_4, VAR_6);
 return VAR_13;
}
