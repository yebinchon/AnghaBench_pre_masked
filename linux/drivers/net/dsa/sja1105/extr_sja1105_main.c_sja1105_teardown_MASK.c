
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int skb_rxtstamp_queue; int rxtstamp_work; } ;
struct sja1105_private {int static_config; TYPE_1__ tagger_data; } ;
struct dsa_switch {struct sja1105_private* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sja1105_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dsa_switch*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dsa_switch *VAR_0)
{
 struct sja1105_private *VAR_1 = VAR_0->priv;

 FUNC_3(VAR_0);
 FUNC_0(&VAR_1->tagger_data.rxtstamp_work);
 FUNC_4(&VAR_1->tagger_data.skb_rxtstamp_queue);
 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->static_config);
}
