
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0)
{
 if ((VAR_0[0] == 'l') && (VAR_0[1] == 'd'))
  VAR_0 += 2;
 else if ((*VAR_0 != '\0') && FUNC_0("cdsx", *VAR_0))
  VAR_0++;
 return VAR_0;
}
