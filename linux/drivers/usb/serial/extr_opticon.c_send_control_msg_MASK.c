
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int *,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_5, u8 VAR_6,
    u8 VAR_7)
{
 struct usb_serial *VAR_8 = VAR_5->serial;
 int VAR_9;
 u8 *VAR_10;

 VAR_10 = FUNC_1(1, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10[0] = VAR_7;


 VAR_9 = FUNC_2(VAR_8->dev, FUNC_3(VAR_8->dev, 0),
    VAR_6,
    VAR_2|VAR_4|VAR_3,
    0, 0, VAR_10, 1, 0);
 FUNC_0(VAR_10);

 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
