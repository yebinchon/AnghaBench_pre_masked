
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int * usb3_generic_phy; int * usb2_generic_phy; int * usb3_phy; int * usb2_phy; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,int ) ;
 void* FUNC_5 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct dwc3 *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 int VAR_9;

 if (VAR_8) {
  VAR_6->usb2_phy = FUNC_5(VAR_7, "usb-phy", 0);
  VAR_6->usb3_phy = FUNC_5(VAR_7, "usb-phy", 1);
 } else {
  VAR_6->usb2_phy = FUNC_4(VAR_7, VAR_4);
  VAR_6->usb3_phy = FUNC_4(VAR_7, VAR_5);
 }

 if (FUNC_0(VAR_6->usb2_phy)) {
  VAR_9 = FUNC_1(VAR_6->usb2_phy);
  if (VAR_9 == -VAR_2 || VAR_9 == -VAR_0) {
   VAR_6->usb2_phy = ((void*)0);
  } else if (VAR_9 == -VAR_3) {
   return VAR_9;
  } else {
   FUNC_2(VAR_7, "no usb2 phy configured\n");
   return VAR_9;
  }
 }

 if (FUNC_0(VAR_6->usb3_phy)) {
  VAR_9 = FUNC_1(VAR_6->usb3_phy);
  if (VAR_9 == -VAR_2 || VAR_9 == -VAR_0) {
   VAR_6->usb3_phy = ((void*)0);
  } else if (VAR_9 == -VAR_3) {
   return VAR_9;
  } else {
   FUNC_2(VAR_7, "no usb3 phy configured\n");
   return VAR_9;
  }
 }

 VAR_6->usb2_generic_phy = FUNC_3(VAR_7, "usb2-phy");
 if (FUNC_0(VAR_6->usb2_generic_phy)) {
  VAR_9 = FUNC_1(VAR_6->usb2_generic_phy);
  if (VAR_9 == -VAR_1 || VAR_9 == -VAR_0) {
   VAR_6->usb2_generic_phy = ((void*)0);
  } else if (VAR_9 == -VAR_3) {
   return VAR_9;
  } else {
   FUNC_2(VAR_7, "no usb2 phy configured\n");
   return VAR_9;
  }
 }

 VAR_6->usb3_generic_phy = FUNC_3(VAR_7, "usb3-phy");
 if (FUNC_0(VAR_6->usb3_generic_phy)) {
  VAR_9 = FUNC_1(VAR_6->usb3_generic_phy);
  if (VAR_9 == -VAR_1 || VAR_9 == -VAR_0) {
   VAR_6->usb3_generic_phy = ((void*)0);
  } else if (VAR_9 == -VAR_3) {
   return VAR_9;
  } else {
   FUNC_2(VAR_7, "no usb3 phy configured\n");
   return VAR_9;
  }
 }

 return 0;
}
