
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct exfat_sb_info {int s_dirt; } ;


 struct exfat_sb_info* FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0)
{
 struct exfat_sb_info *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->s_dirt;
}
