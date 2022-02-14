
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_bp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dpaa_bp*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dpaa_bp *VAR_3, int *VAR_4)
{
 int VAR_5 = *VAR_4;
 int VAR_6;

 if (FUNC_1(VAR_5 < VAR_2)) {
  do {
   VAR_6 = FUNC_0(VAR_3);
   if (FUNC_1(!VAR_6)) {




    break;
   }
   VAR_5 += VAR_6;
  } while (VAR_5 < VAR_1);

  *VAR_4 = VAR_5;
  if (FUNC_1(VAR_5 < VAR_1))
   return -VAR_0;
 }

 return 0;
}
