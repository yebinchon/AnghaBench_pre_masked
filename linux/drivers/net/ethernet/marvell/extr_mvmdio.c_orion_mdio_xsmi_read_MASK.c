
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct orion_mdio_dev {scalar_t__ regs; } ;
struct mii_bus {int parent; struct orion_mdio_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,struct mii_bus*) ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_10, int VAR_11,
    int VAR_12)
{
 struct orion_mdio_dev *VAR_13 = VAR_10->priv;
 u16 VAR_14 = (VAR_12 >> 16) & FUNC_0(4, 0);
 int VAR_15;

 if (!(VAR_12 & VAR_2))
  return -VAR_1;

 VAR_15 = FUNC_2(&VAR_9, VAR_10);
 if (VAR_15 < 0)
  return VAR_15;

 FUNC_4(VAR_12 & FUNC_0(15, 0), VAR_13->regs + VAR_3);
 FUNC_4((VAR_11 << VAR_6) |
        (VAR_14 << VAR_4) |
        VAR_7,
        VAR_13->regs + VAR_5);

 VAR_15 = FUNC_2(&VAR_9, VAR_10);
 if (VAR_15 < 0)
  return VAR_15;

 if (!(FUNC_3(VAR_13->regs + VAR_5) &
       VAR_8)) {
  FUNC_1(VAR_10->parent, "XSMI bus read not valid\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_13->regs + VAR_5) & FUNC_0(15, 0);
}
