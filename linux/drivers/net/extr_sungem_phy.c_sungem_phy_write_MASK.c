
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {int mii_id; int dev; int (* mdio_write ) (int ,int ,int,int) ;} ;


 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct mii_phy* VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->mdio_write(VAR_0->dev, VAR_0->mii_id, VAR_1, VAR_2);
}
