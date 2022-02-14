
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_local {int last_link; int indirect_lock; } ;
struct phy_device {int speed; int duplex; int link; } ;
struct net_device {struct phy_device* phydev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct temac_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct temac_local*,int ) ;
 int FUNC_5 (struct temac_local*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5)
{
 struct temac_local *VAR_6 = FUNC_0(VAR_5);
 struct phy_device *VAR_7 = VAR_5->phydev;
 u32 VAR_8;
 int VAR_9;
 unsigned long VAR_10;


 VAR_9 = VAR_7->speed | (VAR_7->duplex << 1) | VAR_7->link;

 if (VAR_6->last_link != VAR_9) {
  FUNC_2(VAR_6->indirect_lock, VAR_10);
  VAR_8 = FUNC_4(VAR_6, VAR_4);
  VAR_8 &= ~VAR_3;

  switch (VAR_7->speed) {
  case 128: VAR_8 |= VAR_2; break;
  case 129: VAR_8 |= VAR_1; break;
  case 130: VAR_8 |= VAR_0; break;
  }


  FUNC_5(VAR_6, VAR_4, VAR_8);
  FUNC_3(VAR_6->indirect_lock, VAR_10);

  VAR_6->last_link = VAR_9;
  FUNC_1(VAR_7);
 }
}
