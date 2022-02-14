
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_option {int dummy; } ;





 int FUNC_0 (struct pnp_option*) ;

char *FUNC_1(struct pnp_option *VAR_0)
{
 switch (FUNC_0(VAR_0)) {
 case 128:
  return "preferred";
 case 130:
  return "acceptable";
 case 129:
  return "functional";
 }
 return "invalid";
}
