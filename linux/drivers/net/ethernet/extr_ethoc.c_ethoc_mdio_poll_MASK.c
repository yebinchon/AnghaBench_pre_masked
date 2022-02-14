
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ link; scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct ethoc {scalar_t__ old_link; scalar_t__ old_duplex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ethoc*,int ) ;
 int FUNC_1 (struct ethoc*,int ,int ) ;
 struct ethoc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct ethoc *VAR_4 = FUNC_2(VAR_3);
 struct phy_device *VAR_5 = VAR_3->phydev;
 bool VAR_6 = 0;
 u32 VAR_7;

 if (VAR_4->old_link != VAR_5->link) {
  VAR_6 = 1;
  VAR_4->old_link = VAR_5->link;
 }

 if (VAR_4->old_duplex != VAR_5->duplex) {
  VAR_6 = 1;
  VAR_4->old_duplex = VAR_5->duplex;
 }

 if (!VAR_6)
  return;

 VAR_7 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5->duplex == VAR_0)
  VAR_7 |= VAR_2;
 else
  VAR_7 &= ~VAR_2;
 FUNC_1(VAR_4, VAR_1, VAR_7);

 FUNC_3(VAR_5);
}
