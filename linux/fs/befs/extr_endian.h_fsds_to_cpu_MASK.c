
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_5__ {int size; int max_double_indirect_range; int double_indirect; int max_indirect_range; int indirect; int max_direct_range; int * direct; } ;
typedef TYPE_1__ befs_disk_data_stream ;
struct TYPE_6__ {void* size; void* max_double_indirect_range; void* double_indirect; void* max_indirect_range; void* indirect; void* max_direct_range; void** direct; } ;
typedef TYPE_2__ befs_data_stream ;


 int VAR_0 ;
 void* FUNC_0 (struct super_block const*,int ) ;
 void* FUNC_1 (struct super_block const*,int ) ;

__attribute__((used)) static inline befs_data_stream
FUNC_2(const struct super_block *VAR_1, const befs_disk_data_stream *VAR_2)
{
 befs_data_stream VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  VAR_3.direct[VAR_4] = FUNC_1(VAR_1, VAR_2->direct[VAR_4]);

 VAR_3.max_direct_range = FUNC_0(VAR_1, VAR_2->max_direct_range);
 VAR_3.indirect = FUNC_1(VAR_1, VAR_2->indirect);
 VAR_3.max_indirect_range = FUNC_0(VAR_1, VAR_2->max_indirect_range);
 VAR_3.double_indirect = FUNC_1(VAR_1, VAR_2->double_indirect);
 VAR_3.max_double_indirect_range = FUNC_0(VAR_1,
           VAR_2->
           max_double_indirect_range);
 VAR_3.size = FUNC_0(VAR_1, VAR_2->size);

 return VAR_3;
}
