
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (char*,char**,int ) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1,
  unsigned long VAR_2, unsigned long *VAR_3)
{
 char *VAR_4;

 *VAR_3 = FUNC_0(FUNC_1(VAR_1), &VAR_4, 0);
 VAR_4 = FUNC_1(VAR_4);
 if (*VAR_4 || *VAR_3 > VAR_2)
  return -VAR_0;

 return 0;
}
