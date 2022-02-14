
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int node; } ;
struct TYPE_2__ {int d; } ;


 int FUNC_0 () ;
 int* VAR_0 ;
 int FUNC_1 (int ,struct fb_info*,int *,int,int,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct fb_info** VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int ) ;
 TYPE_1__* VAR_5 ;

void FUNC_5(struct fb_info *VAR_6)
{
 int VAR_7, VAR_8 = -1, VAR_9 = 0;
 int VAR_10 = VAR_6->node;

 FUNC_0();

 if (!VAR_1)
  return;

 for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
  if (VAR_0[VAR_7] != VAR_10 &&
      VAR_0[VAR_7] != -1) {
   VAR_8 = VAR_0[VAR_7];
   break;
  }
 }

 if (VAR_8 != -1) {
  for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
   if (VAR_0[VAR_7] == VAR_10)
    FUNC_4(VAR_7, VAR_8, 0);
  }
 } else {
  struct fb_info *VAR_11 = VAR_4[VAR_10];







  for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
   if (VAR_0[VAR_7] == VAR_10) {
    VAR_0[VAR_7] = -1;
    if (!FUNC_3(VAR_10)) {
     VAR_9 = FUNC_1(VAR_5[VAR_7].d,
             VAR_11, ((void*)0), VAR_7,
             VAR_10, 0);
     if (VAR_9) {
      VAR_0[VAR_7] = VAR_10;
      return;
     }
    }
   }
  }
  FUNC_2();
 }
}
