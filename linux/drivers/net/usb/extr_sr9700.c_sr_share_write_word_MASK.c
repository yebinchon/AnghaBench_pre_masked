
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int phy_mutex; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usbnet*,int ,int,int *) ;
 int FUNC_3 (struct usbnet*,int ,int) ;
 int FUNC_4 (struct usbnet*,int) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_7, int VAR_8, u8 VAR_9,
          __le16 VAR_10)
{
 int VAR_11;

 FUNC_0(&VAR_7->phy_mutex);

 VAR_11 = FUNC_2(VAR_7, VAR_6, 2, &VAR_10);
 if (VAR_11 < 0)
  goto out_unlock;

 FUNC_3(VAR_7, VAR_4, VAR_8 ? (VAR_9 | VAR_0) : VAR_9);
 FUNC_3(VAR_7, VAR_5, VAR_8 ? (VAR_3 | VAR_1 | VAR_2) :
      (VAR_3 | VAR_2));

 VAR_11 = FUNC_4(VAR_7, VAR_8);
 if (VAR_11 < 0)
  goto out_unlock;

 FUNC_3(VAR_7, VAR_5, 0x0);

out_unlock:
 FUNC_1(&VAR_7->phy_mutex);
 return VAR_11;
}
