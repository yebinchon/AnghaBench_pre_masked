
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct dirty_seglist_info {int victim_secmap; } ;


 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct f2fs_sb_info *VAR_0)
{
 struct dirty_seglist_info *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->victim_secmap);
}
