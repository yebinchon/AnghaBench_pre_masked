
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7530_priv {struct mii_bus* bus; } ;
struct mii_bus {int mdio_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7530_priv*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mt7530_priv *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct mii_bus *VAR_4 = VAR_1->bus;

 FUNC_1(&VAR_4->mdio_lock, VAR_0);

 FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2(&VAR_4->mdio_lock);
}
