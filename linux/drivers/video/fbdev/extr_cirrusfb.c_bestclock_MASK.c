
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(long VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;
 long VAR_6, VAR_7;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 *VAR_1 = 0;
 *VAR_2 = 0;
 *VAR_3 = 0;

 if (VAR_0 < 8000)
  VAR_0 = 8000;

 VAR_7 = VAR_0;

 for (VAR_4 = 32; VAR_4 < 128; VAR_4++) {
  int VAR_8 = 0;

  VAR_5 = (14318 * VAR_4) / VAR_0;
  if ((VAR_5 >= 7) && (VAR_5 <= 63)) {
   int VAR_9 = VAR_5;

   if (VAR_9 > 31) {
    VAR_8 = 1;
    VAR_9 >>= 1;
   }
   VAR_6 = ((14318 * VAR_4) / VAR_9) >> VAR_8;
   VAR_6 = VAR_6 > VAR_0 ? VAR_6 - VAR_0 : VAR_0 - VAR_6;
   if (VAR_6 < VAR_7) {
    VAR_7 = VAR_6;
    *VAR_1 = VAR_4;
    *VAR_2 = VAR_9;
    *VAR_3 = VAR_8;
   }
  }
  VAR_5++;
  if ((VAR_5 >= 7) && (VAR_5 <= 63)) {
   if (VAR_5 > 31) {
    VAR_8 = 1;
    VAR_5 >>= 1;
   }
   VAR_6 = ((14318 * VAR_4) / VAR_5) >> VAR_8;
   VAR_6 = VAR_6 > VAR_0 ? VAR_6 - VAR_0 : VAR_0 - VAR_6;
   if (VAR_6 < VAR_7) {
    VAR_7 = VAR_6;
    *VAR_1 = VAR_4;
    *VAR_2 = VAR_5;
    *VAR_3 = VAR_8;
   }
  }
 }
}
