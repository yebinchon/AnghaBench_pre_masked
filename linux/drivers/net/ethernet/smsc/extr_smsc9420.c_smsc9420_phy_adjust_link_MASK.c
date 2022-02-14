
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc9420_pdata {scalar_t__ last_duplex; int last_carrier; int dev; } ;
struct phy_device {scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct smsc9420_pdata*,int ,int ,char*) ;
 int FUNC_3 (struct smsc9420_pdata*) ;
 int FUNC_4 (struct smsc9420_pdata*,int ) ;
 int FUNC_5 (struct smsc9420_pdata*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct smsc9420_pdata *VAR_4 = FUNC_0(VAR_3);
 struct phy_device *VAR_5 = VAR_3->phydev;
 int VAR_6;

 if (VAR_5->duplex != VAR_4->last_duplex) {
  u32 VAR_7 = FUNC_4(VAR_4, VAR_0);
  if (VAR_5->duplex) {
   FUNC_2(VAR_4, VAR_2, VAR_4->dev, "full duplex mode\n");
   VAR_7 |= VAR_1;
  } else {
   FUNC_2(VAR_4, VAR_2, VAR_4->dev, "half duplex mode\n");
   VAR_7 &= ~VAR_1;
  }
  FUNC_5(VAR_4, VAR_0, VAR_7);

  FUNC_3(VAR_4);
  VAR_4->last_duplex = VAR_5->duplex;
 }

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 != VAR_4->last_carrier) {
  if (VAR_6)
   FUNC_2(VAR_4, VAR_2, VAR_4->dev, "carrier OK\n");
  else
   FUNC_2(VAR_4, VAR_2, VAR_4->dev, "no carrier\n");
  VAR_4->last_carrier = VAR_6;
 }
}
