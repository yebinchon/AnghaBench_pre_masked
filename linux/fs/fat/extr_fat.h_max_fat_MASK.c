
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int dummy; } ;
struct msdos_sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct msdos_sb_info*) ;
 scalar_t__ FUNC_2 (struct msdos_sb_info*) ;

__attribute__((used)) static inline u32 FUNC_3(struct super_block *VAR_3)
{
 struct msdos_sb_info *VAR_4 = FUNC_0(VAR_3);

 return FUNC_2(VAR_4) ? VAR_2 :
  FUNC_1(VAR_4) ? VAR_1 : VAR_0;
}
