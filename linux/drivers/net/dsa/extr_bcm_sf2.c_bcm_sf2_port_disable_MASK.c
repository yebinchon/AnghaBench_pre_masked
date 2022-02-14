
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dsa_switch {int dummy; } ;
struct TYPE_2__ {int num_gphy; } ;
struct bcm_sf2_priv {int wol_ports_mask; int moca_port; int int_phy_mask; TYPE_1__ hw_params; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (struct bcm_sf2_priv*,int) ;
 struct bcm_sf2_priv* FUNC_5 (struct dsa_switch*) ;
 int FUNC_6 (struct bcm_sf2_priv*,int ) ;
 int FUNC_7 (struct bcm_sf2_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct dsa_switch *VAR_2, int VAR_3)
{
 struct bcm_sf2_priv *VAR_4 = FUNC_5(VAR_2);
 u32 VAR_5;


 if (VAR_4->wol_ports_mask & (1 << VAR_3)) {
  VAR_5 = FUNC_6(VAR_4, VAR_0);
  VAR_5 |= FUNC_0(VAR_3);
  FUNC_7(VAR_4, VAR_5, VAR_0);
  return;
 }

 if (VAR_3 == VAR_4->moca_port)
  FUNC_4(VAR_4, VAR_3);

 if (VAR_4->int_phy_mask & 1 << VAR_3 && VAR_4->hw_params.num_gphy == 1)
  FUNC_3(VAR_2, 0);

 FUNC_2(VAR_2, VAR_3);


 VAR_5 = FUNC_6(VAR_4, VAR_1);
 VAR_5 |= FUNC_1(VAR_3);
 FUNC_7(VAR_4, VAR_5, VAR_1);
}
