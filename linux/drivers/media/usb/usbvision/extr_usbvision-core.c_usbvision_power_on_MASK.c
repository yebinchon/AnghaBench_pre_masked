
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_usbvision {size_t dev_model; int power; } ;
struct TYPE_2__ {scalar_t__ codec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_12 ;
 int FUNC_2 (struct usb_usbvision*,int ,int) ;

int FUNC_3(struct usb_usbvision *VAR_13)
{
 int VAR_14 = 0;

 FUNC_0(VAR_1, "");

 FUNC_2(VAR_13, VAR_6, VAR_9);
 FUNC_2(VAR_13, VAR_6,
   VAR_9 | VAR_8);

 if (VAR_12[VAR_13->dev_model].codec == VAR_0) {
  FUNC_2(VAR_13, VAR_10,
    VAR_2 | VAR_3);
  FUNC_2(VAR_13, VAR_11,
    VAR_5 | VAR_4);
 }
 FUNC_2(VAR_13, VAR_6,
   VAR_9 | VAR_7);
 FUNC_1(10);
 VAR_14 = FUNC_2(VAR_13, VAR_6,
   VAR_9 | VAR_7 | VAR_8);
 if (VAR_14 == 1)
  VAR_13->power = 1;
 FUNC_0(VAR_1, "%s: err_code %d", (VAR_14 < 0) ? "ERROR" : "power is on", VAR_14);
 return VAR_14;
}
