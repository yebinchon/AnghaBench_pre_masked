
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_8dev_priv {int dummy; } ;
struct usb_8dev_cmd_msg {scalar_t__ data; int opt2; int opt1; int command; int channel; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_8dev_priv*,struct usb_8dev_cmd_msg*,struct usb_8dev_cmd_msg*) ;

__attribute__((used)) static int FUNC_2(struct usb_8dev_priv *VAR_1, u32 *VAR_2)
{
 struct usb_8dev_cmd_msg VAR_3;
 struct usb_8dev_cmd_msg VAR_4 = {
  .channel = 0,
  .command = VAR_0,
  .opt1 = 0,
  .opt2 = 0
 };

 int VAR_5 = FUNC_1(VAR_1, &VAR_4, &VAR_3);
 if (VAR_5)
  return VAR_5;

 *VAR_2 = FUNC_0((__be32 *)VAR_3.data);

 return VAR_5;
}
