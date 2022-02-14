
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct aty128fb_par {int fifo_slots; } ;


 int VAR_0 ;
 int FUNC_0 (struct aty128fb_par*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(u16 VAR_1, struct aty128fb_par *VAR_2)
{
 int VAR_3;

 for (;;) {
  for (VAR_3 = 0; VAR_3 < 2000000; VAR_3++) {
   VAR_2->fifo_slots = FUNC_1(VAR_0) & 0x0fff;
   if (VAR_2->fifo_slots >= VAR_1)
    return;
  }
  FUNC_0(VAR_2);
 }
}
