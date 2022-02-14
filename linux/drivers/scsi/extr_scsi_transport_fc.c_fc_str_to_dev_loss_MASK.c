
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, unsigned long *VAR_3)
{
 char *VAR_4;

 *VAR_3 = FUNC_0(VAR_2, &VAR_4, 0);
 if (*VAR_4 && (*VAR_4 != '\n'))
  return -VAR_0;



 if (*VAR_3 > VAR_1)
  return -VAR_0;

 return 0;
}
