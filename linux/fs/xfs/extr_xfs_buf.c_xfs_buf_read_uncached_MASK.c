
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_daddr_t ;
struct xfs_buftarg {int dummy; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf {int b_map_count; int b_error; struct xfs_buf_ops const* b_ops; int b_flags; TYPE_1__* b_maps; int b_bn; } ;
struct TYPE_2__ {int bm_bn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfs_buf* FUNC_1 (struct xfs_buftarg*,size_t,int) ;
 int FUNC_2 (struct xfs_buf*) ;
 int FUNC_3 (struct xfs_buf*) ;

int
FUNC_4(
 struct xfs_buftarg *VAR_3,
 xfs_daddr_t VAR_4,
 size_t VAR_5,
 int VAR_6,
 struct xfs_buf **VAR_7,
 const struct xfs_buf_ops *VAR_8)
{
 struct xfs_buf *VAR_9;

 *VAR_7 = ((void*)0);

 VAR_9 = FUNC_1(VAR_3, VAR_5, VAR_6);
 if (!VAR_9)
  return -VAR_0;


 FUNC_0(VAR_9->b_map_count == 1);
 VAR_9->b_bn = VAR_2;
 VAR_9->b_maps[0].bm_bn = VAR_4;
 VAR_9->b_flags |= VAR_1;
 VAR_9->b_ops = VAR_8;

 FUNC_3(VAR_9);
 if (VAR_9->b_error) {
  int VAR_10 = VAR_9->b_error;
  FUNC_2(VAR_9);
  return VAR_10;
 }

 *VAR_7 = VAR_9;
 return 0;
}
