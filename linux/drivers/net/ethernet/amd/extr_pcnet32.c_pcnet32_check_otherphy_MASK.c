
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_if_info {int phy_id; } ;
struct pcnet32_private {int phymask; struct mii_if_info mii_if; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int,int ) ;
 int FUNC_1 (struct net_device*,int,int ,int) ;
 scalar_t__ FUNC_2 (struct mii_if_info*) ;
 struct pcnet32_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcnet32_private*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 struct pcnet32_private *VAR_5 = FUNC_3(VAR_4);
 struct mii_if_info VAR_6 = VAR_5->mii_if;
 u16 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_8 == VAR_5->mii_if.phy_id)
   continue;
  if (VAR_5->phymask & (1 << VAR_8)) {
   VAR_6.phy_id = VAR_8;
   if (FUNC_2(&VAR_6)) {

    FUNC_4(VAR_5, VAR_3, VAR_4, "Using PHY number %d\n",
        VAR_8);


    VAR_7 =
        FUNC_0(VAR_4, VAR_5->mii_if.phy_id, VAR_1);
    FUNC_1(VAR_4, VAR_5->mii_if.phy_id, VAR_1,
        VAR_7 | VAR_0);


    VAR_7 = FUNC_0(VAR_4, VAR_8, VAR_1);
    FUNC_1(VAR_4, VAR_8, VAR_1,
        VAR_7 & ~VAR_0);


    VAR_5->mii_if.phy_id = VAR_8;
    return 1;
   }
  }
 }
 return 0;
}
