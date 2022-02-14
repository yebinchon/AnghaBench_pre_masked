
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_omap_platform_data {int* port_mode; } ;
struct usbhs_hcd_omap {int nports; int * utmi_clk; int * hsic480m_clk; int * hsic60m_clk; int ehci_logic_fck; struct usbhs_omap_platform_data* pdata; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int,int) ;
 struct usbhs_hcd_omap* FUNC_4 (struct device*) ;
 int FUNC_5 (struct usbhs_omap_platform_data*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct usbhs_hcd_omap *VAR_1 = FUNC_4(VAR_0);
 struct usbhs_omap_platform_data *VAR_2 = VAR_1->pdata;
 int VAR_3, VAR_4;

 FUNC_2(VAR_0, "usbhs_runtime_resume\n");

 FUNC_5(VAR_2);

 if (!FUNC_0(VAR_1->ehci_logic_fck))
  FUNC_1(VAR_1->ehci_logic_fck);

 for (VAR_3 = 0; VAR_3 < VAR_1->nports; VAR_3++) {
  switch (VAR_2->port_mode[VAR_3]) {
  case 129:
   if (!FUNC_0(VAR_1->hsic60m_clk[VAR_3])) {
    VAR_4 = FUNC_1(VAR_1->hsic60m_clk[VAR_3]);
    if (VAR_4) {
     FUNC_3(VAR_0,
      "Can't enable port %d hsic60m clk:%d\n",
      VAR_3, VAR_4);
    }
   }

   if (!FUNC_0(VAR_1->hsic480m_clk[VAR_3])) {
    VAR_4 = FUNC_1(VAR_1->hsic480m_clk[VAR_3]);
    if (VAR_4) {
     FUNC_3(VAR_0,
      "Can't enable port %d hsic480m clk:%d\n",
      VAR_3, VAR_4);
    }
   }


  case 128:
   if (!FUNC_0(VAR_1->utmi_clk[VAR_3])) {
    VAR_4 = FUNC_1(VAR_1->utmi_clk[VAR_3]);
    if (VAR_4) {
     FUNC_3(VAR_0,
      "Can't enable port %d clk : %d\n",
      VAR_3, VAR_4);
    }
   }
   break;
  default:
   break;
  }
 }

 return 0;
}
