
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char) ;
 char* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static inline int FUNC_3(const char *VAR_2, char **VAR_3)
{
 if (*VAR_2 == '\\') {
  *VAR_3 = (char *)VAR_2;
 } else {
  *VAR_3 = FUNC_1(VAR_2, FUNC_2(VAR_2), VAR_1);
  if (!*VAR_3)
   return -VAR_0;
  FUNC_0(*VAR_3, '\\');
 }
 return 0;
}
