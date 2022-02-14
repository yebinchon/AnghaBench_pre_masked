
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub_status {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,struct usb_hub_status*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_7,
  struct usb_hub_status *VAR_8)
{
 int VAR_9, VAR_10 = -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_5 &&
   (VAR_10 == -VAR_1 || VAR_10 == -VAR_0); VAR_9++) {
  VAR_10 = FUNC_0(VAR_7, FUNC_1(VAR_7, 0),
   VAR_3, VAR_2 | VAR_4, 0, 0,
   VAR_8, sizeof(*VAR_8), VAR_6);
 }
 return VAR_10;
}
