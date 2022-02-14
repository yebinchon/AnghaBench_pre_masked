
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct btrfs_fs_info {int dummy; } ;
struct bio {int dummy; } ;
typedef scalar_t__ blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct btrfs_fs_info*,struct bio*,int ) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*,struct bio*,int,int ) ;
 struct btrfs_fs_info* FUNC_4 (int ) ;

__attribute__((used)) static inline blk_status_t FUNC_5(struct inode *VAR_2,
       struct bio *VAR_3,
       int VAR_4)
{
 struct btrfs_fs_info *VAR_5 = FUNC_4(VAR_2->i_sb);
 blk_status_t VAR_6;

 FUNC_0(FUNC_1(VAR_3) == VAR_1);

 VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4, 0);

 return VAR_6;
}
