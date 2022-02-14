
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int drain_delay; } ;
struct usb_serial_port {TYPE_1__ port; } ;
struct f81232_private {struct usb_serial_port* port; int lsr_work; int interrupt_work; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct f81232_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_serial_port*,struct f81232_private*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_4)
{
 struct f81232_private *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->lock);
 FUNC_0(&VAR_5->interrupt_work, VAR_2);
 FUNC_0(&VAR_5->lsr_work, VAR_3);

 FUNC_3(VAR_4, VAR_5);

 VAR_4->port.drain_delay = 256;
 VAR_5->port = VAR_4;

 return 0;
}
