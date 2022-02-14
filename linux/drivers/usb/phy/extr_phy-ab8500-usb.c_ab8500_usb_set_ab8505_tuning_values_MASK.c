
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_usb {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct ab8500_usb *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_6->dev,
   VAR_2, VAR_0,
   0x01, 0x01);
 if (VAR_7 < 0)
  FUNC_1(VAR_6->dev, "Failed to enable bank12 access err=%d\n",
    VAR_7);

 VAR_7 = FUNC_0(VAR_6->dev,
   VAR_1, VAR_3,
   0xC8, 0xC8);
 if (VAR_7 < 0)
  FUNC_1(VAR_6->dev, "Failed to set PHY_TUNE1 register err=%d\n",
    VAR_7);

 VAR_7 = FUNC_0(VAR_6->dev,
   VAR_1, VAR_4,
   0x60, 0x60);
 if (VAR_7 < 0)
  FUNC_1(VAR_6->dev, "Failed to set PHY_TUNE2 register err=%d\n",
    VAR_7);

 VAR_7 = FUNC_0(VAR_6->dev,
   VAR_1, VAR_5,
   0xFC, 0x80);

 if (VAR_7 < 0)
  FUNC_1(VAR_6->dev, "Failed to set PHY_TUNE3 register err=%d\n",
    VAR_7);


 VAR_7 = FUNC_0(VAR_6->dev,
   VAR_2, VAR_0,
   0x00, 0x00);
 if (VAR_7 < 0)
  FUNC_1(VAR_6->dev, "Failed to switch bank12 access err=%d\n",
    VAR_7);
}
