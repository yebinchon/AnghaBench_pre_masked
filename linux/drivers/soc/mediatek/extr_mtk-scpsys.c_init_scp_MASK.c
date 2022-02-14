
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scp_domain_data {size_t* clk_id; int name; } ;
struct generic_pm_domain {int flags; int power_on; int power_off; int name; } ;
struct scp_domain {struct clk** clk; struct scp_domain_data const* data; struct scp* scp; struct generic_pm_domain genpd; struct clk* supply; } ;
struct scp_ctrl_reg {int pwr_sta2nd_offs; int pwr_sta_offs; } ;
struct genpd_onecell_data {int num_domains; struct generic_pm_domain** domains; } ;
struct TYPE_7__ {int pwr_sta2nd_offs; int pwr_sta_offs; } ;
struct scp {int bus_prot_reg_update; struct scp_domain* domains; struct clk* infracfg; struct genpd_onecell_data pd_data; struct clk* base; TYPE_2__* dev; TYPE_1__ ctrl_reg; } ;
struct resource {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scp* FUNC_0 (struct clk*) ;
 struct scp* FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct scp_domain*,int ) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 struct clk* FUNC_6 (TYPE_2__*,struct resource*) ;
 void* FUNC_7 (TYPE_2__*,int,int,int ) ;
 struct scp* FUNC_8 (TYPE_2__*,int,int ) ;
 struct clk* FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct platform_device*,struct clk**) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct clk* FUNC_12 (int ,char*) ;

__attribute__((used)) static struct scp *FUNC_13(struct platform_device *VAR_10,
   const struct scp_domain_data *VAR_11, int VAR_12,
   const struct scp_ctrl_reg *VAR_13,
   bool VAR_14)
{
 struct genpd_onecell_data *VAR_15;
 struct resource *VAR_16;
 int VAR_17, VAR_18;
 struct scp *VAR_19;
 struct clk *VAR_20[VAR_0];

 VAR_19 = FUNC_8(&VAR_10->dev, sizeof(*VAR_19), VAR_4);
 if (!VAR_19)
  return FUNC_1(-VAR_2);

 VAR_19->ctrl_reg.pwr_sta_offs = VAR_13->pwr_sta_offs;
 VAR_19->ctrl_reg.pwr_sta2nd_offs = VAR_13->pwr_sta2nd_offs;

 VAR_19->bus_prot_reg_update = VAR_14;

 VAR_19->dev = &VAR_10->dev;

 VAR_16 = FUNC_11(VAR_10, VAR_5, 0);
 VAR_19->base = FUNC_6(&VAR_10->dev, VAR_16);
 if (FUNC_2(VAR_19->base))
  return FUNC_0(VAR_19->base);

 VAR_19->domains = FUNC_7(&VAR_10->dev,
    VAR_12, sizeof(*VAR_19->domains), VAR_4);
 if (!VAR_19->domains)
  return FUNC_1(-VAR_2);

 VAR_15 = &VAR_19->pd_data;

 VAR_15->domains = FUNC_7(&VAR_10->dev,
   VAR_12, sizeof(*VAR_15->domains), VAR_4);
 if (!VAR_15->domains)
  return FUNC_1(-VAR_2);

 VAR_19->infracfg = FUNC_12(VAR_10->dev.of_node,
   "infracfg");
 if (FUNC_2(VAR_19->infracfg)) {
  FUNC_5(&VAR_10->dev, "Cannot find infracfg controller: %ld\n",
    FUNC_4(VAR_19->infracfg));
  return FUNC_0(VAR_19->infracfg);
 }

 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
  struct scp_domain *VAR_21 = &VAR_19->domains[VAR_17];
  const struct scp_domain_data *VAR_22 = &VAR_11[VAR_17];

  VAR_21->supply = FUNC_9(&VAR_10->dev, VAR_22->name);
  if (FUNC_2(VAR_21->supply)) {
   if (FUNC_4(VAR_21->supply) == -VAR_1)
    VAR_21->supply = ((void*)0);
   else
    return FUNC_0(VAR_21->supply);
  }
 }

 VAR_15->num_domains = VAR_12;

 FUNC_10(VAR_10, VAR_20);

 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
  struct scp_domain *VAR_23 = &VAR_19->domains[VAR_17];
  struct generic_pm_domain *VAR_24 = &VAR_23->genpd;
  const struct scp_domain_data *VAR_25 = &VAR_11[VAR_17];

  VAR_15->domains[VAR_17] = VAR_24;
  VAR_23->scp = VAR_19;

  VAR_23->data = VAR_25;

  for (VAR_18 = 0; VAR_18 < VAR_6 && VAR_25->clk_id[VAR_18]; VAR_18++) {
   struct clk *VAR_26 = VAR_20[VAR_25->clk_id[VAR_18]];

   if (FUNC_2(VAR_26)) {
    FUNC_5(&VAR_10->dev, "%s: clk unavailable\n",
     VAR_25->name);
    return FUNC_0(VAR_26);
   }

   VAR_23->clk[VAR_18] = VAR_26;
  }

  VAR_24->name = VAR_25->name;
  VAR_24->power_off = VAR_8;
  VAR_24->power_on = VAR_9;
  if (FUNC_3(VAR_23, VAR_7))
   VAR_24->flags |= VAR_3;
 }

 return VAR_19;
}
