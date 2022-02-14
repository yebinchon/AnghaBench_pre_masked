
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_taprio_qopt_offload {int dummy; } ;
struct TYPE_2__ {struct tc_taprio_qopt_offload** offload; } ;
struct sja1105_private {TYPE_1__ tas_data; } ;
struct dsa_switch {struct sja1105_private* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tc_taprio_qopt_offload*) ;

void FUNC_1(struct dsa_switch *VAR_1)
{
 struct sja1105_private *VAR_2 = VAR_1->priv;
 struct tc_taprio_qopt_offload *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = VAR_2->tas_data.offload[VAR_4];
  if (!VAR_3)
   continue;

  FUNC_0(VAR_3);
 }
}
