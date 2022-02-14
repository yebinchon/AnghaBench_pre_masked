
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,unsigned int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char const*) ;

int FUNC_4(
 const char *VAR_2,
 const char *VAR_3,
 unsigned int VAR_4,
 char *VAR_5,
 unsigned char *VAR_6)
{
 char *VAR_7;
 int VAR_8;

 if (!VAR_2 || !VAR_3 || !VAR_5 || !VAR_6)
  return -1;

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_7)
  return -1;

 VAR_7 = FUNC_3(VAR_7, "=");
 if (!VAR_7)
  return -1;

 VAR_7 += 1;
 if (*VAR_7 == '0' && (*(VAR_7+1) == 'x' || *(VAR_7+1) == 'X')) {
  VAR_7 += 2;
  *VAR_6 = VAR_1;
 } else
  *VAR_6 = VAR_0;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 < 0)
  return -1;

 if (VAR_8 >= VAR_4) {
  FUNC_1("Length of input: %d exceeds max_length:"
   " %d\n", VAR_8, VAR_4);
  return -1;
 }
 FUNC_0(VAR_5, VAR_7, VAR_8);
 VAR_5[VAR_8] = '\0';

 return 0;
}
