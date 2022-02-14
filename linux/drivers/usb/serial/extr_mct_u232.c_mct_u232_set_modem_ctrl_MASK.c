
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dev; TYPE_1__* serial; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned char) ;
 int FUNC_1 (int *,char*,unsigned char,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,unsigned char*,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_serial_port *VAR_12,
       unsigned int VAR_13)
{
 int VAR_14;
 unsigned char VAR_15;
 unsigned char *VAR_16;

 VAR_16 = FUNC_3(VAR_2, VAR_1);
 if (VAR_16 == ((void*)0))
  return -VAR_0;

 VAR_15 = VAR_4;
 if (VAR_13 & VAR_9)
  VAR_15 |= VAR_3;
 if (VAR_13 & VAR_10)
  VAR_15 |= VAR_5;

 VAR_16[0] = VAR_15;
 VAR_14 = FUNC_4(VAR_12->serial->dev, FUNC_5(VAR_12->serial->dev, 0),
   VAR_6,
   VAR_8,
   0, 0, VAR_16, VAR_7,
   VAR_11);
 FUNC_2(VAR_16);

 FUNC_0(&VAR_12->dev, "set_modem_ctrl: state=0x%x ==> mcr=0x%x\n", VAR_13, VAR_15);

 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->dev, "Set MODEM CTRL 0x%x failed (error = %d)\n", VAR_15, VAR_14);
  return VAR_14;
 }
 return 0;
}
