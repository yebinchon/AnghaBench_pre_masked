
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(u8 *VAR_3,
     int VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_4 <= 0)
  VAR_6 = 5000;
 else if (VAR_4 < 50)
  VAR_6 = 5000 / VAR_4;
 else
  VAR_6 = 200 - VAR_4 * 2;
 for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
  VAR_3[VAR_0 + VAR_5] =
   (VAR_2[VAR_0 + VAR_5] * VAR_6 + 50) / 100;
  VAR_3[VAR_1 + VAR_5] =
   (VAR_2[VAR_1 + VAR_5] * VAR_6 + 50) / 100;
 }
}
