
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sja1105_private {struct sja1105_port* ports; } ;
struct sja1105_port {int hwts_tx_en; } ;
struct dsa_switch {struct sja1105_private* priv; } ;



__attribute__((used)) static bool FUNC_0(struct dsa_switch *VAR_0, int VAR_1,
      struct sk_buff *VAR_2, unsigned int VAR_3)
{
 struct sja1105_private *VAR_4 = VAR_0->priv;
 struct sja1105_port *VAR_5 = &VAR_4->ports[VAR_1];

 if (!VAR_5->hwts_tx_en)
  return 0;

 return 1;
}
