
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ loff_t ;


 char* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;

int FUNC_4(char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0);
 static loff_t VAR_4;
 const char *VAR_5;

 if (!VAR_1)
  VAR_4 = 0;

 while ((VAR_5 = FUNC_0(&VAR_4))) {
  if (!FUNC_2(VAR_5, VAR_0, VAR_3))
   return FUNC_3(VAR_0, VAR_5, VAR_2);
 }
 return 0;
}
