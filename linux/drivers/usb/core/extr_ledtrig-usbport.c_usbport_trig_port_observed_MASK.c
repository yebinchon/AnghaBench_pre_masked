
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbport_trig_data {TYPE_1__* led_cdev; } ;
struct usb_device {int dummy; } ;
struct of_phandle_args {struct device_node* np; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,char*,struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,char*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 struct device_node* FUNC_5 (struct usb_device*,int) ;

__attribute__((used)) static bool FUNC_6(struct usbport_trig_data *VAR_0,
           struct usb_device *VAR_1, int VAR_2)
{
 struct device *VAR_3 = VAR_0->led_cdev->dev;
 struct device_node *VAR_4 = VAR_3->of_node;
 struct of_phandle_args VAR_5;
 struct device_node *VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_4)
  return 0;






 VAR_6 = FUNC_5(VAR_1, VAR_2);
 if (!VAR_6)
  return 0;

 FUNC_3(VAR_6);


 VAR_7 = FUNC_2(VAR_4, "trigger-sources",
        "#trigger-source-cells");
 if (VAR_7 < 0) {
  FUNC_1(VAR_3, "Failed to get trigger sources for %pOF\n",
    VAR_4);
  return 0;
 }


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  int VAR_9;

  VAR_9 = FUNC_4(VAR_4, "trigger-sources",
       "#trigger-source-cells", VAR_8,
       &VAR_5);
  if (VAR_9) {
   FUNC_0(VAR_3, "Failed to get trigger source phandle at index %d: %d\n",
    VAR_8, VAR_9);
   continue;
  }

  FUNC_3(VAR_5.np);

  if (VAR_5.np == VAR_6)
   return 1;
 }

 return 0;
}
