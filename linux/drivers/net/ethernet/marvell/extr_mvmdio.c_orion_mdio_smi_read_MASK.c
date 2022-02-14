
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct orion_mdio_dev {int regs; } ;
struct mii_bus {int parent; struct orion_mdio_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int FUNC_2 (int *,struct mii_bus*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_8, int VAR_9,
          int VAR_10)
{
 struct orion_mdio_dev *VAR_11 = VAR_8->priv;
 u32 VAR_12;
 int VAR_13;

 if (VAR_10 & VAR_2)
  return -VAR_1;

 VAR_13 = FUNC_2(&VAR_7, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_4(((VAR_9 << VAR_3) |
  (VAR_10 << VAR_4) |
  VAR_5),
        VAR_11->regs);

 VAR_13 = FUNC_2(&VAR_7, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_3(VAR_11->regs);
 if (!(VAR_12 & VAR_6)) {
  FUNC_1(VAR_8->parent, "SMI bus read not valid\n");
  return -VAR_0;
 }

 return VAR_12 & FUNC_0(15, 0);
}
