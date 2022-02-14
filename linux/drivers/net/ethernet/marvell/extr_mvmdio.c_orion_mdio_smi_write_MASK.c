
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct orion_mdio_dev {int regs; } ;
struct mii_bus {struct orion_mdio_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct mii_bus*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_7, int VAR_8,
    int VAR_9, u16 VAR_10)
{
 struct orion_mdio_dev *VAR_11 = VAR_7->priv;
 int VAR_12;

 if (VAR_9 & VAR_1)
  return -VAR_0;

 VAR_12 = FUNC_0(&VAR_6, VAR_7);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_1(((VAR_8 << VAR_3) |
  (VAR_9 << VAR_4) |
  VAR_5 |
  (VAR_10 << VAR_2)),
        VAR_11->regs);

 return 0;
}
