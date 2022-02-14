
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mii_bus {struct bgmac* priv; } ;
struct bgmac {scalar_t__ phyaddr; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bgmac*) ;
 int FUNC_1 (struct bgmac*,scalar_t__,int ) ;
 int FUNC_2 (struct bgmac*,scalar_t__,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_3)
{
 struct bgmac *VAR_4 = VAR_3->priv;
 u8 VAR_5 = VAR_4->phyaddr;

 if (VAR_5 == VAR_0)
  return 0;

 FUNC_2(VAR_4, VAR_5, VAR_2, VAR_1);
 FUNC_4(100);
 if (FUNC_1(VAR_4, VAR_5, VAR_2) & VAR_1)
  FUNC_3(VAR_4->dev, "PHY reset failed\n");
 FUNC_0(VAR_4);

 return 0;
}
