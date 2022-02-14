
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int reset_names_count; int clk_names_count; int (* get_power ) (struct meson_ee_pwrc_domain*) ;int name; } ;
struct TYPE_4__ {int power_off; int power_on; int name; } ;
struct meson_ee_pwrc_domain {int num_rstc; int num_clks; TYPE_1__ desc; TYPE_2__ base; int clks; int rstc; struct meson_ee_pwrc* pwrc; } ;
struct meson_ee_pwrc {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct meson_ee_pwrc_domain*) ;
 int FUNC_9 (struct meson_ee_pwrc_domain*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3,
         struct meson_ee_pwrc *VAR_4,
         struct meson_ee_pwrc_domain *VAR_5)
{
 VAR_5->pwrc = VAR_4;
 VAR_5->num_rstc = VAR_5->desc.reset_names_count;
 VAR_5->num_clks = VAR_5->desc.clk_names_count;

 if (VAR_5->num_rstc) {
  int VAR_6 = FUNC_7(&VAR_3->dev);

  if (VAR_6 != VAR_5->num_rstc)
   FUNC_3(&VAR_3->dev, "Invalid resets count %d for domain %s\n",
     VAR_6, VAR_5->desc.name);

  VAR_5->rstc = FUNC_5(&VAR_3->dev, 0,
        0);
  if (FUNC_0(VAR_5->rstc))
   return FUNC_1(VAR_5->rstc);
 }

 if (VAR_5->num_clks) {
  int VAR_7 = FUNC_4(&VAR_3->dev, &VAR_5->clks);
  if (VAR_7 < 0)
   return VAR_7;

  if (VAR_5->num_clks != VAR_7) {
   FUNC_3(&VAR_3->dev, "Invalid clocks count %d for domain %s\n",
     VAR_7, VAR_5->desc.name);
   VAR_5->num_clks = VAR_7;
  }
 }

 VAR_5->base.name = VAR_5->desc.name;
 VAR_5->base.power_on = VAR_1;
 VAR_5->base.power_off = VAR_0;
 if (VAR_5->num_clks && VAR_5->desc.get_power && !VAR_5->desc.get_power(VAR_5)) {
  int VAR_8 = FUNC_2(VAR_5->num_clks, VAR_5->clks);
  if (VAR_8)
   return VAR_8;

  FUNC_6(&VAR_5->base, &VAR_2, 0);
 } else
  FUNC_6(&VAR_5->base, ((void*)0),
         (VAR_5->desc.get_power ?
          VAR_5->desc.get_power(VAR_5) : 1));

 return 0;
}
