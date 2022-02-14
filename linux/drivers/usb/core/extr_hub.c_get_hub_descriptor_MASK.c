
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub_descriptor {int bNbrPorts; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,unsigned int,int ,struct usb_hub_descriptor*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_10,
  struct usb_hub_descriptor *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 unsigned VAR_15;

 if (FUNC_0(VAR_10)) {
  VAR_15 = VAR_6;
  VAR_14 = VAR_7;
 } else {
  VAR_15 = VAR_4;
  VAR_14 = sizeof(struct usb_hub_descriptor);
 }

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  VAR_13 = FUNC_1(VAR_10, FUNC_2(VAR_10, 0),
   VAR_8, VAR_3 | VAR_9,
   VAR_15 << 8, 0, VAR_11, VAR_14,
   VAR_2);
  if (FUNC_0(VAR_10)) {
   if (VAR_13 == VAR_14)
    return VAR_13;
  } else if (VAR_13 >= VAR_5 + 2) {

   VAR_14 = VAR_5 + VAR_11->bNbrPorts / 8 + 1;
   if (VAR_13 < VAR_14)
    return -VAR_1;
   return VAR_13;
  }
 }
 return -VAR_0;
}
