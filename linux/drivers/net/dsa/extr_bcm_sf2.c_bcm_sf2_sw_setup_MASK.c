
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int dummy; } ;
struct TYPE_2__ {unsigned int num_ports; } ;
struct bcm_sf2_priv {TYPE_1__ hw_params; } ;


 int FUNC_0 (struct dsa_switch*) ;
 int FUNC_1 (struct dsa_switch*) ;
 int FUNC_2 (struct dsa_switch*,unsigned int) ;
 int FUNC_3 (struct dsa_switch*,unsigned int) ;
 int FUNC_4 (struct dsa_switch*,unsigned int,int *) ;
 struct bcm_sf2_priv* FUNC_5 (struct dsa_switch*) ;
 scalar_t__ FUNC_6 (struct dsa_switch*,unsigned int) ;
 scalar_t__ FUNC_7 (struct dsa_switch*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct dsa_switch *VAR_0)
{
 struct bcm_sf2_priv *VAR_1 = FUNC_5(VAR_0);
 unsigned int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->hw_params.num_ports; VAR_2++) {

  if (FUNC_7(VAR_0, VAR_2))
   FUNC_4(VAR_0, VAR_2, ((void*)0));
  else if (FUNC_6(VAR_0, VAR_2))
   FUNC_2(VAR_0, VAR_2);
  else
   FUNC_3(VAR_0, VAR_2);
 }

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 return 0;
}
