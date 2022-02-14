
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int ,int*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

int FUNC_2(int *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_1(VAR_1, "off", 3) != 0)
  VAR_2 = FUNC_0(VAR_1, 0, VAR_0);
 else
  *VAR_0 = -1;

 return VAR_2;
}
