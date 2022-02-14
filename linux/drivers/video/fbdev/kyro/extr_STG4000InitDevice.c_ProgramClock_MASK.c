
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

u32 FUNC_0(u32 VAR_8,
     u32 VAR_9,
     u32 * VAR_10, u32 * VAR_11, u32 * VAR_12)
{
 u32 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 u32 VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 u32 VAR_23, VAR_24, VAR_25;
 u32 VAR_26 = 0, VAR_27;
 u32 VAR_28, VAR_29, VAR_30;
 u32 VAR_31[] = { 1, 2, 0 };


 VAR_9 *= 100;
 VAR_8 *= 1000;




 VAR_29 = VAR_9 - (VAR_9 >> 8);
 VAR_30 = VAR_9 + (VAR_9 >> 8);


 VAR_28 = VAR_9 >> VAR_7;


 for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
  VAR_15 = VAR_31[VAR_16];
  VAR_13 = VAR_6;


  while (VAR_13 <= VAR_2) {

   VAR_26 = VAR_13 * (VAR_28 << VAR_15);


   VAR_14 = (u32)(VAR_26 / (VAR_8 >> VAR_7));


   if (VAR_14 > VAR_5)
    VAR_14--;







   while ((VAR_14 >= VAR_5) &&
          (VAR_14 <= VAR_1)) {

    VAR_27 = VAR_8 / VAR_13;
    VAR_27 = VAR_14 * VAR_27;







    if ((VAR_27 >= VAR_4) &&
        ((VAR_27 <= VAR_0) ||
         ((VAR_9 > VAR_0)
          && (VAR_27 <= VAR_3)))) {
     VAR_26 = (VAR_27 >> VAR_15);


     if ((VAR_26 >= VAR_29)
         && (VAR_26 <= VAR_30)) {
      VAR_24 = (((VAR_8 / VAR_13) - (VAR_8 / VAR_2))) / ((VAR_8 - (VAR_8 / VAR_2)) >> 10);

      VAR_25 = ((VAR_27 - VAR_4)) / ((VAR_0 - VAR_4) >> 10);
      VAR_23 = VAR_24 + VAR_25;

      if (!VAR_22) {
       VAR_20 = VAR_27;
       VAR_19 = VAR_15;
       VAR_18 = VAR_14;
       VAR_17 = VAR_13;
       VAR_21 = VAR_26;
       VAR_22 =
           VAR_23;
      }
      if ((VAR_23 >= VAR_22) && (VAR_15 > 0)) {
       VAR_20 = VAR_27;
       VAR_19 = VAR_15;
       VAR_18 = VAR_14;
       VAR_17 = VAR_13;
       VAR_21 = VAR_26;
       VAR_22 =
           VAR_23;
      }
     }
    }
    VAR_14++;
   }
   VAR_13++;
  }
 }





 if (VAR_22) {
  *VAR_11 = VAR_17;
  *VAR_10 = VAR_18;

  if ((VAR_19 == 2) || (VAR_19 == 3)) {
   *VAR_12 = 3;
  } else
   *VAR_12 = VAR_19;

 }

 return (VAR_21);
}
