
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_private {int dummy; } ;
struct sja1105_dt_port {int dummy; } ;
struct dsa_switch {int vlan_filtering_is_global; int num_tx_queues; int dev; struct sja1105_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sja1105_private*) ;
 int FUNC_2 (struct sja1105_private*,struct sja1105_dt_port*) ;
 int FUNC_3 (struct sja1105_private*,struct sja1105_dt_port*) ;
 int FUNC_4 (struct sja1105_private*) ;
 int FUNC_5 (struct dsa_switch*,int) ;
 int FUNC_6 (struct sja1105_private*,struct sja1105_dt_port*) ;

__attribute__((used)) static int FUNC_7(struct dsa_switch *VAR_2)
{
 struct sja1105_dt_port VAR_3[VAR_0];
 struct sja1105_private *VAR_4 = VAR_2->priv;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "Failed to parse DT: %d\n", VAR_5);
  return VAR_5;
 }




 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "RGMII delay not supported\n");
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "Failed to register PTP clock: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_6(VAR_4, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "Failed to load static config: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "Failed to configure MII clocking: %d\n", VAR_5);
  return VAR_5;
 }
 VAR_2->vlan_filtering_is_global = 1;


 VAR_2->num_tx_queues = VAR_1;





 return FUNC_5(VAR_2, 1);
}
