
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int phy_mutex; int net; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int,int ,int) ;
 int FUNC_3 (struct usbnet*,int ,int,int *) ;
 int FUNC_4 (struct usbnet*,int ,int) ;
 int FUNC_5 (struct usbnet*,int) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_6, int VAR_7, u8 VAR_8,
         __le16 *VAR_9)
{
 int VAR_10;

 FUNC_0(&VAR_6->phy_mutex);

 FUNC_4(VAR_6, VAR_3, VAR_7 ? (VAR_8 | VAR_0) : VAR_8);
 FUNC_4(VAR_6, VAR_4, VAR_7 ? (VAR_1 | VAR_2) : VAR_2);

 VAR_10 = FUNC_5(VAR_6, VAR_7);
 if (VAR_10 < 0)
  goto out_unlock;

 FUNC_4(VAR_6, VAR_4, 0x0);
 VAR_10 = FUNC_3(VAR_6, VAR_5, 2, VAR_9);

 FUNC_2(VAR_6->net, "read shared %d 0x%02x returned 0x%04x, %d\n",
     VAR_7, VAR_8, *VAR_9, VAR_10);

out_unlock:
 FUNC_1(&VAR_6->phy_mutex);
 return VAR_10;
}
