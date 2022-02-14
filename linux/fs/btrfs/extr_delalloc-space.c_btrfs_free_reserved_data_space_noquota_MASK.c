
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int i_sb; } ;
struct btrfs_space_info {int lock; } ;
struct btrfs_fs_info {struct btrfs_space_info* data_sinfo; int sectorsize; } ;


 struct btrfs_fs_info* FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_space_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_0, u64 VAR_1,
         u64 VAR_2)
{
 struct btrfs_fs_info *VAR_3 = FUNC_0(VAR_0->i_sb);
 struct btrfs_space_info *VAR_4;


 VAR_2 = FUNC_3(VAR_1 + VAR_2, VAR_3->sectorsize) -
       FUNC_2(VAR_1, VAR_3->sectorsize);
 VAR_1 = FUNC_2(VAR_1, VAR_3->sectorsize);

 VAR_4 = VAR_3->data_sinfo;
 FUNC_4(&VAR_4->lock);
 FUNC_1(VAR_3, VAR_4, -VAR_2);
 FUNC_5(&VAR_4->lock);
}
