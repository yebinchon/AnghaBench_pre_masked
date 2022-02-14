
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_sig_expr {int dummy; } ;


 scalar_t__ FUNC_0 (struct aspeed_sig_expr const*) ;

__attribute__((used)) static bool FUNC_1(const struct aspeed_sig_expr **VAR_0)
{
 if (!VAR_0)
  return 0;

 while (*VAR_0) {
  if (FUNC_0(*VAR_0))
   return 1;
  VAR_0++;
 }

 return 0;
}
