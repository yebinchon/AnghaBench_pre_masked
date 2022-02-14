
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct genpd_onecell_data {int num_domains; struct generic_pm_domain** domains; } ;
struct generic_pm_domain {int power_off; int power_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,struct resource*) ;
 struct genpd_onecell_data* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int ,struct genpd_onecell_data*) ;
 int VAR_3 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct generic_pm_domain*,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_8(struct platform_device *VAR_6,
      struct generic_pm_domain **VAR_7,
      int VAR_8)
{
 struct genpd_onecell_data *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(&VAR_6->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->domains = VAR_7;
 VAR_9->num_domains = VAR_8;

 VAR_10 = FUNC_6(VAR_6, VAR_2, 0);
 VAR_3 = FUNC_3(&VAR_6->dev, VAR_10);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 for (VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11) {
  VAR_7[VAR_11]->power_on = VAR_5;
  VAR_7[VAR_11]->power_off = VAR_4;

  FUNC_7(VAR_7[VAR_11], ((void*)0), 0);
 }

 FUNC_5(VAR_6->dev.of_node, VAR_9);
 FUNC_2(&VAR_6->dev, "powerdomain init ok\n");
 return 0;
}
