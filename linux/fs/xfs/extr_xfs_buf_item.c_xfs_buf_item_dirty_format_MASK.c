
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf_log_item {int bli_format_count; TYPE_1__* bli_formats; } ;
struct TYPE_2__ {int blf_map_size; int blf_data_map; } ;


 int FUNC_0 (int ,int ) ;

bool
FUNC_1(
 struct xfs_buf_log_item *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->bli_format_count; VAR_1++) {
  if (!FUNC_0(VAR_0->bli_formats[VAR_1].blf_data_map,
        VAR_0->bli_formats[VAR_1].blf_map_size))
   return 1;
 }

 return 0;
}
