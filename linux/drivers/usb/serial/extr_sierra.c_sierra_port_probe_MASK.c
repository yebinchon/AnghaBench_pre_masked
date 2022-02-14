
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dev; int port_number; struct usb_serial* serial; } ;
struct usb_serial {int num_ports; } ;
struct sierra_port_private {int num_out_urbs; int num_in_urbs; int delayed; int active; int lock; } ;
struct sierra_iface_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,struct sierra_iface_info const*) ;
 struct sierra_port_private* FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_serial*) ;
 int FUNC_5 (int *) ;
 struct sierra_iface_info VAR_6 ;
 struct sierra_iface_info VAR_7 ;
 int FUNC_6 (struct usb_serial_port*,struct sierra_port_private*) ;

__attribute__((used)) static int FUNC_7(struct usb_serial_port *VAR_8)
{
 struct usb_serial *VAR_9 = VAR_8->serial;
 struct sierra_port_private *VAR_10;
 const struct sierra_iface_info *VAR_11;
 u8 VAR_12;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_5(&VAR_10->lock);
 FUNC_1(&VAR_10->active);
 FUNC_1(&VAR_10->delayed);


 VAR_10->num_out_urbs = VAR_4;
 VAR_10->num_in_urbs = VAR_2;


 if (VAR_9->num_ports == 1) {

  VAR_12 = FUNC_4(VAR_9);
  VAR_11 = &VAR_7;
 } else {



  VAR_12 = VAR_8->port_number;
  VAR_11 = &VAR_6;
 }

 if (FUNC_2(VAR_12, VAR_11)) {
  VAR_10->num_out_urbs = VAR_5;
  VAR_10->num_in_urbs = VAR_3;
 }

 FUNC_0(&VAR_8->dev,
   "Memory usage (urbs) interface #%d, in=%d, out=%d\n",
   VAR_12, VAR_10->num_in_urbs, VAR_10->num_out_urbs);

 FUNC_6(VAR_8, VAR_10);

 return 0;
}
