
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb {void* genpd_dl_ss; void* genpd_dev_ss; void* genpd_dl_host; void* genpd_dev_host; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,void*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3,
           struct tegra_xusb *VAR_4)
{
 int VAR_5;

 VAR_4->genpd_dev_host = FUNC_3(VAR_3, "xusb_host");
 if (FUNC_0(VAR_4->genpd_dev_host)) {
  VAR_5 = FUNC_1(VAR_4->genpd_dev_host);
  FUNC_2(VAR_3, "failed to get host pm-domain: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_4->genpd_dev_ss = FUNC_3(VAR_3, "xusb_ss");
 if (FUNC_0(VAR_4->genpd_dev_ss)) {
  VAR_5 = FUNC_1(VAR_4->genpd_dev_ss);
  FUNC_2(VAR_3, "failed to get superspeed pm-domain: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_4->genpd_dl_host = FUNC_4(VAR_3, VAR_4->genpd_dev_host,
            VAR_0 |
            VAR_1);
 if (!VAR_4->genpd_dl_host) {
  FUNC_2(VAR_3, "adding host device link failed!\n");
  return -VAR_2;
 }

 VAR_4->genpd_dl_ss = FUNC_4(VAR_3, VAR_4->genpd_dev_ss,
          VAR_0 |
          VAR_1);
 if (!VAR_4->genpd_dl_ss) {
  FUNC_2(VAR_3, "adding superspeed device link failed!\n");
  return -VAR_2;
 }

 return 0;
}
