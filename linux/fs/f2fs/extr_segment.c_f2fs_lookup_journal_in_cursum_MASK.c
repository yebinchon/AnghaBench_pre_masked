
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_journal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct f2fs_journal*,int,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct f2fs_journal*) ;
 int FUNC_3 (struct f2fs_journal*,int) ;
 int FUNC_4 (struct f2fs_journal*,int) ;
 int FUNC_5 (struct f2fs_journal*) ;
 int FUNC_6 (struct f2fs_journal*,int) ;
 int FUNC_7 (struct f2fs_journal*,int) ;

int FUNC_8(struct f2fs_journal *VAR_2, int VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3 == VAR_0) {
  for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_2); VAR_6++) {
   if (FUNC_1(FUNC_3(VAR_2, VAR_6)) == VAR_4)
    return VAR_6;
  }
  if (VAR_5 && FUNC_0(VAR_2, 1, VAR_0))
   return FUNC_6(VAR_2, 1);
 } else if (VAR_3 == VAR_1) {
  for (VAR_6 = 0; VAR_6 < FUNC_5(VAR_2); VAR_6++)
   if (FUNC_1(FUNC_4(VAR_2, VAR_6)) == VAR_4)
    return VAR_6;
  if (VAR_5 && FUNC_0(VAR_2, 1, VAR_1))
   return FUNC_7(VAR_2, 1);
 }
 return -1;
}
