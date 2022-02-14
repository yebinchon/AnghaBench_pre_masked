
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int port; int dev; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct niu*,int ,int ,int ) ;
 int FUNC_1 (struct niu*,int ,int ,int ,int) ;
 int FUNC_2 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_4->phy_addr,
   VAR_0, VAR_3);
 if (VAR_5 < 0 || VAR_5 == 0xffff)
  return VAR_5;
 VAR_5 |= VAR_1;
 VAR_5 = FUNC_1(VAR_4, VAR_4->phy_addr, VAR_0,
    VAR_3, VAR_5);
 if (VAR_5)
  return VAR_5;

 VAR_6 = 1000;
 while (--VAR_6 >= 0) {
  VAR_5 = FUNC_0(VAR_4, VAR_4->phy_addr,
    VAR_0, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
  if (!(VAR_5 & VAR_1))
   break;
 }
 if (VAR_6 < 0) {
  FUNC_2(VAR_4->dev, "Port %u PHY will not reset (bmcr=%04x)\n",
      VAR_4->port, (VAR_5 & 0xffff));
  return -VAR_2;
 }
 return 0;
}
