
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {int dummy; } ;


 int FUNC_0 (struct raw3270_view*) ;
 int VAR_0 ;
 int FUNC_1 (struct raw3270_view*) ;
 struct raw3270_view* FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_3;

 for (VAR_3 = VAR_0; VAR_3 <= VAR_2; VAR_3++) {
  struct raw3270_view *VAR_4 = FUNC_2(&VAR_1, VAR_3);
  if (!FUNC_0(VAR_4))
   FUNC_1(VAR_4);
 }
}
