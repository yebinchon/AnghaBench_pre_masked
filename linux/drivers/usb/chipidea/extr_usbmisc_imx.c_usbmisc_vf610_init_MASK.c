
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int index; scalar_t__ disable_oc; int dev; } ;
struct imx_usbmisc {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct imx_usbmisc_data *VAR_2)
{
 struct imx_usbmisc *VAR_3 = FUNC_0(VAR_2->dev);
 u32 VAR_4;





 if (VAR_2->index >= 1)
  return -VAR_0;

 if (VAR_2->disable_oc) {
  VAR_4 = FUNC_1(VAR_3->base);
  FUNC_2(VAR_4 | VAR_1, VAR_3->base);
 }

 return 0;
}
