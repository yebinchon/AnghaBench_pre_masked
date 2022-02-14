
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_4__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; } ;
struct btrfs_fs_info {int dummy; } ;
struct bio {scalar_t__ bi_status; } ;
typedef enum btrfs_wq_endio_type { ____Placeholder_btrfs_wq_endio_type } btrfs_wq_endio_type ;
typedef scalar_t__ blk_status_t ;
struct TYPE_5__ {int flags; int sync_writers; struct btrfs_root* root; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct btrfs_fs_info*,struct bio*,int) ;
 scalar_t__ FUNC_5 (struct inode*,struct bio*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (struct inode*,struct bio*,int *) ;
 scalar_t__ FUNC_8 (struct btrfs_fs_info*,struct bio*,int,int ) ;
 struct btrfs_fs_info* FUNC_9 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (struct inode*,struct bio*,int,unsigned long) ;
 scalar_t__ FUNC_11 (struct btrfs_fs_info*,struct bio*,int,unsigned long,int ,struct inode*,int ) ;

__attribute__((used)) static blk_status_t FUNC_12(struct inode *VAR_7, struct bio *VAR_8,
       int VAR_9,
       unsigned long VAR_10)

{
 struct btrfs_fs_info *VAR_11 = FUNC_9(VAR_7->i_sb);
 struct btrfs_root *VAR_12 = FUNC_0(VAR_7)->root;
 enum btrfs_wq_endio_type VAR_13 = VAR_2;
 blk_status_t VAR_14 = 0;
 int VAR_15;
 int VAR_16 = !FUNC_1(&FUNC_0(VAR_7)->sync_writers);

 VAR_15 = FUNC_0(VAR_7)->flags & VAR_1;

 if (FUNC_6(FUNC_0(VAR_7)))
  VAR_13 = VAR_3;

 if (FUNC_3(VAR_8) != VAR_5) {
  VAR_14 = FUNC_4(VAR_11, VAR_8, VAR_13);
  if (VAR_14)
   goto out;

  if (VAR_10 & VAR_4) {
   VAR_14 = FUNC_10(VAR_7, VAR_8,
          VAR_9,
          VAR_10);
   goto out;
  } else if (!VAR_15) {
   VAR_14 = FUNC_7(VAR_7, VAR_8, ((void*)0));
   if (VAR_14)
    goto out;
  }
  goto mapit;
 } else if (VAR_16 && !VAR_15) {

  if (VAR_12->root_key.objectid == VAR_0)
   goto mapit;

  VAR_14 = FUNC_11(VAR_11, VAR_8, VAR_9, VAR_10,
       0, VAR_7, VAR_6);
  goto out;
 } else if (!VAR_15) {
  VAR_14 = FUNC_5(VAR_7, VAR_8, 0, 0);
  if (VAR_14)
   goto out;
 }

mapit:
 VAR_14 = FUNC_8(VAR_11, VAR_8, VAR_9, 0);

out:
 if (VAR_14) {
  VAR_8->bi_status = VAR_14;
  FUNC_2(VAR_8);
 }
 return VAR_14;
}
