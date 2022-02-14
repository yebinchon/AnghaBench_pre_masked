
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int VAR_1 ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_2 ;
 char* FUNC_5 (char const*,char) ;
 char FUNC_6 (char const) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, size_t VAR_4, char *VAR_5,
         char *VAR_6)
{
 const char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_3, '.');
 if ((VAR_7 && ((VAR_4 > 26) ||
     ((VAR_7 - VAR_3) > 8) ||
     (VAR_3 + VAR_4 - VAR_7 > 18))) ||
     (!VAR_7 && (VAR_4 > 9))) {
  FUNC_1(VAR_2, 2, "conn_write: too long\n");
  return -VAR_0;
 }

 for (VAR_8 = 0, VAR_7 = VAR_3; VAR_8 < 8 && *VAR_7 && *VAR_7 != '.'; VAR_8++, VAR_7++) {
  if (FUNC_3(*VAR_7) || *VAR_7 == '$') {
   VAR_5[VAR_8] = FUNC_6(*VAR_7);
   continue;
  }
  if (*VAR_7 == '\n')

   break;
  FUNC_2(VAR_2, 2,
          "conn_write: invalid character %02x\n", *VAR_7);
  return -VAR_0;
 }
 while (VAR_8 < 8)
  VAR_5[VAR_8++] = ' ';
 VAR_5[8] = '\0';

 if (*VAR_7 == '.') {
  VAR_7++;
  for (VAR_8 = 0; VAR_8 < 16 && *VAR_7; VAR_8++, VAR_7++) {
   if (*VAR_7 == '\n')
    break;
   VAR_6[VAR_8] = FUNC_6(*VAR_7);
  }
  while (VAR_8 > 0 && VAR_8 < 16)
   VAR_6[VAR_8++] = ' ';
 } else
  FUNC_4(VAR_6, VAR_1, 16);
 VAR_6[16] = '\0';
 FUNC_0(VAR_6, 16);

 return 0;
}
