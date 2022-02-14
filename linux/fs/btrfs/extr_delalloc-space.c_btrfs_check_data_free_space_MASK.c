
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int i_sb; } ;
struct extent_changeset {int dummy; } ;
struct btrfs_fs_info {int sectorsize; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct inode*,struct extent_changeset**,scalar_t__,scalar_t__) ;
 struct btrfs_fs_info* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

int FUNC_7(struct inode *VAR_0,
   struct extent_changeset **VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct btrfs_fs_info *VAR_4 = FUNC_4(VAR_0->i_sb);
 int VAR_5;


 VAR_3 = FUNC_6(VAR_2 + VAR_3, VAR_4->sectorsize) -
       FUNC_5(VAR_2, VAR_4->sectorsize);
 VAR_2 = FUNC_5(VAR_2, VAR_4->sectorsize);

 VAR_5 = FUNC_1(FUNC_0(VAR_0), VAR_3);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  FUNC_2(VAR_0, VAR_2, VAR_3);
 else
  VAR_5 = 0;
 return VAR_5;
}
