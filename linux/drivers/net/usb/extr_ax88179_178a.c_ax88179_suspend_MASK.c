
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;
struct usb_interface {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int,int*) ;
 struct usbnet* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_9, pm_message_t VAR_10)
{
 struct usbnet *VAR_11 = FUNC_2(VAR_9);
 u16 VAR_12;
 u8 VAR_13;

 FUNC_3(VAR_9, VAR_10);


 FUNC_0(VAR_11, VAR_0, VAR_3,
         2, 2, &VAR_12);
 VAR_12 &= ~VAR_2;
 FUNC_1(VAR_11, VAR_0, VAR_3,
          2, 2, &VAR_12);


 FUNC_0(VAR_11, VAR_0, VAR_4,
         2, 2, &VAR_12);

 VAR_12 |= VAR_5 | VAR_6;
 FUNC_1(VAR_11, VAR_0, VAR_4,
          2, 2, &VAR_12);


 VAR_13 = 0;
 FUNC_1(VAR_11, VAR_0, VAR_1, 1, 1, &VAR_13);


 VAR_12 = VAR_8;
 FUNC_1(VAR_11, VAR_0, VAR_7, 2, 2, &VAR_12);

 return 0;
}
