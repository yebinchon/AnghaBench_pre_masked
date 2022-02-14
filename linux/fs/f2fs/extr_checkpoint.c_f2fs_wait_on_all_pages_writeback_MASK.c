
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int cp_wait; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;

void FUNC_7(struct f2fs_sb_info *VAR_4)
{
 FUNC_0(VAR_3);

 for (;;) {
  FUNC_5(&VAR_4->cp_wait, &VAR_3, VAR_2);

  if (!FUNC_3(VAR_4, VAR_0))
   break;

  if (FUNC_6(FUNC_1(VAR_4)))
   break;

  FUNC_4(5*VAR_1);
 }
 FUNC_2(&VAR_4->cp_wait, &VAR_3);
}
