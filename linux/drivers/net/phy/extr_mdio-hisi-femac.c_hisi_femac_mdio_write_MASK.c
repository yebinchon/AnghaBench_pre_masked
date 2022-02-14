
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {struct hisi_femac_mdio_data* priv; } ;
struct hisi_femac_mdio_data {scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hisi_femac_mdio_data*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_4, int VAR_5, int VAR_6,
     u16 VAR_7)
{
 struct hisi_femac_mdio_data *VAR_8 = VAR_4->priv;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_3 | (VAR_7 << VAR_1) |
        (VAR_5 << VAR_0) | VAR_6,
        VAR_8->membase + VAR_2);

 return FUNC_0(VAR_8);
}
