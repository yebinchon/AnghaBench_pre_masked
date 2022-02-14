
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genpd_onecell_data {int num_domains; int * domains; } ;
struct qmp {struct device* dev; struct genpd_onecell_data pd_data; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qmp *VAR_0)
{
 struct genpd_onecell_data *VAR_1 = &VAR_0->pd_data;
 struct device *VAR_2 = VAR_0->dev;
 int VAR_3;

 FUNC_0(VAR_2->of_node);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_domains; VAR_3++)
  FUNC_1(VAR_1->domains[VAR_3]);
}
