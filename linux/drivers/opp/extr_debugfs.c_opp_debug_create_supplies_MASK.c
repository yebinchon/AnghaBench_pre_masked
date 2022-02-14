
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opp_table {int regulator_count; } ;
struct dev_pm_opp {TYPE_1__* supplies; } ;
struct dentry {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int u_amp; int u_volt_max; int u_volt_min; int u_volt; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int ,struct dentry*,int *) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(struct dev_pm_opp *VAR_1,
          struct opp_table *VAR_2,
          struct dentry *VAR_3)
{
 struct dentry *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->regulator_count; VAR_5++) {
  char VAR_6[15];

  FUNC_2(VAR_6, sizeof(VAR_6), "supply-%d", VAR_5);


  VAR_4 = FUNC_0(VAR_6, VAR_3);

  FUNC_1("u_volt_target", VAR_0, VAR_4,
         &VAR_1->supplies[VAR_5].u_volt);

  FUNC_1("u_volt_min", VAR_0, VAR_4,
         &VAR_1->supplies[VAR_5].u_volt_min);

  FUNC_1("u_volt_max", VAR_0, VAR_4,
         &VAR_1->supplies[VAR_5].u_volt_max);

  FUNC_1("u_amp", VAR_0, VAR_4,
         &VAR_1->supplies[VAR_5].u_amp);
 }
}
