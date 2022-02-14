
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_table {size_t entry_count; void* entries; TYPE_1__* ops; } ;
struct TYPE_2__ {size_t unpacked_entry_size; size_t max_entry_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t,size_t,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;

int FUNC_4(struct sja1105_table *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = VAR_3->ops->unpacked_entry_size;
 void *VAR_6, *VAR_7 = VAR_3->entries;

 if (VAR_4 > VAR_3->ops->max_entry_count)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_6, VAR_7, FUNC_3(VAR_4, VAR_3->entry_count) *
  VAR_5);

 VAR_3->entries = VAR_6;
 VAR_3->entry_count = VAR_4;
 FUNC_1(VAR_7);
 return 0;
}
