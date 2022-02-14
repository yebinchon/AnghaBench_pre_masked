
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct orion_mdio_dev {scalar_t__ regs; } ;
struct mii_bus {struct orion_mdio_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct mii_bus*) ;
 int VAR_7 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_8, int VAR_9,
    int VAR_10, u16 VAR_11)
{
 struct orion_mdio_dev *VAR_12 = VAR_8->priv;
 u16 VAR_13 = (VAR_10 >> 16) & FUNC_0(4, 0);
 int VAR_14;

 if (!(VAR_10 & VAR_1))
  return -VAR_0;

 VAR_14 = FUNC_1(&VAR_7, VAR_8);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_2(VAR_10 & FUNC_0(15, 0), VAR_12->regs + VAR_2);
 FUNC_2((VAR_9 << VAR_5) |
        (VAR_13 << VAR_3) |
        VAR_6 | VAR_11,
        VAR_12->regs + VAR_4);

 return 0;
}
