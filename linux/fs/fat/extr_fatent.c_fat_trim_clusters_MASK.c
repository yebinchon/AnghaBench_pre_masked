
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int dummy; } ;
struct msdos_sb_info {int sec_per_clus; } ;


 int VAR_0 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct msdos_sb_info*,int) ;
 int FUNC_2 (struct super_block*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct msdos_sb_info *VAR_4 = FUNC_0(VAR_1);
 return FUNC_2(VAR_1, FUNC_1(VAR_4, VAR_2),
    VAR_3 * VAR_4->sec_per_clus, VAR_0, 0);
}
