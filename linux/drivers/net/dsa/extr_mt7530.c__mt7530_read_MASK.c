
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt7530_dummy_poll {int reg; TYPE_1__* priv; } ;
struct mii_bus {int mdio_lock; } ;
struct TYPE_2__ {struct mii_bus* bus; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u32
FUNC_3(struct mt7530_dummy_poll *VAR_1)
{
 struct mii_bus *VAR_2 = VAR_1->priv->bus;
 u32 VAR_3;

 FUNC_1(&VAR_2->mdio_lock, VAR_0);

 VAR_3 = FUNC_0(VAR_1->priv, VAR_1->reg);

 FUNC_2(&VAR_2->mdio_lock);

 return VAR_3;
}
