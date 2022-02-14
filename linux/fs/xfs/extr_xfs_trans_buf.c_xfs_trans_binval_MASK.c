
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int t_flags; } ;
typedef TYPE_4__ xfs_trans_t ;
struct TYPE_13__ {int b_flags; TYPE_4__* b_transp; struct xfs_buf_log_item* b_log_item; } ;
typedef TYPE_5__ xfs_buf_t ;
typedef int uint ;
struct TYPE_11__ {int li_flags; } ;
struct TYPE_9__ {int blf_flags; } ;
struct xfs_buf_log_item {int bli_flags; int bli_format_count; TYPE_3__ bli_item; TYPE_2__* bli_formats; TYPE_1__ __bli_format; int bli_refcount; } ;
struct TYPE_10__ {int blf_map_size; int blf_data_map; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct xfs_buf_log_item*) ;
 int FUNC_6 (TYPE_5__*) ;

void
FUNC_7(
 xfs_trans_t *VAR_10,
 xfs_buf_t *VAR_11)
{
 struct xfs_buf_log_item *VAR_12 = VAR_11->b_log_item;
 int VAR_13;

 FUNC_0(VAR_11->b_transp == VAR_10);
 FUNC_0(VAR_12 != ((void*)0));
 FUNC_0(FUNC_1(&VAR_12->bli_refcount) > 0);

 FUNC_5(VAR_12);

 if (VAR_12->bli_flags & VAR_7) {




  FUNC_0(VAR_11->b_flags & VAR_0);
  FUNC_0(!(VAR_12->bli_flags & (VAR_6 | VAR_4)));
  FUNC_0(!(VAR_12->__bli_format.blf_flags & VAR_3));
  FUNC_0(!(VAR_12->__bli_format.blf_flags & VAR_1));
  FUNC_0(VAR_12->__bli_format.blf_flags & VAR_2);
  FUNC_0(FUNC_4(VAR_8, &VAR_12->bli_item.li_flags));
  FUNC_0(VAR_10->t_flags & VAR_9);
  return;
 }

 FUNC_6(VAR_11);

 VAR_12->bli_flags |= VAR_7;
 VAR_12->bli_flags &= ~(VAR_5 | VAR_6 | VAR_4);
 VAR_12->__bli_format.blf_flags &= ~VAR_3;
 VAR_12->__bli_format.blf_flags |= VAR_2;
 VAR_12->__bli_format.blf_flags &= ~VAR_1;
 for (VAR_13 = 0; VAR_13 < VAR_12->bli_format_count; VAR_13++) {
  FUNC_2(VAR_12->bli_formats[VAR_13].blf_data_map, 0,
         (VAR_12->bli_formats[VAR_13].blf_map_size * sizeof(uint)));
 }
 FUNC_3(VAR_8, &VAR_12->bli_item.li_flags);
 VAR_10->t_flags |= VAR_9;
}
