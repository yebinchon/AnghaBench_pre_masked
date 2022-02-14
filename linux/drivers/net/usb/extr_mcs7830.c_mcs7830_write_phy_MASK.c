
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usbnet {int phy_mutex; TYPE_1__* udev; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int ,int) ;
 int FUNC_2 (struct usbnet*,int ,int,int*) ;
 int FUNC_3 (struct usbnet*,int ,int,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct usbnet *VAR_7, u8 VAR_8, u16 VAR_9)
{
 int VAR_10;
 int VAR_11;
 __le16 VAR_12;

 u8 VAR_13[2] = {
  VAR_3 | VAR_2,
  VAR_4 | (VAR_8 & 0x1F),
 };

 FUNC_5(&VAR_7->phy_mutex);


 VAR_12 = FUNC_0(VAR_9);
 VAR_10 = FUNC_3(VAR_7, VAR_6, 2, &VAR_12);
 if (VAR_10 < 0)
  goto out;


 VAR_10 = FUNC_3(VAR_7, VAR_1, 2, VAR_13);
 if (VAR_10 < 0)
  goto out;


 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  VAR_10 = FUNC_2(VAR_7, VAR_1, 2, VAR_13);
  if ((VAR_10 < 0) || (VAR_13[1] & VAR_5))
   break;
  VAR_10 = -VAR_0;
  FUNC_4(1);
 }
 if (VAR_10 < 0)
  goto out;

 VAR_10 = 0;
 FUNC_1(&VAR_7->udev->dev, "write PHY reg %02x: %04x (%d tries)\n",
  VAR_8, VAR_9, VAR_11);
out:
 FUNC_6(&VAR_7->phy_mutex);
 return VAR_10;
}
