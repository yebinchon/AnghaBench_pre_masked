
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mscc_miim_dev {scalar_t__ phy_regs; } ;
struct mii_bus {struct mscc_miim_dev* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_1)
{
 struct mscc_miim_dev *VAR_2 = VAR_1->priv;

 if (VAR_2->phy_regs) {
  FUNC_1(0, VAR_2->phy_regs + VAR_0);
  FUNC_1(0x1ff, VAR_2->phy_regs + VAR_0);
  FUNC_0(500);
 }

 return 0;
}
