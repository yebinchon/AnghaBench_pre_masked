
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int,unsigned int const) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3,
      unsigned int *VAR_4,
      unsigned int *VAR_5,
      unsigned int *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8 = 1;
 unsigned int VAR_9;
 unsigned int VAR_10 = 1;
 static const unsigned int VAR_11 = 1000;
 const unsigned int VAR_12 = VAR_3 *
            VAR_11;




 static const unsigned int VAR_13 = 12500;
 int VAR_14 = 0;

 for (VAR_7 = 1; VAR_7 <= VAR_1; ++VAR_7) {
  for (VAR_9 = 1; VAR_9 <= VAR_2; ++VAR_9) {
   unsigned int VAR_15 =
       (VAR_12 * VAR_7) / VAR_9;
   if (FUNC_1(VAR_15 - VAR_13) <
       FUNC_1(VAR_14 - VAR_13)) {
    VAR_14 = VAR_15;
    VAR_8 = VAR_7;
    VAR_10 = VAR_9;
   }
  }
 }
 if (VAR_14 == 0)
  return -VAR_0;

 *VAR_4 = VAR_8;
 *VAR_5 = VAR_10;

 *VAR_6 = FUNC_0(VAR_14 * 4,
           VAR_11);
 return 0;
}
