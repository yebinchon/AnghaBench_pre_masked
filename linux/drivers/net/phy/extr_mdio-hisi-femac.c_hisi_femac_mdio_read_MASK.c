
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {struct hisi_femac_mdio_data* priv; } ;
struct hisi_femac_mdio_data {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hisi_femac_mdio_data*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_3, int VAR_4, int VAR_5)
{
 struct hisi_femac_mdio_data *VAR_6 = VAR_3->priv;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_2((VAR_4 << VAR_0) | VAR_5,
        VAR_6->membase + VAR_2);

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_6->membase + VAR_1) & 0xFFFF;
}
