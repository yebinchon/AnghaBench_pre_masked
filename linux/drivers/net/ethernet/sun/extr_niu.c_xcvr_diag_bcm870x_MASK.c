
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct niu {int port; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct niu*,int ,int ,int) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_7)
{
 u16 VAR_8, VAR_9;
 int VAR_10 = 0;


 VAR_10 = FUNC_0(VAR_7, VAR_7->phy_addr, VAR_1,
   VAR_6);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1("Port %u PMA_PMD(MII_STAT1000) [%04x]\n", VAR_7->port, VAR_10);

 VAR_10 = FUNC_0(VAR_7, VAR_7->phy_addr, VAR_3, 0x20);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1("Port %u USER_DEV3(0x20) [%04x]\n", VAR_7->port, VAR_10);

 VAR_10 = FUNC_0(VAR_7, VAR_7->phy_addr, VAR_0,
   VAR_5);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_1("Port %u PHYXS(MII_NWAYTEST) [%04x]\n", VAR_7->port, VAR_10);



 VAR_10 = FUNC_0(VAR_7, VAR_7->phy_addr, VAR_3,
   VAR_2);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_7, VAR_7->phy_addr, VAR_3,
   VAR_2);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_8 = VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_7->phy_addr, VAR_3,
   VAR_4);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_7, VAR_7->phy_addr, VAR_3,
   VAR_4);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_9 = VAR_10;

 if (VAR_8 != 0x03fc) {
  if ((VAR_8 == 0x43bc) && (VAR_9 != 0)) {
   FUNC_1("Port %u cable not connected or bad cable\n",
    VAR_7->port);
  } else if (VAR_8 == 0x639c) {
   FUNC_1("Port %u optical module is bad or missing\n",
    VAR_7->port);
  }
 }

 return 0;
}
