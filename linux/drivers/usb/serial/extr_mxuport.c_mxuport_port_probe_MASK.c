
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; int dev; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct mxuport_port {int spinlock; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mxuport_port* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_serial_port*,struct mxuport_port*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_6)
{
 struct usb_serial *VAR_7 = VAR_6->serial;
 struct mxuport_port *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(&VAR_6->dev, sizeof(struct mxuport_port),
         VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_8->mutex);
 FUNC_3(&VAR_8->spinlock);


 FUNC_4(VAR_6, VAR_8);


 VAR_9 = FUNC_2(VAR_7, VAR_3,
        0, VAR_6->port_number);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_7, VAR_4,
        0, VAR_6->port_number);
 if (VAR_9)
  return VAR_9;


 return FUNC_2(VAR_7, VAR_5,
         VAR_2,
         VAR_6->port_number);
}
