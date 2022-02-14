
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_table {int entry_count; TYPE_1__* ops; } ;
struct sja1105_static_config {struct sja1105_table* tables; } ;
typedef enum sja1105_blk_idx { ____Placeholder_sja1105_blk_idx } sja1105_blk_idx ;
struct TYPE_2__ {unsigned int packed_entry_size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

size_t
FUNC_0(const struct sja1105_static_config *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 enum sja1105_blk_idx VAR_6;


 VAR_5 = 1;
 VAR_4 = VAR_1;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct sja1105_table *VAR_7;

  VAR_7 = &VAR_3->tables[VAR_6];
  if (VAR_7->entry_count)
   VAR_5++;

  VAR_4 += VAR_7->ops->packed_entry_size * VAR_7->entry_count;
 }

 VAR_4 += VAR_5 * (VAR_2 + 4);

 VAR_4 -= 4;

 return VAR_4;
}
