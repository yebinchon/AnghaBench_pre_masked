
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int port; int dev; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct niu*,int ,int ) ;
 int FUNC_1 (struct niu*,int ,int ,int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_3->phy_addr, VAR_2, VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_4 = 1000;
 while (--VAR_4 >= 0) {
  FUNC_3(500);
  VAR_5 = FUNC_0(VAR_3, VAR_3->phy_addr, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
  if (!(VAR_5 & VAR_0))
   break;
 }
 if (VAR_4 < 0) {
  FUNC_2(VAR_3->dev, "Port %u MII would not reset, bmcr[%04x]\n",
      VAR_3->port, VAR_5);
  return -VAR_1;
 }

 return 0;
}
