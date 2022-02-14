
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const char *VAR_1, char VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4]; VAR_4++)
  if (VAR_1[VAR_4] == VAR_2) {
   if (VAR_3 == 0)
    return VAR_4;
   VAR_3--;
  }
 return (VAR_3 == 0) ? VAR_4 : -VAR_0;
}
