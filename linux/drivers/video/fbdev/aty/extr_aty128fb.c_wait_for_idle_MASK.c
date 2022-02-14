
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aty128fb_par {scalar_t__ blitter_may_be_busy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aty128fb_par*) ;
 int FUNC_1 (struct aty128fb_par*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct aty128fb_par*) ;

__attribute__((used)) static void FUNC_4(struct aty128fb_par *VAR_1)
{
 int VAR_2;

 FUNC_3(64, VAR_1);

 for (;;) {
  for (VAR_2 = 0; VAR_2 < 2000000; VAR_2++) {
   if (!(FUNC_2(VAR_0) & (1 << 31))) {
    FUNC_0(VAR_1);
    VAR_1->blitter_may_be_busy = 0;
    return;
   }
  }
  FUNC_1(VAR_1);
 }
}
