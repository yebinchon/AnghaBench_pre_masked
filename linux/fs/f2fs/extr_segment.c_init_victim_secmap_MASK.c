
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct dirty_seglist_info {int victim_secmap; } ;


 struct dirty_seglist_info* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct f2fs_sb_info*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct f2fs_sb_info *VAR_2)
{
 struct dirty_seglist_info *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = FUNC_2(FUNC_1(VAR_2));

 VAR_3->victim_secmap = FUNC_3(VAR_2, VAR_4, VAR_1);
 if (!VAR_3->victim_secmap)
  return -VAR_0;
 return 0;
}
