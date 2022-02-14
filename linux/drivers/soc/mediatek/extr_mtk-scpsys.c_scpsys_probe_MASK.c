
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scp_subdomain {size_t origin; size_t subdomain; } ;
struct scp_soc_data {int num_subdomains; struct scp_subdomain* subdomains; int num_domains; int bus_prot_reg_update; int regs; int domains; } ;
struct genpd_onecell_data {int * domains; } ;
struct scp {struct genpd_onecell_data pd_data; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scp*) ;
 int FUNC_2 (struct scp*) ;
 int FUNC_3 (int *,char*,int) ;
 struct scp* FUNC_4 (struct platform_device*,int ,int ,int *,int ) ;
 int FUNC_5 (struct platform_device*,struct scp*,int ) ;
 struct scp_soc_data* FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 const struct scp_subdomain *VAR_2;
 const struct scp_soc_data *VAR_3;
 struct scp *VAR_4;
 struct genpd_onecell_data *VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = FUNC_6(&VAR_1->dev);

 VAR_4 = FUNC_4(VAR_1, VAR_3->domains, VAR_3->num_domains, &VAR_3->regs,
   VAR_3->bus_prot_reg_update);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 FUNC_5(VAR_1, VAR_4, VAR_3->num_domains);

 VAR_5 = &VAR_4->pd_data;

 for (VAR_6 = 0, VAR_2 = VAR_3->subdomains; VAR_6 < VAR_3->num_subdomains; VAR_6++, VAR_2++) {
  VAR_7 = FUNC_7(VAR_5->domains[VAR_2->origin],
          VAR_5->domains[VAR_2->subdomain]);
  if (VAR_7 && FUNC_0(VAR_0))
   FUNC_3(&VAR_1->dev, "Failed to add subdomain: %d\n",
    VAR_7);
 }

 return 0;
}
