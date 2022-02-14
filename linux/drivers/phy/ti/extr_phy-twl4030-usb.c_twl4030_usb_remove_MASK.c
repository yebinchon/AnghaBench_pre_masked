
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_usb {int dev; int linkstat; int id_workaround_work; int phy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 struct twl4030_usb* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct twl4030_usb*,int ,int ) ;
 int FUNC_11 (struct twl4030_usb*,int ) ;
 int FUNC_12 (struct twl4030_usb*,int) ;
 int FUNC_13 (struct twl4030_usb*,int ,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct twl4030_usb *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;

 FUNC_14(&VAR_8->phy);
 FUNC_6(VAR_8->dev);
 FUNC_1(&VAR_8->id_workaround_work);
 FUNC_2(VAR_8->dev, &VAR_6);


 FUNC_12(VAR_8, -1);


 if (FUNC_0(VAR_8->linkstat))
  FUNC_8(VAR_8->dev);
 FUNC_7(VAR_8->dev);
 FUNC_5(&VAR_7->dev);
 FUNC_9(VAR_8->dev);
 FUNC_4(VAR_8->dev);





 VAR_9 = FUNC_11(VAR_8, VAR_0);
 if (VAR_9 >= 0) {
  VAR_9 |= VAR_2;
  VAR_9 &= ~(VAR_1 | VAR_5);
  FUNC_13(VAR_8, VAR_0, (u8)VAR_9);
 }


 FUNC_10(VAR_8, VAR_3, VAR_4);

 return 0;
}
