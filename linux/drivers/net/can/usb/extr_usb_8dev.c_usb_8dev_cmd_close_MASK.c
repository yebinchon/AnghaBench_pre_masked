
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_8dev_priv {int dummy; } ;
struct usb_8dev_cmd_msg {int opt2; int opt1; int command; int channel; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_8dev_priv*,struct usb_8dev_cmd_msg*,struct usb_8dev_cmd_msg*) ;

__attribute__((used)) static int FUNC_1(struct usb_8dev_priv *VAR_1)
{
 struct usb_8dev_cmd_msg VAR_2;
 struct usb_8dev_cmd_msg VAR_3 = {
  .channel = 0,
  .command = VAR_0,
  .opt1 = 0,
  .opt2 = 0
 };

 return FUNC_0(VAR_1, &VAR_3, &VAR_2);
}
