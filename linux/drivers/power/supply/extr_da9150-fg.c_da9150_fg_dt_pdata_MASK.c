
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct da9150_fg_pdata {int crit_soc_lvl; int warn_soc_lvl; int update_interval; } ;


 int VAR_0 ;
 struct da9150_fg_pdata* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct da9150_fg_pdata *FUNC_3(struct device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->of_node;
 struct da9150_fg_pdata *VAR_3;

 VAR_3 = FUNC_0(VAR_1, sizeof(struct da9150_fg_pdata), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_2, "dlg,update-interval",
        &VAR_3->update_interval);
 FUNC_2(VAR_2, "dlg,warn-soc-level",
       &VAR_3->warn_soc_lvl);
 FUNC_2(VAR_2, "dlg,crit-soc-level",
       &VAR_3->crit_soc_lvl);

 return VAR_3;
}
