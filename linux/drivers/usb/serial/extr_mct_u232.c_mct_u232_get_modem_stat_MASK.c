
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,unsigned char*,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_serial_port *VAR_8,
       unsigned char *VAR_9)
{
 int VAR_10;
 unsigned char *VAR_11;

 VAR_11 = FUNC_3(VAR_6, VAR_2);
 if (VAR_11 == ((void*)0)) {
  *VAR_9 = 0;
  return -VAR_1;
 }
 VAR_10 = FUNC_4(VAR_8->serial->dev, FUNC_5(VAR_8->serial->dev, 0),
   VAR_3,
   VAR_5,
   0, 0, VAR_11, VAR_4,
   VAR_7);
 if (VAR_10 < VAR_4) {
  FUNC_1(&VAR_8->dev, "Get MODEM STATus failed (error = %d)\n", VAR_10);

  if (VAR_10 >= 0)
   VAR_10 = -VAR_0;

  *VAR_9 = 0;
 } else {
  *VAR_9 = VAR_11[0];
 }
 FUNC_0(&VAR_8->dev, "get_modem_stat: 0x%x\n", *VAR_9);
 FUNC_2(VAR_11);
 return VAR_10;
}
