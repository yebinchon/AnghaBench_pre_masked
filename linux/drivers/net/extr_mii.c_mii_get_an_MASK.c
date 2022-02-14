
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_if_info {int (* mdio_read ) (int ,int ,int ) ;int phy_id; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct mii_if_info *VAR_0, u16 VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->mdio_read(VAR_0->dev, VAR_0->phy_id, VAR_1);

 return FUNC_0(VAR_2);
}
