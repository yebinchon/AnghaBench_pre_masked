
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct xfs_buf_log_item {int bli_format_count; TYPE_1__* bli_formats; struct xfs_buf* bli_buf; } ;
struct xfs_buf {TYPE_2__* b_maps; } ;
struct TYPE_4__ {int bm_len; } ;
struct TYPE_3__ {int * blf_data_map; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int *) ;

void
FUNC_2(
 struct xfs_buf_log_item *VAR_0,
 uint VAR_1,
 uint VAR_2)
{
 int VAR_3;
 uint VAR_4;
 uint VAR_5;
 struct xfs_buf *VAR_6 = VAR_0->bli_buf;




 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->bli_format_count; VAR_3++) {
  if (VAR_4 > VAR_2)
   break;
  VAR_5 = VAR_4 + FUNC_0(VAR_6->b_maps[VAR_3].bm_len) - 1;


  if (VAR_1 > VAR_5) {
   VAR_4 += FUNC_0(VAR_6->b_maps[VAR_3].bm_len);
   continue;
  }







  if (VAR_1 < VAR_4)
   VAR_1 = VAR_4;
  if (VAR_5 > VAR_2)
   VAR_5 = VAR_2;
  FUNC_1(VAR_1 - VAR_4, VAR_5 - VAR_4,
      &VAR_0->bli_formats[VAR_3].blf_data_map[0]);

  VAR_4 += FUNC_0(VAR_6->b_maps[VAR_3].bm_len);
 }
}
