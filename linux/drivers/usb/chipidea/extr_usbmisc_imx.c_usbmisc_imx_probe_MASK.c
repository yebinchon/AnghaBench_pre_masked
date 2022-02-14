
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbmisc_ops {int dummy; } ;
struct platform_device {int dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct imx_usbmisc {struct usbmisc_ops const* ops; int base; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct imx_usbmisc* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct platform_device*,int ) ;
 struct of_device_id* FUNC_4 (int ,int *) ;
 int FUNC_5 (struct platform_device*,struct imx_usbmisc*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct imx_usbmisc *VAR_5;
 const struct of_device_id *VAR_6;

 VAR_6 = FUNC_4(VAR_3, &VAR_4->dev);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_6(&VAR_5->lock);

 VAR_5->base = FUNC_3(VAR_4, 0);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->ops = (const struct usbmisc_ops *)VAR_6->data;
 FUNC_5(VAR_4, VAR_5);

 return 0;
}
