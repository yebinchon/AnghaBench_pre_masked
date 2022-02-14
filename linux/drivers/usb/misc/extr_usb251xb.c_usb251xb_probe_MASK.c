
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb251xb_data {int dummy; } ;
struct usb251xb {struct device* dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 struct of_device_id* FUNC_2 (int ,struct device*) ;
 int FUNC_3 (struct usb251xb*) ;
 int FUNC_4 (struct usb251xb*) ;
 int FUNC_5 (struct usb251xb*,struct usb251xb_data*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct usb251xb *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct device_node *VAR_3 = VAR_2->of_node;
 const struct of_device_id *VAR_4 = FUNC_2(VAR_0,
          VAR_2);
 int VAR_5;

 if (VAR_3 && VAR_4) {
  VAR_5 = FUNC_5(VAR_1,
       (struct usb251xb_data *)VAR_4->data);
  if (VAR_5) {
   FUNC_0(VAR_2, "failed to get ofdata: %d\n", VAR_5);
   return VAR_5;
  }
 }
 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_2, "Failed to connect hub (%d)\n", VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_2, "Hub probed successfully\n");

 return 0;
}
