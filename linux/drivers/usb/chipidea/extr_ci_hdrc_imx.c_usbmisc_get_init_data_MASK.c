
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct of_phandle_args {int np; int * args; } ;
struct imx_usbmisc_data {int disable_oc; int oc_pol_active_low; int oc_pol_configured; int ulpi; void* evdo; void* pwr_pol; int * dev; int index; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct imx_usbmisc_data* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct imx_usbmisc_data* FUNC_3 (struct device*,int,int ) ;
 struct platform_device* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device_node*,char*,char*,int ,struct of_phandle_args*) ;
 void* FUNC_9 (struct device_node*,char*) ;
 scalar_t__ FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct platform_device*) ;

__attribute__((used)) static struct imx_usbmisc_data *FUNC_12(struct device *VAR_4)
{
 struct platform_device *VAR_5;
 struct device_node *VAR_6 = VAR_4->of_node;
 struct of_phandle_args VAR_7;
 struct imx_usbmisc_data *VAR_8;
 int VAR_9;





 if (!FUNC_6(VAR_6, "fsl,usbmisc", ((void*)0)))
  return ((void*)0);

 VAR_8 = FUNC_3(VAR_4, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_8(VAR_6, "fsl,usbmisc", "#index-cells",
     0, &VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_4, "Failed to parse property fsl,usbmisc, errno %d\n",
   VAR_9);
  return FUNC_0(VAR_9);
 }

 VAR_8->index = VAR_7.args[0];

 VAR_5 = FUNC_4(VAR_7.np);
 FUNC_7(VAR_7.np);

 if (!VAR_5 || !FUNC_11(VAR_5))
  return FUNC_0(-VAR_1);

 VAR_8->dev = &VAR_5->dev;





 if (FUNC_5(VAR_6, "disable-over-current", ((void*)0))) {
  VAR_8->disable_oc = 1;
 } else if (FUNC_5(VAR_6, "over-current-active-high", ((void*)0))) {
  VAR_8->oc_pol_active_low = 0;
  VAR_8->oc_pol_configured = 1;
 } else if (FUNC_5(VAR_6, "over-current-active-low", ((void*)0))) {
  VAR_8->oc_pol_active_low = 1;
  VAR_8->oc_pol_configured = 1;
 } else {
  FUNC_2(VAR_4, "No over current polarity defined\n");
 }

 VAR_8->pwr_pol = FUNC_9(VAR_6, "power-active-high");
 VAR_8->evdo = FUNC_9(VAR_6, "external-vbus-divider");

 if (FUNC_10(VAR_6) == VAR_3)
  VAR_8->ulpi = 1;

 return VAR_8;
}
