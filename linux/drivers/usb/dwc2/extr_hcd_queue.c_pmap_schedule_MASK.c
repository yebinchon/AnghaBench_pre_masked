
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long*,int,int,int,int ) ;
 int FUNC_1 (unsigned long*,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_1, int VAR_2,
    int VAR_3, int VAR_4,
    int VAR_5, int VAR_6, bool VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_4 > VAR_2)
  return -VAR_0;


 VAR_5 = FUNC_2(VAR_5, VAR_3);

 VAR_8 = VAR_2 * VAR_5;
 VAR_9 = VAR_3 / VAR_5;


 if (VAR_6 >= VAR_8)
  return -VAR_0;

 if (VAR_7)

  VAR_10 = (VAR_6 / VAR_2 + 1) * VAR_2;
 else

  VAR_10 = VAR_8;







 while (VAR_6 + VAR_4 <= VAR_10) {
  int VAR_12;


  VAR_12 = (VAR_6 / VAR_2 + 1) * VAR_2;


  VAR_6 = FUNC_0(VAR_1, VAR_12, VAR_6, VAR_4,
         0);






  if (VAR_6 >= VAR_12) {
   VAR_6 = VAR_12;
   continue;
  }


  for (VAR_11 = 1; VAR_11 < VAR_9; VAR_11++) {
   int VAR_13 = VAR_6 + VAR_8 * VAR_11;
   int VAR_14 = VAR_12 + VAR_8 * VAR_11;
   int VAR_15;


   VAR_15 = FUNC_0(
    VAR_1, VAR_13 + VAR_4, VAR_13, VAR_4,
    0);


   if (VAR_15 == VAR_13)
    continue;


   VAR_13 = FUNC_0(
    VAR_1, VAR_14, VAR_13, VAR_4, 0);
   if (VAR_13 >= VAR_14)

    VAR_6 = VAR_12;
   else
    VAR_6 = VAR_13 - VAR_8 * VAR_11;
   break;
  }


  if (VAR_11 == VAR_9)
   break;
 }

 if (VAR_6 + VAR_4 > VAR_10)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  int VAR_16 = VAR_6 + VAR_8 * VAR_11;

  FUNC_1(VAR_1, VAR_16, VAR_4);
 }

 return VAR_6;
}
