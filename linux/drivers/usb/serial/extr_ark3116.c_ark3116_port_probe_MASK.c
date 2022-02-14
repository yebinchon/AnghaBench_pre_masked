
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct ark3116_private {int quot; int lcr; scalar_t__ irda; scalar_t__ mcr; scalar_t__ hcr; int status_lock; int hw_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct usb_serial*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char*) ;
 scalar_t__ FUNC_3 (struct usb_serial*) ;
 struct ark3116_private* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_serial_port*,struct ark3116_private*) ;

__attribute__((used)) static int FUNC_8(struct usb_serial_port *VAR_10)
{
 struct usb_serial *VAR_11 = VAR_10->serial;
 struct ark3116_private *VAR_12;

 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_5(&VAR_12->hw_lock);
 FUNC_6(&VAR_12->status_lock);

 VAR_12->irda = FUNC_3(VAR_11);

 FUNC_7(VAR_10, VAR_12);


 FUNC_0(VAR_11, VAR_5, 0);

 FUNC_0(VAR_11, VAR_4, 0);

 VAR_12->hcr = 0;
 FUNC_0(VAR_11, 0x8 , 0);

 VAR_12->mcr = 0;
 FUNC_0(VAR_11, VAR_9, 0);

 if (!(VAR_12->irda)) {
  FUNC_0(VAR_11, 0xb , 0);
 } else {
  FUNC_0(VAR_11, 0xb , 1);
  FUNC_0(VAR_11, 0xc , 0);
  FUNC_0(VAR_11, 0xd , 0x41);
  FUNC_0(VAR_11, 0xa , 1);
 }


 FUNC_0(VAR_11, VAR_6, VAR_7);


 VAR_12->quot = FUNC_1(9600);
 FUNC_0(VAR_11, VAR_2, VAR_12->quot & 0xff);
 FUNC_0(VAR_11, VAR_3, (VAR_12->quot>>8) & 0xff);

 VAR_12->lcr = VAR_8;
 FUNC_0(VAR_11, VAR_6, VAR_8);

 FUNC_0(VAR_11, 0xe, 0);

 if (VAR_12->irda)
  FUNC_0(VAR_11, 0x9, 0);

 FUNC_2(&VAR_10->dev, "using %s mode\n", VAR_12->irda ? "IrDA" : "RS232");

 return 0;
}
