
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_bdev; } ;
struct bd_info_t {int opened; } ;
struct exfat_sb_info {long debug_flags; struct bd_info_t bd_info; } ;


 long VAR_0 ;
 struct exfat_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

int FUNC_2(struct super_block *VAR_2)
{
 struct bd_info_t *VAR_3 = &(FUNC_0(VAR_2)->bd_info);
 if (!VAR_3->opened)
  return VAR_1;

 return FUNC_1(VAR_2->s_bdev);
}
