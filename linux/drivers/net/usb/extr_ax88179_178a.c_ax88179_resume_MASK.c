
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;
struct usb_interface {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct usbnet*,int) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_2 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct usbnet* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usbnet*,int ,int ) ;
 int FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_8(struct usb_interface *VAR_13)
{
 struct usbnet *VAR_14 = FUNC_5(VAR_13);
 u16 VAR_15;
 u8 VAR_16;

 FUNC_6(VAR_14, 0, 0);


 VAR_15 = 0;
 FUNC_2(VAR_14, VAR_0, VAR_4,
          2, 2, &VAR_15);
 FUNC_4(1000);

 VAR_15 = VAR_5;
 FUNC_2(VAR_14, VAR_0, VAR_4,
          2, 2, &VAR_15);
 FUNC_3(200);


 FUNC_0(VAR_14, 1);


 FUNC_1(VAR_14, VAR_0, VAR_1, 1, 1, &VAR_16);
 VAR_16 |= VAR_2 | VAR_3;
 FUNC_2(VAR_14, VAR_0, VAR_1, 1, 1, &VAR_16);
 FUNC_3(100);


 VAR_15 = VAR_10 | VAR_11 | VAR_12 |
  VAR_9 | VAR_8 | VAR_7;
 FUNC_2(VAR_14, VAR_0, VAR_6, 2, 2, &VAR_15);

 return FUNC_7(VAR_13);
}
