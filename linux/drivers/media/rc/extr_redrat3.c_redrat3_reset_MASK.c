
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct redrat3_dev {struct device* dev; struct usb_device* udev; } ;
struct device {int dummy; } ;


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
 int VAR_13 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (size_t const,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct usb_device*,int,int ,int,int ,int ,int*,size_t const,int) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct redrat3_dev *VAR_17)
{
 struct usb_device *VAR_18 = VAR_17->udev;
 struct device *VAR_19 = VAR_17->dev;
 int VAR_20, VAR_21, VAR_22;
 u8 *VAR_23;
 size_t const VAR_24 = sizeof(*VAR_23);

 VAR_21 = FUNC_4(VAR_18, 0);
 VAR_22 = FUNC_5(VAR_18, 0);

 VAR_23 = FUNC_2(VAR_24, VAR_0);
 if (!VAR_23)
  return;

 *VAR_23 = 0x01;
 VAR_20 = FUNC_3(VAR_18, VAR_21, VAR_8,
        VAR_13 | VAR_12 | VAR_10,
        VAR_2, 0, VAR_23, VAR_24, VAR_1 * 25);
 FUNC_0(VAR_19, "reset returned 0x%02x\n", VAR_20);

 *VAR_23 = VAR_14;
 VAR_20 = FUNC_3(VAR_18, VAR_22, VAR_9,
        VAR_13 | VAR_12 | VAR_11,
        VAR_4, 0, VAR_23, VAR_24, VAR_1 * 25);
 FUNC_0(VAR_19, "set ir parm len fuzz %d rc 0x%02x\n", *VAR_23, VAR_20);

 *VAR_23 = (65536 - (VAR_15 * 2000)) / 256;
 VAR_20 = FUNC_3(VAR_18, VAR_22, VAR_9,
        VAR_13 | VAR_12 | VAR_11,
        VAR_6, 0, VAR_23, VAR_24, VAR_1 * 25);
 FUNC_0(VAR_19, "set ir parm min pause %d rc 0x%02x\n", *VAR_23, VAR_20);

 *VAR_23 = VAR_16;
 VAR_20 = FUNC_3(VAR_18, VAR_22, VAR_9,
        VAR_13 | VAR_12 | VAR_11,
        VAR_7, 0, VAR_23, VAR_24, VAR_1 * 25);
 FUNC_0(VAR_19, "set ir parm periods measure carrier %d rc 0x%02x", *VAR_23,
         VAR_20);

 *VAR_23 = VAR_3;
 VAR_20 = FUNC_3(VAR_18, VAR_22, VAR_9,
        VAR_13 | VAR_12 | VAR_11,
        VAR_5, 0, VAR_23, VAR_24, VAR_1 * 25);
 FUNC_0(VAR_19, "set ir parm max lens %d rc 0x%02x\n", *VAR_23, VAR_20);

 FUNC_1(VAR_23);
}
