
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct baycom_state {int opt_dcd; } ;


 scalar_t__ FUNC_0 (char const*,char) ;

__attribute__((used)) static int FUNC_1(struct baycom_state *VAR_0, const char *VAR_1)
{
 if (FUNC_0(VAR_1, '*'))
  VAR_0->opt_dcd = 0;
 else if (FUNC_0(VAR_1, '+'))
  VAR_0->opt_dcd = -1;
 else if (FUNC_0(VAR_1, '@'))
  VAR_0->opt_dcd = -2;
 else
  VAR_0->opt_dcd = 1;
 return 0;
}
