
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nr; struct e1000_opt_list* p; } ;
struct TYPE_5__ {unsigned int min; unsigned int max; } ;
struct TYPE_7__ {TYPE_2__ l; TYPE_1__ r; } ;
struct e1000_option {unsigned int def; int type; int err; int name; TYPE_3__ arg; } ;
struct e1000_opt_list {unsigned int i; char* str; } ;
struct e1000_adapter {TYPE_4__* pdev; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 () ;


 unsigned int VAR_0 ;
 int FUNC_1 (int *,char*,char*,...) ;




__attribute__((used)) static int FUNC_2(unsigned int *VAR_1,
     const struct e1000_option *VAR_2,
     struct e1000_adapter *VAR_3)
{
 if (*VAR_1 == VAR_0) {
  *VAR_1 = VAR_2->def;
  return 0;
 }

 switch (VAR_2->type) {
 case 130:
  switch (*VAR_1) {
  case 131:
   FUNC_1(&VAR_3->pdev->dev, "%s Enabled\n",
     VAR_2->name);
   return 0;
  case 132:
   FUNC_1(&VAR_3->pdev->dev, "%s Disabled\n",
     VAR_2->name);
   return 0;
  }
  break;
 case 128:
  if (*VAR_1 >= VAR_2->arg.r.min && *VAR_1 <= VAR_2->arg.r.max) {
   FUNC_1(&VAR_3->pdev->dev, "%s set to %i\n",
     VAR_2->name, *VAR_1);
   return 0;
  }
  break;
 case 129: {
  int VAR_4;
  struct e1000_opt_list *VAR_5;

  for (VAR_4 = 0; VAR_4 < VAR_2->arg.l.nr; VAR_4++) {
   VAR_5 = &VAR_2->arg.l.p[VAR_4];
   if (*VAR_1 == VAR_5->i) {
    if (VAR_5->str[0] != '\0')
     FUNC_1(&VAR_3->pdev->dev, "%s\n",
       VAR_5->str);
    return 0;
   }
  }
 }
  break;
 default:
  FUNC_0();
 }

 FUNC_1(&VAR_3->pdev->dev, "Invalid %s value specified (%i) %s\n",
   VAR_2->name, *VAR_1, VAR_2->err);
 *VAR_1 = VAR_2->def;
 return -1;
}
