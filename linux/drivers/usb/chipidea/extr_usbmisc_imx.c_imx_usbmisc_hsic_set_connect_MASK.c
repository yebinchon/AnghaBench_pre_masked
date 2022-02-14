
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_usbmisc_data {int hsic; int dev; } ;
struct imx_usbmisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* hsic_set_connect ) (struct imx_usbmisc_data*) ;} ;


 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (struct imx_usbmisc_data*) ;

int FUNC_2(struct imx_usbmisc_data *VAR_0)
{
 struct imx_usbmisc *VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_0(VAR_0->dev);
 if (!VAR_1->ops->hsic_set_connect || !VAR_0->hsic)
  return 0;
 return VAR_1->ops->hsic_set_connect(VAR_0);
}
