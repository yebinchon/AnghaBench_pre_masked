
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_1, char *VAR_2, const char *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_1(VAR_3);
 if (((VAR_2 - VAR_1) + VAR_4 + 2) >= VAR_0)
  return ((void*)0);
 FUNC_0(VAR_2, VAR_3, VAR_4);
 VAR_2[VAR_4] = '/';
 VAR_2[VAR_4 + 1] = '\0';
 VAR_2 += VAR_4 + 1;
 return VAR_2;
}
