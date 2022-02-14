
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int gc_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,int,int,int ) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*,int ) ;

void FUNC_9(struct f2fs_sb_info *VAR_2, bool VAR_3)
{
 if (FUNC_8(VAR_2, VAR_0)) {
  FUNC_4(VAR_0);
  FUNC_5(VAR_2, 0);
 }


 if (VAR_3 && FUNC_0(VAR_2))
  FUNC_1(VAR_2);

 if (!FUNC_3(VAR_2))
  return;





 if (FUNC_6(VAR_2, 0, 0)) {
  FUNC_7(&VAR_2->gc_mutex);
  FUNC_2(VAR_2, 0, 0, VAR_1);
 }
}
