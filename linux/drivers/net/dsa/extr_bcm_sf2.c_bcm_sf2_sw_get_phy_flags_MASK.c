
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dsa_switch {int dummy; } ;
struct TYPE_2__ {int gphy_rev; } ;
struct bcm_sf2_priv {TYPE_1__ hw_params; } ;


 struct bcm_sf2_priv* FUNC_0 (struct dsa_switch*) ;

__attribute__((used)) static u32 FUNC_1(struct dsa_switch *VAR_0, int VAR_1)
{
 struct bcm_sf2_priv *VAR_2 = FUNC_0(VAR_0);






 return VAR_2->hw_params.gphy_rev;
}
