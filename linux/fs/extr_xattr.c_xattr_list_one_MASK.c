
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, ssize_t *VAR_2,
     const char *VAR_3)
{
 size_t VAR_4 = FUNC_1(VAR_3) + 1;
 if (*VAR_1) {
  if (*VAR_2 < VAR_4)
   return -VAR_0;
  FUNC_0(*VAR_1, VAR_3, VAR_4);
  *VAR_1 += VAR_4;
 }
 *VAR_2 -= VAR_4;
 return 0;
}
