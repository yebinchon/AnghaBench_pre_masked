
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {struct bcm_sf2_priv* priv; } ;
struct bcm_sf2_priv {int indir_phy_mask; int master_mii_bus; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct bcm_sf2_priv*,int,int,int,int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct bcm_sf2_priv *VAR_4 = VAR_1->priv;




 if (VAR_2 == VAR_0 && VAR_4->indir_phy_mask & FUNC_0(VAR_2))
  return FUNC_1(VAR_4, 1, VAR_2, VAR_3, 0);
 else
  return FUNC_2(VAR_4->master_mii_bus, VAR_2, VAR_3);
}
