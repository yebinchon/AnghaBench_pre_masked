
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_mount {int dummy; } ;
struct TYPE_6__ {scalar_t__ li_type; } ;
struct xfs_buf_log_item {int bli_format_count; TYPE_2__* bli_formats; struct xfs_buf* bli_buf; TYPE_3__ bli_item; } ;
struct xfs_buf {struct xfs_buf_log_item* b_log_item; TYPE_1__* b_maps; int b_map_count; int b_transp; struct xfs_mount* b_mount; } ;
struct TYPE_5__ {int blf_map_size; int blf_len; int blf_blkno; scalar_t__ blf_type; } ;
struct TYPE_4__ {int bm_len; int bm_bn; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,struct xfs_buf_log_item*) ;
 struct xfs_buf_log_item* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct xfs_buf*) ;
 int FUNC_6 (struct xfs_buf_log_item*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct xfs_mount*,TYPE_3__*,scalar_t__,int *) ;

int
FUNC_8(
 struct xfs_buf *VAR_5,
 struct xfs_mount *VAR_6)
{
 struct xfs_buf_log_item *VAR_7 = VAR_5->b_log_item;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;






 FUNC_0(VAR_5->b_mount == VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_7->bli_item.li_type == VAR_2);
  FUNC_0(!VAR_5->b_transp);
  FUNC_0(VAR_7->bli_buf == VAR_5);
  return 0;
 }

 VAR_7 = FUNC_4(VAR_4, 0);
 FUNC_7(VAR_6, &VAR_7->bli_item, VAR_2, &VAR_3);
 VAR_7->bli_buf = VAR_5;
 VAR_10 = FUNC_6(VAR_7, VAR_5->b_map_count);
 FUNC_0(VAR_10 == 0);
 if (VAR_10) {
  FUNC_3(VAR_4, VAR_7);
  return VAR_10;
 }


 for (VAR_11 = 0; VAR_11 < VAR_7->bli_format_count; VAR_11++) {
  VAR_8 = FUNC_2(FUNC_1(VAR_5->b_maps[VAR_11].bm_len),
          VAR_1);
  VAR_9 = FUNC_2(VAR_8, VAR_0);

  VAR_7->bli_formats[VAR_11].blf_type = VAR_2;
  VAR_7->bli_formats[VAR_11].blf_blkno = VAR_5->b_maps[VAR_11].bm_bn;
  VAR_7->bli_formats[VAR_11].blf_len = VAR_5->b_maps[VAR_11].bm_len;
  VAR_7->bli_formats[VAR_11].blf_map_size = VAR_9;
 }

 VAR_5->b_log_item = VAR_7;
 FUNC_5(VAR_5);
 return 0;
}
