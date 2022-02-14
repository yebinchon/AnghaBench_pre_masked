
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb3503 {int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb3503* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct platform_device*,struct usb3503*) ;
 int FUNC_2 (struct usb3503*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct usb3503 *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev, sizeof(struct usb3503), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_3->dev = &VAR_2->dev;
 FUNC_1(VAR_2, VAR_3);

 return FUNC_2(VAR_3);
}
