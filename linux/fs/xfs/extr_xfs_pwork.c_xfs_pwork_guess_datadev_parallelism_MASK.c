
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_mount {struct xfs_buftarg* m_ddev_targp; } ;
struct xfs_buftarg {TYPE_1__* bt_bdev; } ;
struct TYPE_2__ {int bd_queue; } ;


 scalar_t__ FUNC_0 (int ) ;

unsigned int
FUNC_1(
 struct xfs_mount *VAR_0)
{
 struct xfs_buftarg *VAR_1 = VAR_0->m_ddev_targp;





 return FUNC_0(VAR_1->bt_bdev->bd_queue) ? 2 : 1;
}
