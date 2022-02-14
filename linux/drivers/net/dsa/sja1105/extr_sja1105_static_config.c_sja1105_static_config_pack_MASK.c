
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sja1105_table_header {int len; int crc; scalar_t__ block_id; int member_0; } ;
struct sja1105_table {int entry_count; TYPE_1__* ops; int * entries; } ;
struct sja1105_static_config {struct sja1105_table* tables; int device_id; } ;
typedef enum sja1105_blk_idx { ____Placeholder_sja1105_blk_idx } sja1105_blk_idx ;
struct TYPE_2__ {int packed_entry_size; int unpacked_entry_size; int (* packing ) (char*,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int *,int,int ,int) ;
 int FUNC_2 (char*,struct sja1105_table_header*) ;
 int FUNC_3 (char*,struct sja1105_table_header*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int *,int ) ;

void
FUNC_6(void *VAR_5, struct sja1105_static_config *VAR_6)
{
 struct sja1105_table_header VAR_7 = {0};
 enum sja1105_blk_idx VAR_8;
 char *VAR_9 = VAR_5;
 int VAR_10;

 FUNC_1(VAR_9, &VAR_6->device_id, 31, 0, 4);
 VAR_9 += VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  const struct sja1105_table *VAR_11;
  char *VAR_12;

  VAR_11 = &VAR_6->tables[VAR_8];
  if (!VAR_11->entry_count)
   continue;

  VAR_7.block_id = VAR_4[VAR_8];
  VAR_7.len = VAR_11->entry_count *
        VAR_11->ops->packed_entry_size / 4;
  FUNC_2(VAR_9, &VAR_7);
  VAR_9 += VAR_3;
  VAR_12 = VAR_9;
  for (VAR_10 = 0; VAR_10 < VAR_11->entry_count; VAR_10++) {
   u8 *VAR_13 = VAR_11->entries;

   VAR_13 += VAR_10 * VAR_11->ops->unpacked_entry_size;
   FUNC_0(VAR_9, 0, VAR_11->ops->packed_entry_size);
   VAR_11->ops->packing(VAR_9, VAR_13, VAR_1);
   VAR_9 += VAR_11->ops->packed_entry_size;
  }
  FUNC_4(VAR_12, VAR_9);
  VAR_9 += 4;
 }





 VAR_7.block_id = 0;
 VAR_7.len = 0;
 VAR_7.crc = 0xDEADBEEF;
 FUNC_0(VAR_9, 0, VAR_3);
 FUNC_3(VAR_9, &VAR_7, VAR_1);
}
