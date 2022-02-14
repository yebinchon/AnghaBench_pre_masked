
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtio_device {TYPE_3__* config; TYPE_2__* vringh_config; struct cfv_info* priv; } ;
struct TYPE_4__ {int riov; } ;
struct cfv_info {int ndev; int vdev; int * vr_rx; TYPE_1__ ctx; int debugfs; int tx_release_tasklet; } ;
struct TYPE_6__ {int (* del_vqs ) (int ) ;int (* reset ) (struct virtio_device*) ;} ;
struct TYPE_5__ {int (* del_vrhs ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct virtio_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct virtio_device *VAR_0)
{
 struct cfv_info *VAR_1 = VAR_0->priv;

 FUNC_2();
 FUNC_1(VAR_1->ndev);
 FUNC_3();

 FUNC_7(&VAR_1->tx_release_tasklet);
 FUNC_0(VAR_1->debugfs);

 FUNC_9(&VAR_1->ctx.riov);
 VAR_0->config->reset(VAR_0);
 VAR_0->vringh_config->del_vrhs(VAR_1->vdev);
 VAR_1->vr_rx = ((void*)0);
 VAR_0->config->del_vqs(VAR_1->vdev);
 FUNC_8(VAR_1->ndev);
}
