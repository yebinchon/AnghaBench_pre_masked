
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int s_blocksize; } ;
struct minix_sb_info {unsigned long s_log_zone_size; int s_zmap; scalar_t__ s_firstdatazone; scalar_t__ s_nzones; } ;


 unsigned long FUNC_0 (int ,int ,scalar_t__) ;
 struct minix_sb_info* FUNC_1 (struct super_block*) ;

unsigned long FUNC_2(struct super_block *VAR_0)
{
 struct minix_sb_info *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = VAR_1->s_nzones - VAR_1->s_firstdatazone + 1;

 return (FUNC_0(VAR_1->s_zmap, VAR_0->s_blocksize, VAR_2)
  << VAR_1->s_log_zone_size);
}
