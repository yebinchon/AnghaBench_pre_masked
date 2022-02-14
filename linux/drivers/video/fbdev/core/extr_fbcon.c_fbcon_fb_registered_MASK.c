
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int node; } ;


 int FUNC_0 () ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int,int ) ;

int FUNC_5(struct fb_info *VAR_5)
{
 int VAR_6 = 0, VAR_7, VAR_8;

 FUNC_0();

 VAR_8 = VAR_5->node;
 FUNC_2(VAR_5);

 if (VAR_1) {
  FUNC_3("fbcon: Deferring console take-over\n");
  return 0;
 }

 if (VAR_3 == -1) {
  for (VAR_7 = VAR_2; VAR_7 <= VAR_4; VAR_7++) {
   if (VAR_0[VAR_7] == VAR_8) {
    VAR_3 = VAR_8;
    break;
   }
  }

  if (VAR_3 != -1)
   VAR_6 = FUNC_1(1);
 } else {
  for (VAR_7 = VAR_2; VAR_7 <= VAR_4; VAR_7++) {
   if (VAR_0[VAR_7] == VAR_8)
    FUNC_4(VAR_7, VAR_8, 0);
  }
 }

 return VAR_6;
}
