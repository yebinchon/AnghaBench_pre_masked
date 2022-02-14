
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_table {scalar_t__ entry_count; int entries; } ;
struct TYPE_2__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ static_config; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sja1105_private *VAR_1)
{
 struct sja1105_table *VAR_2;

 VAR_2 = &VAR_1->static_config.tables[VAR_0];




 if (VAR_2->entry_count) {
  FUNC_0(VAR_2->entries);
  VAR_2->entry_count = 0;
 }
 return 0;
}
