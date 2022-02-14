
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct opticon_private {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct opticon_private* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial_port*,struct opticon_private*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_2)
{
 struct opticon_private *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->lock);

 FUNC_2(VAR_2, VAR_3);

 return 0;
}
