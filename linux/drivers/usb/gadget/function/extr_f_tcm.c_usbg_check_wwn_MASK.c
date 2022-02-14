
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_1)
{
 const char *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_1(VAR_1, "naa.");
 if (!VAR_2)
  return ((void*)0);
 VAR_2 += 4;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == 0 || VAR_3 > VAR_0 - 1)
  return ((void*)0);
 return VAR_2;
}
