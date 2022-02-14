
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct redrat3_dev {struct device* dev; struct usb_device* udev; } ;
struct rc_dev {struct redrat3_dev* priv; } ;
struct device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct rc_dev *VAR_9, unsigned int VAR_10)
{
 struct redrat3_dev *VAR_11 = VAR_9->priv;
 struct usb_device *VAR_12 = VAR_11->udev;
 struct device *VAR_13 = VAR_11->dev;
 __be32 *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 *VAR_14 = FUNC_1(FUNC_5(VAR_10 / 1000));
 VAR_15 = FUNC_6(VAR_12, FUNC_7(VAR_12, 0), VAR_5,
       VAR_8 | VAR_7 | VAR_6,
       VAR_4, 0, VAR_14, sizeof(*VAR_14),
       VAR_3 * 25);
 FUNC_2(VAR_13, "set ir parm timeout %d ret 0x%02x\n",
      FUNC_0(*VAR_14), VAR_15);

 if (VAR_15 == sizeof(*VAR_14))
  VAR_15 = 0;
 else if (VAR_15 >= 0)
  VAR_15 = -VAR_0;

 FUNC_3(VAR_14);

 return VAR_15;
}
