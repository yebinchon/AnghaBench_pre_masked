
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_usbmisc_data {int dev; } ;
struct imx_usbmisc {int * ops; } ;


 struct imx_usbmisc* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(struct imx_usbmisc_data *VAR_1)
{
 struct imx_usbmisc *VAR_2 = FUNC_0(VAR_1->dev);

 return VAR_2->ops == &VAR_0;
}
