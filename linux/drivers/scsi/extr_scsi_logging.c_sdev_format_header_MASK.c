
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_0, size_t VAR_1,
     const char *VAR_2, int VAR_3)
{
 size_t VAR_4 = 0;

 if (VAR_2)
  VAR_4 += FUNC_1(VAR_0 + VAR_4, VAR_1 - VAR_4,
     "[%s] ", VAR_2);

 if (FUNC_0(VAR_4 >= VAR_1))
  return VAR_4;

 if (VAR_3 >= 0)
  VAR_4 += FUNC_1(VAR_0 + VAR_4, VAR_1 - VAR_4,
     "tag#%d ", VAR_3);
 return VAR_4;
}
