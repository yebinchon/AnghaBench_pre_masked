
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pixclock_div {int m; int n; int p; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_0,
           struct pixclock_div *VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = ~0x0;
 unsigned int VAR_7;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 13000;
 unsigned int VAR_10;


 VAR_10 = FUNC_1(VAR_0);
 for (VAR_2 = 1; VAR_2 < 64; VAR_2++) {
  for (VAR_3 = 2; VAR_3 < 8; VAR_3++) {
   for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
    VAR_7 = (VAR_9 * VAR_2) / (VAR_3 * (1 << VAR_4));
    VAR_5 = (VAR_7 > VAR_10) ? (VAR_7 - VAR_10) :
     (VAR_10 - VAR_7);
    if (VAR_5 < VAR_6) {
     VAR_6 = VAR_5;
     VAR_8 = VAR_7;
     VAR_1->m = VAR_2;
     VAR_1->n = VAR_3;
     VAR_1->p = VAR_4;
    }
   }
  }
 }
 return FUNC_0(VAR_8);
}
