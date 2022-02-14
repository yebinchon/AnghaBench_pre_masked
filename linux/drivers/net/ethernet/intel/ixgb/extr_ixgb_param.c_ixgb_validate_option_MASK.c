
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nr; struct ixgb_opt_list* p; } ;
struct TYPE_4__ {unsigned int min; unsigned int max; } ;
struct TYPE_6__ {TYPE_2__ l; TYPE_1__ r; } ;
struct ixgb_option {unsigned int def; int type; int err; int name; TYPE_3__ arg; } ;
struct ixgb_opt_list {unsigned int i; char* str; } ;


 int FUNC_0 () ;


 unsigned int VAR_0 ;


 int FUNC_1 (char*,char*,...) ;


__attribute__((used)) static int
FUNC_2(unsigned int *VAR_1, const struct ixgb_option *VAR_2)
{
 if (*VAR_1 == VAR_0) {
  *VAR_1 = VAR_2->def;
  return 0;
 }

 switch (VAR_2->type) {
 case 130:
  switch (*VAR_1) {
  case 131:
   FUNC_1("%s Enabled\n", VAR_2->name);
   return 0;
  case 132:
   FUNC_1("%s Disabled\n", VAR_2->name);
   return 0;
  }
  break;
 case 128:
  if (*VAR_1 >= VAR_2->arg.r.min && *VAR_1 <= VAR_2->arg.r.max) {
   FUNC_1("%s set to %i\n", VAR_2->name, *VAR_1);
   return 0;
  }
  break;
 case 129: {
  int VAR_3;
  const struct ixgb_opt_list *VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_2->arg.l.nr; VAR_3++) {
   VAR_4 = &VAR_2->arg.l.p[VAR_3];
   if (*VAR_1 == VAR_4->i) {
    if (VAR_4->str[0] != '\0')
     FUNC_1("%s\n", VAR_4->str);
    return 0;
   }
  }
 }
  break;
 default:
  FUNC_0();
 }

 FUNC_1("Invalid %s specified (%i) %s\n", VAR_2->name, *VAR_1, VAR_2->err);
 *VAR_1 = VAR_2->def;
 return -1;
}
