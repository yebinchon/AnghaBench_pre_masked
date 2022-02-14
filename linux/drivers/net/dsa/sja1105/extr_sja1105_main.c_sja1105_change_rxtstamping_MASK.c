
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sja1105_table {struct sja1105_general_params_entry* entries; } ;
struct TYPE_3__ {int * stampable_skb; } ;
struct TYPE_4__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ tagger_data; TYPE_2__ static_config; } ;
struct sja1105_general_params_entry {int send_meta1; int send_meta0; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sja1105_private*,int) ;
 int FUNC_2 (struct sja1105_private*) ;

__attribute__((used)) static int FUNC_3(struct sja1105_private *VAR_1,
          bool VAR_2)
{
 struct sja1105_general_params_entry *VAR_3;
 struct sja1105_table *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_1->static_config.tables[VAR_0];
 VAR_3 = VAR_4->entries;
 VAR_3->send_meta1 = VAR_2;
 VAR_3->send_meta0 = VAR_2;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_1->tagger_data.stampable_skb) {
  FUNC_0(VAR_1->tagger_data.stampable_skb);
  VAR_1->tagger_data.stampable_skb = ((void*)0);
 }

 return FUNC_2(VAR_1);
}
