
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int i_sb; } ;
struct extent_map {scalar_t__ block_start; scalar_t__ start; scalar_t__ len; } ;
struct btrfs_fs_info {int sectorsize; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct extent_map*) ;
 int FUNC_2 (struct extent_map*) ;
 struct extent_map* FUNC_3 (int ,int *,int ,int ,int ,int ) ;
 struct btrfs_fs_info* FUNC_4 (int ) ;
 int FUNC_5 (struct extent_map*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, u64 *VAR_2, u64 *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = FUNC_4(VAR_1->i_sb);
 struct extent_map *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_3(FUNC_0(VAR_1), ((void*)0), 0,
         FUNC_6(*VAR_2, VAR_4->sectorsize),
         FUNC_7(*VAR_3, VAR_4->sectorsize), 0);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);


 if (VAR_5->block_start == VAR_0) {
  VAR_6 = 1;
  *VAR_3 = VAR_5->start + VAR_5->len > *VAR_2 + *VAR_3 ?
         0 : *VAR_2 + *VAR_3 - VAR_5->start - VAR_5->len;
  *VAR_2 = VAR_5->start + VAR_5->len;
 }
 FUNC_5(VAR_5);
 return VAR_6;
}
