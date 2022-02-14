
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct moschip_port {struct usb_serial_port* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct moschip_port* FUNC_0 (int,int ) ;
 int FUNC_1 (struct usb_serial_port*,struct moschip_port*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial_port *VAR_2)
{
 struct moschip_port *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->port = VAR_2;

 FUNC_1(VAR_2, VAR_3);

 return 0;
}
