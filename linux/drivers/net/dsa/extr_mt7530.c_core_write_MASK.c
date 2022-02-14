
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7530_priv {struct mii_bus* bus; } ;
struct mii_bus {int mdio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt7530_priv*,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mt7530_priv *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct mii_bus *VAR_5 = VAR_2->bus;

 FUNC_1(&VAR_5->mdio_lock, VAR_1);

 FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4);

 FUNC_2(&VAR_5->mdio_lock);
}
