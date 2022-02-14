
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dwc3 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct platform_device*,int ) ;
 int FUNC_1 (struct platform_device*,char*) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dwc3 *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_2(VAR_2->dev);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, "host");
 if (VAR_4 > 0)
  goto out;

 if (VAR_4 == -VAR_1)
  goto out;

 VAR_4 = FUNC_1(VAR_3, "dwc_usb3");
 if (VAR_4 > 0)
  goto out;

 if (VAR_4 == -VAR_1)
  goto out;

 VAR_4 = FUNC_0(VAR_3, 0);
 if (VAR_4 > 0)
  goto out;

 if (!VAR_4)
  VAR_4 = -VAR_0;

out:
 return VAR_4;
}
