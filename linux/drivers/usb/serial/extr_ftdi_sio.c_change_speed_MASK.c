
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usb_serial_port {TYPE_1__* serial; } ;
struct tty_struct {int dummy; } ;
struct ftdi_private {scalar_t__ chip_type; int interface; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tty_struct*,struct usb_serial_port*) ;
 int FUNC_1 (int ,int ,int ,int ,int,int,int *,int ,int ) ;
 struct ftdi_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_7, struct usb_serial_port *VAR_8)
{
 struct ftdi_private *VAR_9 = FUNC_2(VAR_8);
 u16 VAR_10;
 u16 VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(VAR_7, VAR_8);
 VAR_10 = (u16)VAR_12;
 VAR_11 = (u16)(VAR_12 >> 16);
 if ((VAR_9->chip_type == VAR_0) || (VAR_9->chip_type == VAR_1) ||
  (VAR_9->chip_type == VAR_3) || (VAR_9->chip_type == VAR_2)) {


  VAR_11 = (u16)((VAR_11 << 8) | VAR_9->interface);
 }

 VAR_13 = FUNC_1(VAR_8->serial->dev,
       FUNC_3(VAR_8->serial->dev, 0),
       VAR_4,
       VAR_5,
       VAR_10, VAR_11,
       ((void*)0), 0, VAR_6);
 return VAR_13;
}
