
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;
struct cp210x_port_private {int bInterfaceNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ,int,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,void*,int,int ) ;
 struct cp210x_port_private* FUNC_6 (struct usb_serial_port*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_serial_port *VAR_5, u8 VAR_6,
  void *VAR_7, int VAR_8)
{
 struct usb_serial *VAR_9 = VAR_5->serial;
 struct cp210x_port_private *VAR_10 = FUNC_6(VAR_5);
 void *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_8, VAR_2);
 if (!VAR_11) {




  FUNC_4(VAR_7, 0, VAR_8);
  return -VAR_1;
 }

 VAR_12 = FUNC_5(VAR_9->dev, FUNC_7(VAR_9->dev, 0),
   VAR_6, VAR_3, 0,
   VAR_10->bInterfaceNumber, VAR_11, VAR_8,
   VAR_4);
 if (VAR_12 == VAR_8) {
  FUNC_3(VAR_7, VAR_11, VAR_8);
  VAR_12 = 0;
 } else {
  FUNC_0(&VAR_5->dev, "failed get req 0x%x size %d status: %d\n",
    VAR_6, VAR_8, VAR_12);
  if (VAR_12 >= 0)
   VAR_12 = -VAR_0;





  FUNC_4(VAR_7, 0, VAR_8);
 }

 FUNC_1(VAR_11);

 return VAR_12;
}
