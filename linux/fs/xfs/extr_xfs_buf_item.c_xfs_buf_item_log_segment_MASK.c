
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t,size_t) ;

__attribute__((used)) static void
FUNC_1(
 uint VAR_3,
 uint VAR_4,
 uint *VAR_5)
{
 uint VAR_6;
 uint VAR_7;
 uint VAR_8;
 uint VAR_9;
 uint VAR_10;
 uint *VAR_11;
 uint VAR_12;
 uint VAR_13;
 uint VAR_14;




 VAR_6 = VAR_3 >> VAR_2;
 VAR_7 = VAR_4 >> VAR_2;




 VAR_8 = VAR_7 - VAR_6 + 1;





 VAR_10 = VAR_6 >> VAR_0;
 VAR_11 = &VAR_5[VAR_10];




 VAR_12 = VAR_6 & (uint)(VAR_1 - 1);
 if (VAR_12) {
  VAR_13 = FUNC_0(VAR_12 + VAR_8, (uint)VAR_1);
  VAR_14 = ((1U << (VAR_13 - VAR_12)) - 1) << VAR_12;
  *VAR_11 |= VAR_14;
  VAR_11++;
  VAR_9 = VAR_13 - VAR_12;
 } else {
  VAR_9 = 0;
 }





 while ((VAR_8 - VAR_9) >= VAR_1) {
  *VAR_11 |= 0xffffffff;
  VAR_9 += VAR_1;
  VAR_11++;
 }




 VAR_13 = VAR_8 - VAR_9;
 if (VAR_13) {
  VAR_14 = (1U << VAR_13) - 1;
  *VAR_11 |= VAR_14;
 }
}
