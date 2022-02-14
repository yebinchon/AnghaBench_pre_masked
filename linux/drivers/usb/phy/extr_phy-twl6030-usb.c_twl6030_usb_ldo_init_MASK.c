
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_usb {int usb3v3; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct twl6030_usb*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct twl6030_usb *VAR_8)
{

 FUNC_2(VAR_8, VAR_4, 0x1, VAR_1);


 FUNC_2(VAR_8, VAR_4, 0x1, VAR_2);


 FUNC_2(VAR_8, VAR_4, 0x10, VAR_3);

 VAR_8->usb3v3 = FUNC_1(VAR_8->dev, "usb");
 if (FUNC_0(VAR_8->usb3v3))
  return -VAR_0;


 FUNC_2(VAR_8, VAR_5, 0x4, VAR_7);





 FUNC_2(VAR_8, VAR_5, 0x14, VAR_6);

 return 0;
}
