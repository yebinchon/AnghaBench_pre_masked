
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buftarg {TYPE_1__* bt_bdev; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf_map {int dummy; } ;
struct TYPE_2__ {int bd_bdi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_buftarg*,struct xfs_buf_map*,int,int,struct xfs_buf_ops const*) ;

void
FUNC_2(
 struct xfs_buftarg *VAR_3,
 struct xfs_buf_map *VAR_4,
 int VAR_5,
 const struct xfs_buf_ops *VAR_6)
{
 if (FUNC_0(VAR_3->bt_bdev->bd_bdi))
  return;

 FUNC_1(VAR_3, VAR_4, VAR_5,
       VAR_2|VAR_0|VAR_1, VAR_6);
}
