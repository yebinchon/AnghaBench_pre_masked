
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(u8 VAR_3, u8 *VAR_4)
{
 bool VAR_5 = 1;

 if (VAR_3 <= 14) {
  VAR_5 = 1;

  if (1 <= VAR_3 && VAR_3 <= 2)
   *VAR_4 = 0;
  else if (3 <= VAR_3 && VAR_3 <= 5)
   *VAR_4 = 1;
  else if (6 <= VAR_3 && VAR_3 <= 8)
   *VAR_4 = 2;
  else if (9 <= VAR_3 && VAR_3 <= 11)
   *VAR_4 = 3;
  else if (12 <= VAR_3 && VAR_3 <= 14)
   *VAR_4 = 4;
  else {
   FUNC_0(VAR_2, VAR_1, ("==>Hal_GetChnlGroup8723B in 2.4 G, but Channel %d in Group not found\n", VAR_3));
  }
 } else {
  VAR_5 = 0;

  if (36 <= VAR_3 && VAR_3 <= 42)
   *VAR_4 = 0;
  else if (44 <= VAR_3 && VAR_3 <= 48)
   *VAR_4 = 1;
  else if (50 <= VAR_3 && VAR_3 <= 58)
   *VAR_4 = 2;
  else if (60 <= VAR_3 && VAR_3 <= 64)
   *VAR_4 = 3;
  else if (100 <= VAR_3 && VAR_3 <= 106)
   *VAR_4 = 4;
  else if (108 <= VAR_3 && VAR_3 <= 114)
   *VAR_4 = 5;
  else if (116 <= VAR_3 && VAR_3 <= 122)
   *VAR_4 = 6;
  else if (124 <= VAR_3 && VAR_3 <= 130)
   *VAR_4 = 7;
  else if (132 <= VAR_3 && VAR_3 <= 138)
   *VAR_4 = 8;
  else if (140 <= VAR_3 && VAR_3 <= 144)
   *VAR_4 = 9;
  else if (149 <= VAR_3 && VAR_3 <= 155)
   *VAR_4 = 10;
  else if (157 <= VAR_3 && VAR_3 <= 161)
   *VAR_4 = 11;
  else if (165 <= VAR_3 && VAR_3 <= 171)
   *VAR_4 = 12;
  else if (173 <= VAR_3 && VAR_3 <= 177)
   *VAR_4 = 13;
  else {
   FUNC_0(VAR_2, VAR_1, ("==>Hal_GetChnlGroup8723B in 5G, but Channel %d in Group not found\n", VAR_3));
  }

 }
 FUNC_0(
  VAR_2,
  VAR_0,
  (
   "<==Hal_GetChnlGroup8723B,  (%s) Channel = %d, Group =%d,\n",
   VAR_5 ? "2.4G" : "5G",
   VAR_3,
   *VAR_4
  )
 );
 return VAR_5;
}
