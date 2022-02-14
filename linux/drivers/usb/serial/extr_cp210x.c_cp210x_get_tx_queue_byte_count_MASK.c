
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;
struct cp210x_port_private {int bInterfaceNumber; } ;
struct cp210x_comm_status {int ulAmountInOutQueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct cp210x_comm_status*) ;
 struct cp210x_comm_status* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,struct cp210x_comm_status*,int,int ) ;
 struct cp210x_port_private* FUNC_5 (struct usb_serial_port*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_serial_port *VAR_6,
  u32 *VAR_7)
{
 struct usb_serial *VAR_8 = VAR_6->serial;
 struct cp210x_port_private *VAR_9 = FUNC_5(VAR_6);
 struct cp210x_comm_status *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_4(VAR_8->dev, FUNC_6(VAR_8->dev, 0),
   VAR_0, VAR_4,
   0, VAR_9->bInterfaceNumber, VAR_10, sizeof(*VAR_10),
   VAR_5);
 if (VAR_11 == sizeof(*VAR_10)) {
  *VAR_7 = FUNC_3(VAR_10->ulAmountInOutQueue);
  VAR_11 = 0;
 } else {
  FUNC_0(&VAR_6->dev, "failed to get comm status: %d\n", VAR_11);
  if (VAR_11 >= 0)
   VAR_11 = -VAR_1;
 }

 FUNC_1(VAR_10);

 return VAR_11;
}
