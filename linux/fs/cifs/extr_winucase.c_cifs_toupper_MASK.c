
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int** VAR_0 ;

wchar_t
FUNC_0(wchar_t VAR_1)
{
 unsigned char VAR_2;
 const wchar_t *VAR_3;
 wchar_t VAR_4;


 VAR_2 = (VAR_1 & 0xff00) >> 8;


 VAR_3 = VAR_0[VAR_2];
 if (!VAR_3)
  return VAR_1;


 VAR_2 = VAR_1 & 0xff;


 VAR_4 = VAR_3[VAR_2];
 if (VAR_4)
  return VAR_4;

 return VAR_1;
}
