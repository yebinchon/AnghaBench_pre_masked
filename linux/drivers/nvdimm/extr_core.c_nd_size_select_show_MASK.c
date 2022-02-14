
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,char*,...) ;

ssize_t FUNC_1(unsigned long VAR_0,
  const unsigned long *VAR_1, char *VAR_2)
{
 ssize_t VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4]; VAR_4++)
  if (VAR_0 == VAR_1[VAR_4])
   VAR_3 += FUNC_0(VAR_2 + VAR_3, "[%ld] ", VAR_1[VAR_4]);
  else
   VAR_3 += FUNC_0(VAR_2 + VAR_3, "%ld ", VAR_1[VAR_4]);
 VAR_3 += FUNC_0(VAR_2 + VAR_3, "\n");
 return VAR_3;
}
