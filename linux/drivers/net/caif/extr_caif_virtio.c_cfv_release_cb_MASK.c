
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct TYPE_4__ {int tx_kicks; } ;
struct cfv_info {int tx_release_tasklet; TYPE_2__ stats; } ;
struct TYPE_3__ {struct cfv_info* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtqueue *VAR_0)
{
 struct cfv_info *VAR_1 = VAR_0->vdev->priv;

 ++VAR_1->stats.tx_kicks;
 FUNC_0(&VAR_1->tx_release_tasklet);
}
