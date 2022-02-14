
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dummy; } ;
struct bcm_sf2_priv {int num_cfp_rules; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bcm_sf2_priv* FUNC_1 (struct dsa_switch*) ;

int FUNC_2(struct dsa_switch *VAR_2, int VAR_3, int VAR_4)
{
 struct bcm_sf2_priv *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4 != VAR_0)
  return 0;


 return (VAR_5->num_cfp_rules - 1) * FUNC_0(VAR_1);
}
