
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_package {int nr_domains; int plist; TYPE_1__* priv; int name; struct rapl_domain* domains; } ;
struct rapl_domain {scalar_t__ id; int power_zone; int name; } ;
struct TYPE_2__ {int control_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rapl_domain*) ;
 int FUNC_1 (struct rapl_package*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rapl_package*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct rapl_domain*,int ,int ) ;

void FUNC_7(struct rapl_package *VAR_5)
{
 struct rapl_domain *VAR_6, *VAR_7 = ((void*)0);

 FUNC_3(VAR_5);

 for (VAR_6 = VAR_5->domains; VAR_6 < VAR_5->domains + VAR_5->nr_domains; VAR_6++) {
  FUNC_6(VAR_6, VAR_1, 0);
  FUNC_6(VAR_6, VAR_0, 0);
  if (FUNC_0(VAR_6) > 1) {
   FUNC_6(VAR_6, VAR_3, 0);
   FUNC_6(VAR_6, VAR_2, 0);
  }
  if (VAR_6->id == VAR_4) {
   VAR_7 = VAR_6;
   continue;
  }
  FUNC_5("remove package, undo power limit on %s: %s\n",
    VAR_5->name, VAR_6->name);
  FUNC_4(VAR_5->priv->control_type,
      &VAR_6->power_zone);
 }

 FUNC_4(VAR_5->priv->control_type,
     &VAR_7->power_zone);
 FUNC_2(&VAR_5->plist);
 FUNC_1(VAR_5);
}
