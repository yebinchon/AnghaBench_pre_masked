
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7530_priv {struct mii_bus* bus; } ;
struct mii_bus {int mdio_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7530_priv*,int ) ;
 int FUNC_1 (struct mt7530_priv*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mt7530_priv *VAR_1, u32 VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 struct mii_bus *VAR_5 = VAR_1->bus;
 u32 VAR_6;

 FUNC_2(&VAR_5->mdio_lock, VAR_0);

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_4;
 FUNC_1(VAR_1, VAR_2, VAR_6);

 FUNC_3(&VAR_5->mdio_lock);
}
