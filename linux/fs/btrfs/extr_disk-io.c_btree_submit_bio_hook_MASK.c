
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct btrfs_fs_info {int dummy; } ;
struct bio {scalar_t__ bi_status; } ;
typedef scalar_t__ blk_status_t ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct btrfs_fs_info*,struct bio*,int ) ;
 scalar_t__ FUNC_5 (struct btrfs_fs_info*,struct bio*,int,int ) ;
 struct btrfs_fs_info* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct btrfs_fs_info*,struct bio*,int,int ,int ,struct inode*,int ) ;
 int FUNC_8 (struct btrfs_fs_info*,int ) ;

__attribute__((used)) static blk_status_t FUNC_9(struct inode *VAR_3, struct bio *VAR_4,
       int VAR_5,
       unsigned long VAR_6)
{
 struct btrfs_fs_info *VAR_7 = FUNC_6(VAR_3->i_sb);
 int VAR_8 = FUNC_8(VAR_7, FUNC_0(VAR_3));
 blk_status_t VAR_9;

 if (FUNC_2(VAR_4) != VAR_1) {




  VAR_9 = FUNC_4(VAR_7, VAR_4,
       VAR_0);
  if (VAR_9)
   goto out_w_error;
  VAR_9 = FUNC_5(VAR_7, VAR_4, VAR_5, 0);
 } else if (!VAR_8) {
  VAR_9 = FUNC_3(VAR_4);
  if (VAR_9)
   goto out_w_error;
  VAR_9 = FUNC_5(VAR_7, VAR_4, VAR_5, 0);
 } else {




  VAR_9 = FUNC_7(VAR_7, VAR_4, VAR_5, 0,
       0, VAR_3, VAR_2);
 }

 if (VAR_9)
  goto out_w_error;
 return 0;

out_w_error:
 VAR_4->bi_status = VAR_9;
 FUNC_1(VAR_4);
 return VAR_9;
}
