
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int required_opp_count; int is_genpd; struct opp_table** required_opp_tables; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct opp_table*) ;
 struct opp_table* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct opp_table*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct opp_table** FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_6 (struct device_node*,int *) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*,int) ;

__attribute__((used)) static void FUNC_9(struct opp_table *VAR_1,
          struct device *VAR_2,
          struct device_node *VAR_3)
{
 struct opp_table **VAR_4;
 struct device_node *VAR_5, *VAR_6;
 int VAR_7, VAR_8;


 VAR_6 = FUNC_6(VAR_3, ((void*)0));
 if (!VAR_6) {
  FUNC_3(VAR_2, "Empty OPP table\n");
  return;
 }

 VAR_7 = FUNC_5(VAR_6, "required-opps", ((void*)0));
 if (!VAR_7)
  goto put_np;

 VAR_4 = FUNC_4(VAR_7, sizeof(*VAR_4),
          VAR_0);
 if (!VAR_4)
  goto put_np;

 VAR_1->required_opp_tables = VAR_4;
 VAR_1->required_opp_count = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_5 = FUNC_8(VAR_6, VAR_8);
  if (!VAR_5)
   goto free_required_tables;

  VAR_4[VAR_8] = FUNC_1(VAR_5);
  FUNC_7(VAR_5);

  if (FUNC_0(VAR_4[VAR_8]))
   goto free_required_tables;






  if (!VAR_4[VAR_8]->is_genpd) {
   FUNC_3(VAR_2, "required-opp doesn't belong to genpd: %pOF\n",
    VAR_5);
   goto free_required_tables;
  }
 }

 goto put_np;

free_required_tables:
 FUNC_2(VAR_1);
put_np:
 FUNC_7(VAR_6);
}
