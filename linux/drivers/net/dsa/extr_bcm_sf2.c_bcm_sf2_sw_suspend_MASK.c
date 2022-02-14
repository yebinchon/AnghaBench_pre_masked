
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {unsigned int num_ports; } ;
struct bcm_sf2_priv {int dummy; } ;


 int FUNC_0 (struct bcm_sf2_priv*) ;
 int FUNC_1 (struct dsa_switch*,unsigned int) ;
 struct bcm_sf2_priv* FUNC_2 (struct dsa_switch*) ;
 scalar_t__ FUNC_3 (struct dsa_switch*,unsigned int) ;
 scalar_t__ FUNC_4 (struct dsa_switch*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_0)
{
 struct bcm_sf2_priv *VAR_1 = FUNC_2(VAR_0);
 unsigned int VAR_2;

 FUNC_0(VAR_1);





 for (VAR_2 = 0; VAR_2 < VAR_0->num_ports; VAR_2++) {
  if (FUNC_4(VAR_0, VAR_2) || FUNC_3(VAR_0, VAR_2))
   FUNC_1(VAR_0, VAR_2);
 }

 return 0;
}
