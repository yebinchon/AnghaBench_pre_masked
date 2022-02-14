
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vringh {int dummy; } ;
struct virtio_device {struct cfv_info* priv; } ;
struct TYPE_2__ {int rx_kicks; } ;
struct cfv_info {int napi; int vr_rx; TYPE_1__ stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct virtio_device *VAR_0, struct vringh *VAR_1)
{
 struct cfv_info *VAR_2 = VAR_0->priv;

 ++VAR_2->stats.rx_kicks;
 FUNC_1(VAR_2->vr_rx);
 FUNC_0(&VAR_2->napi);
}
