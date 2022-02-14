
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_if_info {int phy_id; } ;
struct usbnet {int net; struct mii_if_info mii; scalar_t__* data; } ;
struct smsc95xx_priv {int features; int suspend_flags; } ;


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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct usbnet*,int ,int*) ;
 int FUNC_3 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_13)
{
 struct smsc95xx_priv *VAR_14 = (struct smsc95xx_priv *)(VAR_13->data[0]);
 struct mii_if_info *VAR_15 = &VAR_13->mii;
 u32 VAR_16;
 int VAR_17;




 if (VAR_14->features & VAR_0)
  FUNC_1(VAR_13->net, VAR_15->phy_id, VAR_2,
   VAR_3);


 VAR_17 = FUNC_0(VAR_13->net, VAR_15->phy_id, VAR_4);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 |= VAR_1;

 FUNC_1(VAR_13->net, VAR_15->phy_id, VAR_4, VAR_17);


 VAR_17 = FUNC_2(VAR_13, VAR_11, &VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_16 &= ~(VAR_7 | VAR_9 | VAR_6);
 VAR_16 |= VAR_8;

 VAR_17 = FUNC_3(VAR_13, VAR_11, VAR_16);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_16 &= ~VAR_9;
 VAR_16 |= (VAR_10 | VAR_5);

 VAR_17 = FUNC_3(VAR_13, VAR_11, VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_14->suspend_flags |= VAR_12;

 return 0;
}
