
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;

__attribute__((used)) static unsigned long FUNC_1(void)
{

 unsigned long VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

 VAR_2 = (1<<12);


 VAR_4 = VAR_1;
 while (VAR_4 == VAR_1)
  ;

 VAR_4 = VAR_1;
 do {
  if (++VAR_10 == (1<<VAR_9)) {
   ++VAR_9;
   VAR_10 = 0;
  }
  FUNC_0(VAR_2 * VAR_9);
  VAR_8 += VAR_9;
 } while (VAR_4 == VAR_1);




 VAR_8 -= VAR_9;
 VAR_6 = VAR_2 * VAR_9;
 VAR_3 = VAR_2 * VAR_8;

recalibrate:
 VAR_2 = VAR_3;
 VAR_5 = VAR_6;





 VAR_7 = VAR_2 >> VAR_0;
 while (VAR_5 > VAR_7) {
  VAR_2 += VAR_5;
  VAR_4 = VAR_1;
  while (VAR_4 == VAR_1)
   ;
  VAR_4 = VAR_1;
  FUNC_0(VAR_2);
  if (VAR_1 != VAR_4)
   VAR_2 -= VAR_5;
  VAR_5 >>= 1;
 }





 if (VAR_2 + VAR_5 * 2 == VAR_3 + VAR_6 * 2) {
  VAR_3 = VAR_2;
  VAR_6 <<= 2;
  goto recalibrate;
 }

 return VAR_2;
}
