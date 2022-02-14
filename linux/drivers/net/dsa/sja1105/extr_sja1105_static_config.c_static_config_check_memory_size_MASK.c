
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_table {struct sja1105_l2_forwarding_params_entry* entries; } ;
struct sja1105_l2_forwarding_params_entry {scalar_t__* part_spc; } ;
typedef int sja1105_config_valid_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static sja1105_config_valid_t
FUNC_0(const struct sja1105_table *VAR_4)
{
 const struct sja1105_l2_forwarding_params_entry *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_5 = VAR_4[VAR_0].entries;

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  VAR_7 += VAR_5->part_spc[VAR_6];

 if (VAR_7 > VAR_2)
  return VAR_3;

 return VAR_1;
}
