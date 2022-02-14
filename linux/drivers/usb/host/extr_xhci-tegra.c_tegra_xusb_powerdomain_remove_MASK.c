
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb {int genpd_dev_host; int genpd_dev_ss; scalar_t__ genpd_dl_host; scalar_t__ genpd_dl_ss; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0,
       struct tegra_xusb *VAR_1)
{
 if (VAR_1->genpd_dl_ss)
  FUNC_2(VAR_1->genpd_dl_ss);
 if (VAR_1->genpd_dl_host)
  FUNC_2(VAR_1->genpd_dl_host);
 if (!FUNC_0(VAR_1->genpd_dev_ss))
  FUNC_1(VAR_1->genpd_dev_ss, 1);
 if (!FUNC_0(VAR_1->genpd_dev_host))
  FUNC_1(VAR_1->genpd_dev_host, 1);
}
