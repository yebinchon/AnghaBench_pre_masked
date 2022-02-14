
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_8dev_priv {int usb_8dev_cmd_lock; struct usb_8dev_cmd_msg* cmd_msg_buffer; struct net_device* netdev; } ;
struct usb_8dev_cmd_msg {scalar_t__ begin; scalar_t__ end; scalar_t__ opt1; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct usb_8dev_cmd_msg*,struct usb_8dev_cmd_msg*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct usb_8dev_priv*,struct usb_8dev_cmd_msg*,int) ;
 int FUNC_5 (struct usb_8dev_priv*,struct usb_8dev_cmd_msg*,int,int*) ;

__attribute__((used)) static int FUNC_6(struct usb_8dev_priv *VAR_3,
        struct usb_8dev_cmd_msg *VAR_4,
        struct usb_8dev_cmd_msg *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct net_device *VAR_8;

 VAR_8 = VAR_3->netdev;

 VAR_4->begin = VAR_2;
 VAR_4->end = VAR_1;

 FUNC_1(&VAR_3->usb_8dev_cmd_lock);

 FUNC_0(VAR_3->cmd_msg_buffer, VAR_4,
  sizeof(struct usb_8dev_cmd_msg));

 VAR_6 = FUNC_4(VAR_3, VAR_3->cmd_msg_buffer,
        sizeof(struct usb_8dev_cmd_msg));
 if (VAR_6 < 0) {
  FUNC_3(VAR_8, "sending command message failed\n");
  goto failed;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_3->cmd_msg_buffer,
        sizeof(struct usb_8dev_cmd_msg),
        &VAR_7);
 if (VAR_6 < 0) {
  FUNC_3(VAR_8, "no command message answer\n");
  goto failed;
 }

 FUNC_0(VAR_5, VAR_3->cmd_msg_buffer, sizeof(struct usb_8dev_cmd_msg));

 if (VAR_5->begin != VAR_2 || VAR_5->end != VAR_1 ||
   VAR_7 != 16 || VAR_5->opt1 != 0)
  VAR_6 = -VAR_0;

failed:
 FUNC_2(&VAR_3->usb_8dev_cmd_lock);
 return VAR_6;
}
