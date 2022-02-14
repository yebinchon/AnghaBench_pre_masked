
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct mt7530_priv {int dummy; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;
typedef int phy_interface_t ;


 int FUNC_0 (struct mt7530_priv*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dsa_switch *VAR_0, int VAR_1,
           unsigned int VAR_2,
           phy_interface_t VAR_3,
           struct phy_device *VAR_4)
{
 struct mt7530_priv *VAR_5 = VAR_0->priv;

 FUNC_0(VAR_5, VAR_1, 1);
}
