
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int serial; } ;
struct keyspan_pda_private {struct usb_serial_port* port; int serial; int unthrottle_work; int wakeup_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct keyspan_pda_private* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_serial_port*,struct keyspan_pda_private*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_4)
{

 struct keyspan_pda_private *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct keyspan_pda_private), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_5->wakeup_work, VAR_3);
 FUNC_0(&VAR_5->unthrottle_work, VAR_2);
 VAR_5->serial = VAR_4->serial;
 VAR_5->port = VAR_4;

 FUNC_2(VAR_4, VAR_5);

 return 0;
}
