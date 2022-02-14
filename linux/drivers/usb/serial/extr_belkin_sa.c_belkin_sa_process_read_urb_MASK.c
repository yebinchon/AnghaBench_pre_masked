
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port; int dev; } ;
struct urb {unsigned char* transfer_buffer; int actual_length; struct usb_serial_port* context; } ;
struct belkin_sa_private {unsigned char last_lsr; int lock; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 char VAR_9 ;
 int FUNC_0 (int *,char*,char) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,unsigned char*,char,int ) ;
 struct belkin_sa_private* FUNC_6 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_10)
{
 struct usb_serial_port *VAR_11 = VAR_10->context;
 struct belkin_sa_private *VAR_12 = FUNC_6(VAR_11);
 unsigned char *VAR_13 = VAR_10->transfer_buffer;
 unsigned long VAR_14;
 unsigned char VAR_15;
 char VAR_16;


 VAR_16 = VAR_7;

 FUNC_1(&VAR_12->lock, VAR_14);
 VAR_15 = VAR_12->last_lsr;
 VAR_12->last_lsr &= ~VAR_1;
 FUNC_2(&VAR_12->lock, VAR_14);

 if (!VAR_10->actual_length)
  return;

 if (VAR_15 & VAR_1) {


  if (VAR_15 & VAR_0)
   VAR_16 = VAR_5;
  else if (VAR_15 & VAR_4)
   VAR_16 = VAR_9;
  else if (VAR_15 & VAR_2)
   VAR_16 = VAR_6;
  FUNC_0(&VAR_11->dev, "tty_flag = %d\n", VAR_16);


  if (VAR_15 & VAR_3)
   FUNC_4(&VAR_11->port, 0, VAR_8);
 }

 FUNC_5(&VAR_11->port, VAR_13, VAR_16,
       VAR_10->actual_length);
 FUNC_3(&VAR_11->port);
}
