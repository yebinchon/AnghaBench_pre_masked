
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_table {int entry_count; struct sja1105_l2_lookup_entry* entries; } ;
struct TYPE_2__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ static_config; } ;
struct sja1105_l2_lookup_entry {scalar_t__ macaddr; scalar_t__ vlanid; int destports; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct sja1105_private *VAR_1, int VAR_2,
         const struct sja1105_l2_lookup_entry *VAR_3)
{
 struct sja1105_l2_lookup_entry *VAR_4;
 struct sja1105_table *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_1->static_config.tables[VAR_0];
 VAR_4 = VAR_5->entries;

 for (VAR_6 = 0; VAR_6 < VAR_5->entry_count; VAR_6++)
  if (VAR_4[VAR_6].macaddr == VAR_3->macaddr &&
      VAR_4[VAR_6].vlanid == VAR_3->vlanid &&
      VAR_4[VAR_6].destports & FUNC_0(VAR_2))
   return VAR_6;

 return -1;
}
