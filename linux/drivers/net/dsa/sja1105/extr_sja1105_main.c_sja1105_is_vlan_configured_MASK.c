
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sja1105_vlan_lookup_entry {scalar_t__ vlanid; } ;
struct TYPE_4__ {TYPE_1__* tables; } ;
struct sja1105_private {TYPE_2__ static_config; } ;
struct TYPE_3__ {int entry_count; struct sja1105_vlan_lookup_entry* entries; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sja1105_private *VAR_1, u16 VAR_2)
{
 struct sja1105_vlan_lookup_entry *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = VAR_1->static_config.tables[VAR_0].entries;
 VAR_4 = VAR_1->static_config.tables[VAR_0].entry_count;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  if (VAR_3[VAR_5].vlanid == VAR_2)
   return VAR_5;


 return -1;
}
