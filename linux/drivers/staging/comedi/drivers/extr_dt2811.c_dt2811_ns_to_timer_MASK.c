
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;


 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int* VAR_3 ;
 unsigned int* VAR_4 ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int *VAR_5,
           unsigned int VAR_6)
{
 unsigned long long VAR_7;
 unsigned int VAR_8 = VAR_1;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;
 unsigned int VAR_13;





 for (VAR_12 = 0; VAR_12 <= 7; VAR_12++) {
  for (VAR_13 = 0; VAR_13 <= 7; VAR_13++) {
   unsigned int VAR_14 = VAR_3[VAR_12];
   unsigned int VAR_15 = VAR_4[VAR_13];
   unsigned long long VAR_16 = VAR_14 * VAR_15;
   unsigned int VAR_17 = FUNC_1(VAR_12) |
            FUNC_0(VAR_13);







   VAR_7 = VAR_16 * VAR_2;
   if (VAR_7 > VAR_1)
    continue;


   if (VAR_7 <= *VAR_5 && VAR_7 > VAR_9) {
    VAR_9 = VAR_7;
    VAR_10 = VAR_17;
   }

   if (VAR_7 >= *VAR_5 && VAR_7 < VAR_8) {
    VAR_8 = VAR_7;
    VAR_11 = VAR_17;
   }
  }
 }






 if (VAR_8 == VAR_1) {
  VAR_8 = VAR_9;
  VAR_11 = VAR_10;
 }





 if (VAR_9 == 0) {
  VAR_9 = VAR_8;
  VAR_10 = VAR_11;
 }

 switch (VAR_6 & VAR_0) {
 case 129:
 default:
  if (VAR_9 - *VAR_5 < *VAR_5 - VAR_8) {
   *VAR_5 = VAR_8;
   return VAR_11;
  }
  *VAR_5 = VAR_9;
  return VAR_10;
 case 128:
  *VAR_5 = VAR_8;
  return VAR_11;
 case 130:
  *VAR_5 = VAR_9;
  return VAR_10;
 }
}
