
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct opticon_private {int cts; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct opticon_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_0,
     const unsigned char *VAR_1, size_t VAR_2)
{
 struct opticon_private *VAR_3 = FUNC_2(VAR_0);
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);
 if (VAR_1[0] == 0x00)
  VAR_3->cts = 0;
 else
  VAR_3->cts = 1;
 FUNC_1(&VAR_3->lock, VAR_4);
}
