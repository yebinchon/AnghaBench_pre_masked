
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {unsigned long s_blocksize; unsigned char s_blocksize_bits; } ;
struct inode {scalar_t__ i_ino; struct super_block* i_sb; } ;
struct fs_info_t {scalar_t__ vol_type; int dentries_in_root; int root_start_sector; int sectors_per_clu_bits; int sectors_per_clu; } ;
struct bd_info_t {int sector_size_bits; } ;
struct exfat_sb_info {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;
typedef int sector_t ;
struct TYPE_3__ {unsigned long size; } ;
struct TYPE_4__ {TYPE_1__ fid; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_3 ;
 struct exfat_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct inode*,int,unsigned int*) ;
 unsigned long const FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_7, sector_t VAR_8, sector_t *VAR_9,
        unsigned long *VAR_10, int *VAR_11)
{
 struct super_block *VAR_12 = VAR_7->i_sb;
 struct exfat_sb_info *VAR_13 = FUNC_2(VAR_12);
 struct fs_info_t *VAR_14 = &(VAR_13->fs_info);
 struct bd_info_t *VAR_15 = &(VAR_13->bd_info);
 const unsigned long VAR_16 = VAR_12->s_blocksize;
 const unsigned char VAR_17 = VAR_12->s_blocksize_bits;
 sector_t VAR_18;
 int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;

 *VAR_9 = 0;
 *VAR_10 = 0;

 if ((VAR_14->vol_type == VAR_4) || (VAR_14->vol_type == VAR_5)) {
  if (VAR_7->i_ino == VAR_3) {
   if (VAR_8 <
       (VAR_14->dentries_in_root >>
        (VAR_15->sector_size_bits - VAR_0))) {
    *VAR_9 = VAR_8 + VAR_14->root_start_sector;
    *VAR_10 = 1;
   }
   return 0;
  }
 }

 VAR_18 = (FUNC_5(VAR_7) + (VAR_16 - 1)) >> VAR_17;
 if (VAR_8 >= VAR_18) {
  if (*VAR_11 == 0)
   return 0;
 } else {
  *VAR_11 = 0;
 }


 VAR_20 = VAR_8 >> VAR_14->sectors_per_clu_bits;


 VAR_21 = VAR_8 & (VAR_14->sectors_per_clu - 1);

 FUNC_1(VAR_7)->fid.size = FUNC_5(VAR_7);

 VAR_19 = FUNC_4(VAR_7, VAR_20, &VAR_22);

 if (VAR_19) {
  if (VAR_19 == VAR_6)
   return -VAR_2;
  else
   return -VAR_1;
 } else if (VAR_22 != FUNC_0(~0)) {
  *VAR_9 = FUNC_3(VAR_22) + VAR_21;
  *VAR_10 = VAR_14->sectors_per_clu - VAR_21;
 }

 return 0;
}
