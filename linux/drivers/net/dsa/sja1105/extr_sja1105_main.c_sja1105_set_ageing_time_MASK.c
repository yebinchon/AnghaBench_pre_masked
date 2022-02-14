
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_table {struct sja1105_l2_lookup_params_entry* entries; } ;
struct TYPE_2__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ static_config; } ;
struct sja1105_l2_lookup_params_entry {unsigned int maxage; } ;
struct dsa_switch {struct sja1105_private* priv; } ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sja1105_private*) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_1,
       unsigned int VAR_2)
{
 struct sja1105_l2_lookup_params_entry *VAR_3;
 struct sja1105_private *VAR_4 = VAR_1->priv;
 struct sja1105_table *VAR_5;
 unsigned int VAR_6;

 VAR_5 = &VAR_4->static_config.tables[VAR_0];
 VAR_3 = VAR_5->entries;

 VAR_6 = FUNC_0(VAR_2);

 if (VAR_3->maxage == VAR_6)
  return 0;

 VAR_3->maxage = VAR_6;

 return FUNC_1(VAR_4);
}
