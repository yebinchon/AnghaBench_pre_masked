
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsa_switch {int dummy; } ;
struct bcm_sf2_priv {int dummy; } ;
typedef scalar_t__ phy_interface_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct bcm_sf2_priv* FUNC_1 (struct dsa_switch*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct bcm_sf2_priv*,int ) ;
 int FUNC_4 (struct bcm_sf2_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dsa_switch *VAR_3, int VAR_4,
        phy_interface_t VAR_5, bool VAR_6)
{
 struct bcm_sf2_priv *VAR_7 = FUNC_1(VAR_3);
 u32 VAR_8;

 if (!FUNC_2(VAR_5) &&
     VAR_5 != VAR_0 &&
     VAR_5 != VAR_1)
  return;


 VAR_8 = FUNC_3(VAR_7, FUNC_0(VAR_4));
 if (VAR_6)
  VAR_8 |= VAR_2;
 else
  VAR_8 &= ~VAR_2;
 FUNC_4(VAR_7, VAR_8, FUNC_0(VAR_4));
}
