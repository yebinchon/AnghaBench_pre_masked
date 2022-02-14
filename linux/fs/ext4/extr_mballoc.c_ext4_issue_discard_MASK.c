
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; int s_bdev; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef int ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int,int ,int ,struct bio**) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,scalar_t__,int,int ,int ) ;
 int FUNC_5 (struct super_block*,unsigned long long,int) ;

__attribute__((used)) static inline int FUNC_6(struct super_block *VAR_1,
  ext4_group_t VAR_2, ext4_grpblk_t VAR_3, int VAR_4,
  struct bio **VAR_5)
{
 ext4_fsblk_t VAR_6;

 VAR_6 = (FUNC_0(FUNC_1(VAR_1), VAR_3) +
    FUNC_3(VAR_1, VAR_2));
 VAR_4 = FUNC_0(FUNC_1(VAR_1), VAR_4);
 FUNC_5(VAR_1,
   (unsigned long long) VAR_6, VAR_4);
 if (VAR_5) {
  return FUNC_2(VAR_1->s_bdev,
   (sector_t)VAR_6 << (VAR_1->s_blocksize_bits - 9),
   (sector_t)VAR_4 << (VAR_1->s_blocksize_bits - 9),
   VAR_0, 0, VAR_5);
 } else
  return FUNC_4(VAR_1, VAR_6, VAR_4, VAR_0, 0);
}
