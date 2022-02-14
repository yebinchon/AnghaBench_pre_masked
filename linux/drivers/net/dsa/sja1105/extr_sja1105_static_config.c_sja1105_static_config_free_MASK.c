
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_static_config {TYPE_1__* tables; } ;
typedef enum sja1105_blk_idx { ____Placeholder_sja1105_blk_idx } sja1105_blk_idx ;
struct TYPE_2__ {scalar_t__ entry_count; int entries; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct sja1105_static_config *VAR_1)
{
 enum sja1105_blk_idx VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->tables[VAR_2].entry_count) {
   FUNC_0(VAR_1->tables[VAR_2].entries);
   VAR_1->tables[VAR_2].entry_count = 0;
  }
 }
}
