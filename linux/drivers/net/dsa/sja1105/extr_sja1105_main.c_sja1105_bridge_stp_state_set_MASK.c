
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* tables; } ;
struct sja1105_private {TYPE_2__ static_config; } ;
struct sja1105_mac_config_entry {int ingress; int egress; int dyn_learn; } ;
struct dsa_switch {int dev; struct sja1105_private* priv; } ;
struct TYPE_3__ {struct sja1105_mac_config_entry* entries; } ;


 size_t VAR_0 ;





 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sja1105_private*,size_t,int,struct sja1105_mac_config_entry*,int) ;

__attribute__((used)) static void FUNC_2(struct dsa_switch *VAR_1, int VAR_2,
      u8 VAR_3)
{
 struct sja1105_private *VAR_4 = VAR_1->priv;
 struct sja1105_mac_config_entry *VAR_5;

 VAR_5 = VAR_4->static_config.tables[VAR_0].entries;

 switch (VAR_3) {
 case 131:
 case 132:





  VAR_5[VAR_2].ingress = 0;
  VAR_5[VAR_2].egress = 0;
  VAR_5[VAR_2].dyn_learn = 0;
  break;
 case 128:
  VAR_5[VAR_2].ingress = 1;
  VAR_5[VAR_2].egress = 0;
  VAR_5[VAR_2].dyn_learn = 0;
  break;
 case 129:
  VAR_5[VAR_2].ingress = 1;
  VAR_5[VAR_2].egress = 0;
  VAR_5[VAR_2].dyn_learn = 1;
  break;
 case 130:
  VAR_5[VAR_2].ingress = 1;
  VAR_5[VAR_2].egress = 1;
  VAR_5[VAR_2].dyn_learn = 1;
  break;
 default:
  FUNC_0(VAR_1->dev, "invalid STP state: %d\n", VAR_3);
  return;
 }

 FUNC_1(VAR_4, VAR_0, VAR_2,
         &VAR_5[VAR_2], 1);
}
