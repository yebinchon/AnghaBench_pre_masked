
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static u32 FUNC_3(int VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = 14318;

 VAR_8 = VAR_0;
 VAR_6 = VAR_5 = VAR_7 = 0;

 for (VAR_4 = 3; VAR_4 >= 0; VAR_4--) {
  for (VAR_2 = 63; VAR_2 >= 0; VAR_2--) {




   int VAR_10 = ((VAR_0 * (VAR_2 + 2) << VAR_4) / VAR_9) - 2;


   for (VAR_3 = FUNC_1(0, VAR_10);
    VAR_3 <= FUNC_2(255, VAR_10 + 1);
    VAR_3++) {




    int VAR_11 = (VAR_9 * (VAR_3 + 2) / (VAR_2 + 2)) >> VAR_4;
    int VAR_12 = FUNC_0(VAR_11 - VAR_0);





    if (VAR_12 < VAR_8) {
     VAR_8 = VAR_12;
     VAR_6 = VAR_3;
     VAR_5 = VAR_2;
     VAR_7 = VAR_4;
    }
   }
  }
 }

 VAR_3 = VAR_6;
 VAR_2 = VAR_5;
 VAR_4 = VAR_7;
 *VAR_1 = (VAR_9 * (VAR_3 + 2) / (VAR_2 + 2)) >> VAR_4;

 return (VAR_3 << 8) | (VAR_2 << 2) | VAR_4;
}
