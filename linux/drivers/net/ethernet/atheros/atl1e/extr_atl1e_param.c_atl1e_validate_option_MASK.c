
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nr; struct atl1e_opt_list* p; } ;
struct TYPE_4__ {int min; int max; } ;
struct TYPE_6__ {TYPE_2__ l; TYPE_1__ r; } ;
struct atl1e_option {int def; int type; int err; int name; TYPE_3__ arg; } ;
struct atl1e_opt_list {int i; char* str; } ;
struct atl1e_adapter {int netdev; } ;


 int FUNC_0 () ;


 int VAR_0 ;


 int FUNC_1 (int ,char*,char*,...) ;


__attribute__((used)) static int FUNC_2(int *VAR_1, struct atl1e_option *VAR_2,
     struct atl1e_adapter *VAR_3)
{
 if (*VAR_1 == VAR_0) {
  *VAR_1 = VAR_2->def;
  return 0;
 }

 switch (VAR_2->type) {
 case 130:
  switch (*VAR_1) {
  case 131:
   FUNC_1(VAR_3->netdev,
        "%s Enabled\n", VAR_2->name);
   return 0;
  case 132:
   FUNC_1(VAR_3->netdev,
        "%s Disabled\n", VAR_2->name);
   return 0;
  }
  break;
 case 128:
  if (*VAR_1 >= VAR_2->arg.r.min && *VAR_1 <= VAR_2->arg.r.max) {
   FUNC_1(VAR_3->netdev, "%s set to %i\n",
        VAR_2->name, *VAR_1);
   return 0;
  }
  break;
 case 129:{
   int VAR_4;
   struct atl1e_opt_list *VAR_5;

   for (VAR_4 = 0; VAR_4 < VAR_2->arg.l.nr; VAR_4++) {
    VAR_5 = &VAR_2->arg.l.p[VAR_4];
    if (*VAR_1 == VAR_5->i) {
     if (VAR_5->str[0] != '\0')
      FUNC_1(VAR_3->netdev,
           "%s\n", VAR_5->str);
     return 0;
    }
   }
   break;
  }
 default:
  FUNC_0();
 }

 FUNC_1(VAR_3->netdev, "Invalid %s specified (%i) %s\n",
      VAR_2->name, *VAR_1, VAR_2->err);
 *VAR_1 = VAR_2->def;
 return -1;
}
