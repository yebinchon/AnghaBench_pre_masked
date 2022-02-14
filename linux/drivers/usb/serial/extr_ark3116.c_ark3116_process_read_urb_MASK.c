
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port; } ;
struct urb {unsigned char* transfer_buffer; int actual_length; struct usb_serial_port* context; } ;
struct ark3116_private {int lsr; int status_lock; } ;
typedef int __u32 ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,unsigned char*,char,int ) ;
 struct ark3116_private* FUNC_5 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_10)
{
 struct usb_serial_port *VAR_11 = VAR_10->context;
 struct ark3116_private *VAR_12 = FUNC_5(VAR_11);
 unsigned char *VAR_13 = VAR_10->transfer_buffer;
 char VAR_14 = VAR_2;
 unsigned long VAR_15;
 __u32 VAR_16;


 FUNC_0(&VAR_12->status_lock, VAR_15);
 VAR_16 = VAR_12->lsr;
 VAR_12->lsr &= ~VAR_6;
 FUNC_1(&VAR_12->status_lock, VAR_15);

 if (!VAR_10->actual_length)
  return;

 if (VAR_16 & VAR_6) {
  if (VAR_16 & VAR_5)
   VAR_14 = VAR_0;
  else if (VAR_16 & VAR_9)
   VAR_14 = VAR_4;
  else if (VAR_16 & VAR_7)
   VAR_14 = VAR_1;


  if (VAR_16 & VAR_8)
   FUNC_3(&VAR_11->port, 0, VAR_3);
 }
 FUNC_4(&VAR_11->port, VAR_13, VAR_14,
       VAR_10->actual_length);
 FUNC_2(&VAR_11->port);
}
