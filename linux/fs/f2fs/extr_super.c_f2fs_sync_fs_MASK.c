
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct f2fs_sb_info {int gc_mutex; } ;
struct cp_control {int reason; } ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct super_block*,int) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct super_block *VAR_3, int VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = 0;

 if (FUNC_9(FUNC_2(VAR_5)))
  return 0;
 if (FUNC_9(FUNC_5(VAR_5, VAR_1)))
  return 0;

 FUNC_8(VAR_3, VAR_4);

 if (FUNC_9(FUNC_5(VAR_5, VAR_2)))
  return -VAR_0;

 if (VAR_4) {
  struct cp_control VAR_7;

  VAR_7.reason = FUNC_1(VAR_5);

  FUNC_6(&VAR_5->gc_mutex);
  VAR_6 = FUNC_4(VAR_5, &VAR_7);
  FUNC_7(&VAR_5->gc_mutex);
 }
 FUNC_3(((void*)0), 1);

 return VAR_6;
}
