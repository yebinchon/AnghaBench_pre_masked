
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,unsigned long) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, char *VAR_2, int VAR_3,
      unsigned long VAR_4)
{

 int VAR_5[4] = {2, 3, 5, 7};
 int VAR_6[16] = { 2, 4, 6, 8,
   16, 32, 64, 128,
   256, 512, 1024, 2048,
   4096, 8192, 16384, 32768 };
 int VAR_7, VAR_8, VAR_9 = VAR_0;
 int VAR_10, VAR_11;

 VAR_7 = VAR_4 / VAR_3;
 if (VAR_4 % VAR_3)
  VAR_7++;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++)
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
   VAR_8 = VAR_6[VAR_10] * VAR_5[VAR_11];
   if (VAR_8 >= VAR_7) {
    if (VAR_8 < VAR_9) {
     VAR_9 = VAR_8;
     *VAR_2 = VAR_10;
     *VAR_1 = VAR_11;
    }
    break;
   }
  }

 if (VAR_9 == VAR_0) {
  FUNC_1("Can not find valid baud rate,speed_hz is %d,clkrate is %ld, we use the max prescaler value.\n",
   VAR_3, VAR_4);
  *VAR_1 = FUNC_0(VAR_5) - 1;
  *VAR_2 = FUNC_0(VAR_6) - 1;
 }
}
