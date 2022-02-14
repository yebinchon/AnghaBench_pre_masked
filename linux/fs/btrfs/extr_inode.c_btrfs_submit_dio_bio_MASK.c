
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_sb; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_dio_private {int dummy; } ;
struct bio {struct btrfs_dio_private* bi_private; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {int flags; int sync_writers; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*,struct bio*,int ) ;
 scalar_t__ FUNC_4 (struct inode*,struct bio*,int ,int) ;
 scalar_t__ FUNC_5 (struct inode*,struct btrfs_dio_private*,struct bio*,int ) ;
 scalar_t__ FUNC_6 (struct btrfs_fs_info*,struct bio*,int ,int ) ;
 struct btrfs_fs_info* FUNC_7 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (struct btrfs_fs_info*,struct bio*,int ,int ,int ,struct inode*,int ) ;

__attribute__((used)) static inline blk_status_t FUNC_9(struct bio *VAR_4,
  struct inode *VAR_5, u64 VAR_6, int VAR_7)
{
 struct btrfs_fs_info *VAR_8 = FUNC_7(VAR_5->i_sb);
 struct btrfs_dio_private *VAR_9 = VAR_4->bi_private;
 bool VAR_10 = FUNC_2(VAR_4) == VAR_2;
 blk_status_t VAR_11;


 if (VAR_7)
  VAR_7 = !FUNC_1(&FUNC_0(VAR_5)->sync_writers);

 if (!VAR_10) {
  VAR_11 = FUNC_3(VAR_8, VAR_4, VAR_1);
  if (VAR_11)
   goto err;
 }

 if (FUNC_0(VAR_5)->flags & VAR_0)
  goto map;

 if (VAR_10 && VAR_7) {
  VAR_11 = FUNC_8(VAR_8, VAR_4, 0, 0,
       VAR_6, VAR_5,
       VAR_3);
  goto err;
 } else if (VAR_10) {




  VAR_11 = FUNC_4(VAR_5, VAR_4, VAR_6, 1);
  if (VAR_11)
   goto err;
 } else {
  VAR_11 = FUNC_5(VAR_5, VAR_9, VAR_4,
           VAR_6);
  if (VAR_11)
   goto err;
 }
map:
 VAR_11 = FUNC_6(VAR_8, VAR_4, 0, 0);
err:
 return VAR_11;
}
