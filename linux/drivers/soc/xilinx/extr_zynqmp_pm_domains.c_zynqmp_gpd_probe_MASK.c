
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct generic_pm_domain {int detach_dev; int attach_dev; int power_on; int power_off; int name; } ;
struct zynqmp_pm_domain {struct generic_pm_domain gpd; scalar_t__ node_id; } ;
struct device {TYPE_1__* parent; } ;
struct platform_device {struct device dev; } ;
struct genpd_onecell_data {int num_domains; struct generic_pm_domain** domains; int xlate; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 void* FUNC_2 (struct device*,int,int,int ) ;
 struct genpd_onecell_data* FUNC_3 (struct device*,int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,struct genpd_onecell_data*) ;
 int FUNC_6 (struct generic_pm_domain*,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 int VAR_10;
 struct genpd_onecell_data *VAR_11;
 struct generic_pm_domain **VAR_12;
 struct zynqmp_pm_domain *VAR_13;
 struct device *VAR_14 = &VAR_9->dev;

 VAR_3 = FUNC_7();
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_13 = FUNC_2(VAR_14, VAR_2, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_14, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->xlate = VAR_8;

 VAR_12 = FUNC_2(VAR_14, VAR_2, sizeof(*VAR_12),
          VAR_1);
 if (!VAR_12)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++, VAR_13++) {
  VAR_13->node_id = 0;
  VAR_13->gpd.name = FUNC_4(VAR_1, "domain%d", VAR_10);
  VAR_13->gpd.power_off = VAR_6;
  VAR_13->gpd.power_on = VAR_7;
  VAR_13->gpd.attach_dev = VAR_4;
  VAR_13->gpd.detach_dev = VAR_5;

  VAR_12[VAR_10] = &VAR_13->gpd;


  FUNC_6(&VAR_13->gpd, ((void*)0), 1);
 }

 VAR_11->domains = VAR_12;
 VAR_11->num_domains = VAR_2;
 FUNC_5(VAR_14->parent->of_node, VAR_11);

 return 0;
}
