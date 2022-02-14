
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ci_hdrc_imx_data {int usbmisc_data; int pinctrl_hsic_active; int pinctrl; } ;
struct ci_hdrc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct device* parent; } ;




 int FUNC_0 (struct device*,char*,int) ;
 struct ci_hdrc_imx_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ci_hdrc *VAR_0, unsigned int VAR_1)
{
 struct device *VAR_2 = VAR_0->dev->parent;
 struct ci_hdrc_imx_data *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;

 switch (VAR_1) {
 case 129:
  VAR_4 = FUNC_3(VAR_3->pinctrl,
    VAR_3->pinctrl_hsic_active);
  if (VAR_4)
   FUNC_0(VAR_2, "hsic_active select failed, err=%d\n",
    VAR_4);
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_3->usbmisc_data);
  if (VAR_4)
   FUNC_0(VAR_2,
    "hsic_set_connect failed, err=%d\n", VAR_4);
  break;
 default:
  break;
 }

 return VAR_4;
}
