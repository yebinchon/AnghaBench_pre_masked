
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_table {int entry_count; struct sja1105_l2_lookup_entry* entries; } ;
struct TYPE_2__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ static_config; } ;
struct sja1105_l2_lookup_entry {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sja1105_private*,int,struct sja1105_l2_lookup_entry const*) ;
 int FUNC_1 (struct sja1105_table*,int) ;

__attribute__((used)) static int
FUNC_2(struct sja1105_private *VAR_1, int VAR_2,
     const struct sja1105_l2_lookup_entry *VAR_3,
     bool VAR_4)
{
 struct sja1105_l2_lookup_entry *VAR_5;
 struct sja1105_table *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = &VAR_1->static_config.tables[VAR_0];

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_8 < 0) {

  if (!VAR_4)
   return 0;


  VAR_7 = FUNC_1(VAR_6, VAR_6->entry_count + 1);
  if (VAR_7)
   return VAR_7;

  VAR_8 = VAR_6->entry_count - 1;
 }


 VAR_5 = VAR_6->entries;







 if (VAR_4) {
  VAR_5[VAR_8] = *VAR_3;
  return 0;
 }




 VAR_5[VAR_8] = VAR_5[VAR_6->entry_count - 1];
 return FUNC_1(VAR_6, VAR_6->entry_count - 1);
}
