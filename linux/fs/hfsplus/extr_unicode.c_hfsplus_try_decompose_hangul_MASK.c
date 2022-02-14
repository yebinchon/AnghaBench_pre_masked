
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(wchar_t VAR_7, u16 *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_9 = VAR_7 - VAR_2;
 if (VAR_9 < 0 || VAR_9 >= VAR_3)
  return 0;

 VAR_10 = VAR_0 + VAR_9 / VAR_1;
 VAR_11 = VAR_6 + (VAR_9 % VAR_1) / VAR_5;
 VAR_12 = VAR_4 + VAR_9 % VAR_5;

 VAR_8[0] = VAR_10;
 VAR_8[1] = VAR_11;
 if (VAR_12 != VAR_4) {
  VAR_8[2] = VAR_12;
  return 3;
 }
 return 2;
}
