
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sja1105_tagger_data {int rxtstamp_work; int skb_rxtstamp_queue; int state; } ;
struct sja1105_private {struct sja1105_tagger_data tagger_data; } ;
struct dsa_switch {struct sja1105_private* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
      struct sk_buff *VAR_3, unsigned int VAR_4)
{
 struct sja1105_private *VAR_5 = VAR_1->priv;
 struct sja1105_tagger_data *VAR_6 = &VAR_5->tagger_data;

 if (!FUNC_2(VAR_0, &VAR_6->state))
  return 0;




 FUNC_1(&VAR_6->skb_rxtstamp_queue, VAR_3);
 FUNC_0(&VAR_6->rxtstamp_work);
 return 1;
}
