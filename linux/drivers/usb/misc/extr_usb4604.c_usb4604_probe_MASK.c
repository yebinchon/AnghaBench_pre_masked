
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb4604 {int mode; struct gpio_desc* gpio_reset; struct device* dev; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_1 ;
 struct gpio_desc* FUNC_2 (struct device*,char*,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct usb4604*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb4604 *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct device_node *VAR_4 = VAR_3->of_node;
 struct gpio_desc *VAR_5;
 u32 VAR_6 = VAR_1;

 VAR_5 = FUNC_2(VAR_3, "reset", VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_2->gpio_reset = VAR_5;

 if (FUNC_3(VAR_4, "initial-mode", &VAR_2->mode))
  VAR_2->mode = VAR_6;

 return FUNC_4(VAR_2, VAR_2->mode);
}
