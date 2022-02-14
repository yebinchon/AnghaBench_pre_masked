
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int console; } ;
struct usb_serial_port {TYPE_1__ port; int sysrq; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (struct usb_serial_port*,char) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_1,
       char *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!VAR_1->port.console || !VAR_1->sysrq) {
  FUNC_2(&VAR_1->port, VAR_2, VAR_3);
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2++) {
   if (!FUNC_3(VAR_1, *VAR_2))
    FUNC_1(&VAR_1->port, *VAR_2,
           VAR_0);
  }
 }
 FUNC_0(&VAR_1->port);
}
