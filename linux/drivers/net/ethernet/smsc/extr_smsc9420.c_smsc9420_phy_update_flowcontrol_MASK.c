
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct smsc9420_pdata {struct net_device* dev; } ;
struct phy_device {scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct smsc9420_pdata*,int ,struct net_device*,char*,...) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct smsc9420_pdata*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct smsc9420_pdata *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->dev;
 struct phy_device *VAR_9 = VAR_8->phydev;
 u32 VAR_10;

 if (VAR_9->duplex == VAR_0) {
  u16 VAR_11 = FUNC_2(VAR_9, VAR_4);
  u16 VAR_12 = FUNC_2(VAR_9, VAR_5);
  u8 VAR_13 = FUNC_0(VAR_11, VAR_12);

  if (VAR_13 & VAR_2)
   VAR_10 = 0xFFFF0002;
  else
   VAR_10 = 0;

  FUNC_1(VAR_7, VAR_6, VAR_7->dev, "rx pause %s, tx pause %s\n",
      VAR_13 & VAR_2 ? "enabled" : "disabled",
      VAR_13 & VAR_3 ? "enabled" : "disabled");
 } else {
  FUNC_1(VAR_7, VAR_6, VAR_7->dev, "half duplex\n");
  VAR_10 = 0;
 }

 FUNC_3(VAR_7, VAR_1, VAR_10);
}
