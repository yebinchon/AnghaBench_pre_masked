
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; struct xfs_buf_ops const* b_ops; } ;
typedef struct xfs_buf xfs_buf_t ;
typedef int xfs_buf_flags_t ;
struct xfs_buftarg {int bt_mount; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf_map {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct xfs_buf*,int) ;
 int FUNC_3 (struct xfs_buf*,int,int ) ;
 int VAR_4 ;
 struct xfs_buf* FUNC_4 (struct xfs_buftarg*,struct xfs_buf_map*,int,int) ;
 int FUNC_5 (struct xfs_buf*) ;
 int FUNC_6 (struct xfs_buf*,struct xfs_buf_ops const*) ;

xfs_buf_t *
FUNC_7(
 struct xfs_buftarg *VAR_5,
 struct xfs_buf_map *VAR_6,
 int VAR_7,
 xfs_buf_flags_t VAR_8,
 const struct xfs_buf_ops *VAR_9)
{
 struct xfs_buf *VAR_10;

 VAR_8 |= VAR_2;

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
 if (!VAR_10)
  return ((void*)0);

 FUNC_3(VAR_10, VAR_8, VAR_3);

 if (!(VAR_10->b_flags & VAR_1)) {
  FUNC_1(VAR_5->bt_mount, VAR_4);
  VAR_10->b_ops = VAR_9;
  FUNC_2(VAR_10, VAR_8);
  return VAR_10;
 }

 FUNC_6(VAR_10, VAR_9);

 if (VAR_8 & VAR_0) {




  FUNC_5(VAR_10);
  return ((void*)0);
 }


 VAR_10->b_flags &= ~VAR_2;
 FUNC_0(VAR_10->b_ops != ((void*)0) || VAR_9 == ((void*)0));
 return VAR_10;
}
