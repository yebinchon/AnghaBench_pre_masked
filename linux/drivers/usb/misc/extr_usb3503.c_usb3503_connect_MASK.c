
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb3503 {int port_off_mask; int mode; int gpio_connect; scalar_t__ regmap; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__,int ,int,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (struct usb3503*,int) ;

__attribute__((used)) static int FUNC_7(struct usb3503 *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev;
 int VAR_9;

 FUNC_6(VAR_7, 1);

 if (VAR_7->regmap) {

  VAR_9 = FUNC_5(VAR_7->regmap, VAR_6,
      (VAR_5
     | VAR_4));
  if (VAR_9 < 0) {
   FUNC_0(VAR_8, "SP_ILOCK failed (%d)\n", VAR_9);
   return VAR_9;
  }


  if (VAR_7->port_off_mask) {
   VAR_9 = FUNC_4(VAR_7->regmap, VAR_2,
     VAR_7->port_off_mask,
     VAR_7->port_off_mask);
   if (VAR_9 < 0) {
    FUNC_0(VAR_8, "PDS failed (%d)\n", VAR_9);
    return VAR_9;
   }
  }


  VAR_9 = FUNC_4(VAR_7->regmap, VAR_0,
      VAR_3,
      VAR_3);
  if (VAR_9 < 0) {
   FUNC_0(VAR_8, "CFG1 failed (%d)\n", VAR_9);
   return VAR_9;
  }


  VAR_9 = FUNC_4(VAR_7->regmap, VAR_6,
      (VAR_5
       | VAR_4), 0);
  if (VAR_9 < 0) {
   FUNC_0(VAR_8, "SP_ILOCK failed (%d)\n", VAR_9);
   return VAR_9;
  }
 }

 if (FUNC_2(VAR_7->gpio_connect))
  FUNC_3(VAR_7->gpio_connect, 1);

 VAR_7->mode = VAR_1;
 FUNC_1(VAR_8, "switched to HUB mode\n");

 return 0;
}
