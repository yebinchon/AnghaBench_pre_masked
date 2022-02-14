
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
 const int VAR_5 = 'z' - 'a' + 1;
 char *VAR_6 = VAR_3 + FUNC_2(VAR_1);
 char *VAR_7 = VAR_3 + VAR_4;
 char *VAR_8;
 int VAR_9;

 VAR_8 = VAR_7 - 1;
 *VAR_8 = '\0';
 VAR_9 = VAR_5;
 do {
  if (VAR_8 == VAR_6)
   return -VAR_0;
  *--VAR_8 = 'a' + (VAR_2 % VAR_9);
  VAR_2 = (VAR_2 / VAR_9) - 1;
 } while (VAR_2 >= 0);

 FUNC_1(VAR_6, VAR_8, VAR_7 - VAR_8);
 FUNC_0(VAR_3, VAR_1, FUNC_2(VAR_1));

 return 0;
}
