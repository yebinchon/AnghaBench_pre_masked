
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; int dev; } ;
struct cypress_private {int lock; scalar_t__ comm_is_ok; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct cypress_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_0)
{
 struct cypress_private *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 if (!VAR_1->comm_is_ok) {
  FUNC_2(&VAR_1->lock, VAR_2);
  return;
 }
 VAR_1->comm_is_ok = 0;
 FUNC_2(&VAR_1->lock, VAR_2);

 FUNC_0(&VAR_0->dev, "cypress_m8 suspending failing port %d - "
  "interval might be too short\n", VAR_0->port_number);
}
