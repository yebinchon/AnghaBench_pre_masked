
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int drain_delay; } ;
struct usb_serial_port {TYPE_1__ port; } ;
struct oti6858_private {int delayed_write_work; int delayed_setup_work; struct usb_serial_port* port; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct oti6858_private* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_serial_port*,struct oti6858_private*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_4)
{
 struct oti6858_private *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->lock);
 VAR_5->port = VAR_4;
 FUNC_0(&VAR_5->delayed_setup_work, VAR_3);
 FUNC_0(&VAR_5->delayed_write_work, VAR_2);

 FUNC_3(VAR_4, VAR_5);

 VAR_4->port.drain_delay = 256;

 return 0;
}
