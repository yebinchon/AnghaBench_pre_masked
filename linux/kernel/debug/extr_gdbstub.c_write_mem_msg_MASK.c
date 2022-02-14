
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (char*,char*,unsigned long) ;
 scalar_t__ FUNC_2 (char**,unsigned long*) ;
 int FUNC_3 (char*,char*,unsigned long) ;
 char* VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3)
{
 char *VAR_4 = &VAR_2[1];
 unsigned long VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_2(&VAR_4, &VAR_5) > 0 && *(VAR_4++) == ',' &&
     FUNC_2(&VAR_4, &VAR_6) > 0 && *(VAR_4++) == ':') {
  if (VAR_3)
   VAR_7 = FUNC_1(VAR_4, (char *)VAR_5, VAR_6);
  else
   VAR_7 = FUNC_3(VAR_4, (char *)VAR_5, VAR_6);
  if (VAR_7)
   return VAR_7;
  if (VAR_0)
   FUNC_0(VAR_5, VAR_5 + VAR_6);
  return 0;
 }

 return -VAR_1;
}
