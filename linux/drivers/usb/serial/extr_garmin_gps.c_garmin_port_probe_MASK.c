
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct garmin_data {int write_urbs; scalar_t__ count; scalar_t__ flags; scalar_t__ state; struct usb_serial_port* port; int pktlist; int lock; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct garmin_data*) ;
 struct garmin_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct usb_serial_port*,struct garmin_data*) ;

__attribute__((used)) static int FUNC_8(struct usb_serial_port *VAR_3)
{
 int VAR_4;
 struct garmin_data *VAR_5;

 VAR_5 = FUNC_4(sizeof(struct garmin_data), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_6(&VAR_5->timer, VAR_2, 0);
 FUNC_5(&VAR_5->lock);
 FUNC_0(&VAR_5->pktlist);
 VAR_5->port = VAR_3;
 VAR_5->state = 0;
 VAR_5->flags = 0;
 VAR_5->count = 0;
 FUNC_2(&VAR_5->write_urbs);
 FUNC_7(VAR_3, VAR_5);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto err_free;

 return 0;
err_free:
 FUNC_3(VAR_5);

 return VAR_4;
}
