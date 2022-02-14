
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned long VAR_1,
    unsigned char *VAR_2,
    unsigned char *VAR_3,
    unsigned char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;
 long VAR_9 = 1000;
 long VAR_10;

 for (VAR_5 = 1; VAR_5 < 256; VAR_5++) {
  for (VAR_6 = 1; VAR_6 < 256; VAR_6++) {
   for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
    VAR_8 = ((2*VAR_0 * VAR_5) >> VAR_7) / VAR_6;
    VAR_10 = (VAR_1 > VAR_8)
     ? VAR_1 - VAR_8
     : VAR_8 - VAR_1;
    if (VAR_10 < VAR_9) {
     VAR_9 = VAR_10;
     *VAR_3 = VAR_5;
     *VAR_2 = VAR_6;
     *VAR_4 = VAR_7;
    }
   }
  }
 }
}
