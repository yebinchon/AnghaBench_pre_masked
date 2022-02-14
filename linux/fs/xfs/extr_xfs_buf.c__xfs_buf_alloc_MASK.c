
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_buf_flags_t ;
struct xfs_buftarg {int bt_mount; } ;
struct xfs_buf_map {scalar_t__ bm_len; int bm_bn; } ;
struct xfs_buf {int b_flags; int b_mount; int b_waiters; int b_pin_count; scalar_t__ b_length; TYPE_1__* b_maps; int b_bn; struct xfs_buftarg* b_target; int b_lock; int b_sema; int b_li_list; int b_list; int b_lru; int b_iowait; int b_lru_ref; int b_hold; } ;
struct TYPE_2__ {scalar_t__ bm_len; int bm_bn; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct xfs_buf*) ;
 struct xfs_buf* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct xfs_buf*,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_6 ;
 int FUNC_11 (struct xfs_buf*,int) ;
 int VAR_7 ;

__attribute__((used)) static struct xfs_buf *
FUNC_12(
 struct xfs_buftarg *VAR_8,
 struct xfs_buf_map *VAR_9,
 int VAR_10,
 xfs_buf_flags_t VAR_11)
{
 struct xfs_buf *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_6(VAR_7, VAR_0);
 if (FUNC_10(!VAR_12))
  return ((void*)0);





 VAR_11 &= ~(VAR_4 | VAR_3 | VAR_1 | VAR_2);

 FUNC_2(&VAR_12->b_hold, 1);
 FUNC_2(&VAR_12->b_lru_ref, 1);
 FUNC_3(&VAR_12->b_iowait);
 FUNC_0(&VAR_12->b_lru);
 FUNC_0(&VAR_12->b_list);
 FUNC_0(&VAR_12->b_li_list);
 FUNC_7(&VAR_12->b_sema, 0);
 FUNC_8(&VAR_12->b_lock);
 VAR_12->b_target = VAR_8;
 VAR_12->b_mount = VAR_8->bt_mount;
 VAR_12->b_flags = VAR_11;






 VAR_13 = FUNC_11(VAR_12, VAR_10);
 if (VAR_13) {
  FUNC_5(VAR_7, VAR_12);
  return ((void*)0);
 }

 VAR_12->b_bn = VAR_9[0].bm_bn;
 VAR_12->b_length = 0;
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  VAR_12->b_maps[VAR_14].bm_bn = VAR_9[VAR_14].bm_bn;
  VAR_12->b_maps[VAR_14].bm_len = VAR_9[VAR_14].bm_len;
  VAR_12->b_length += VAR_9[VAR_14].bm_len;
 }

 FUNC_2(&VAR_12->b_pin_count, 0);
 FUNC_4(&VAR_12->b_waiters);

 FUNC_1(VAR_12->b_mount, VAR_6);
 FUNC_9(VAR_12, VAR_5);

 return VAR_12;
}
