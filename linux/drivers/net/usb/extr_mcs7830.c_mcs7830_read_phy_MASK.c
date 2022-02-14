
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
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
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usbnet*,int ,int,int*) ;
 int FUNC_3 (struct usbnet*,int ,int,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct usbnet *VAR_7, u8 VAR_8)
{
 int VAR_9;
 int VAR_10;
 __le16 VAR_11;

 u8 VAR_12[2] = {
  VAR_3 | VAR_2,
  VAR_4 | VAR_8,
 };

 FUNC_5(&VAR_7->phy_mutex);

 VAR_9 = FUNC_3(VAR_7, VAR_1, 2, VAR_12);
 if (VAR_9 < 0)
  goto out;


 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  VAR_9 = FUNC_2(VAR_7, VAR_1, 2, VAR_12);
  if ((VAR_9 < 0) || (VAR_12[1] & VAR_5))
   break;
  VAR_9 = -VAR_0;
  FUNC_4(1);
 }
 if (VAR_9 < 0)
  goto out;


 VAR_9 = FUNC_2(VAR_7, VAR_6, 2, &VAR_11);
 if (VAR_9 < 0)
  goto out;
 VAR_9 = FUNC_1(VAR_11);
 FUNC_0(&VAR_7->udev->dev, "read PHY reg %02x: %04x (%d tries)\n",
  VAR_8, VAR_11, VAR_10);
out:
 FUNC_6(&VAR_7->phy_mutex);
 return VAR_9;
}
