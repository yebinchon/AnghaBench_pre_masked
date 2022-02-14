
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sja1105_table {int entry_count; int * entries; TYPE_1__* ops; } ;
struct TYPE_2__ {size_t unpacked_entry_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

int FUNC_1(struct sja1105_table *VAR_1, int VAR_2)
{
 size_t VAR_3 = VAR_1->ops->unpacked_entry_size;
 u8 *VAR_4 = VAR_1->entries;

 if (VAR_2 > VAR_1->entry_count)
  return -VAR_0;

 FUNC_0(VAR_4 + VAR_2 * VAR_3, VAR_4 + (VAR_2 + 1) * VAR_3,
  (VAR_1->entry_count - VAR_2) * VAR_3);

 VAR_1->entry_count--;

 return 0;
}
