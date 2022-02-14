
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_usbmisc_data {int hsic; int dev; } ;
struct imx_usbmisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* hsic_set_clk ) (struct imx_usbmisc_data*,int) ;} ;


 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (struct imx_usbmisc_data*,int) ;

int FUNC_2(struct imx_usbmisc_data *VAR_0, bool VAR_1)
{
 struct imx_usbmisc *VAR_2;

 if (!VAR_0)
  return 0;

 VAR_2 = FUNC_0(VAR_0->dev);
 if (!VAR_2->ops->hsic_set_clk || !VAR_0->hsic)
  return 0;
 return VAR_2->ops->hsic_set_clk(VAR_0, VAR_1);
}
