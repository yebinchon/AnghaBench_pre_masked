
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vring_desc {int addr; } ;
struct virtio_net_hdr {int dummy; } ;
struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vring {TYPE_1__* vq; } ;
struct TYPE_2__ {struct virtio_device* vdev; } ;


 int FUNC_0 (struct virtio_net_hdr*,int ,int) ;
 struct virtio_net_hdr* FUNC_1 (int ) ;
 int FUNC_2 (struct virtio_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct mlxbf_tmfifo_vring *VAR_0,
           struct vring_desc *VAR_1, bool VAR_2)
{
 struct virtio_device *VAR_3 = VAR_0->vq->vdev;
 struct virtio_net_hdr *VAR_4;

 VAR_4 = FUNC_1(FUNC_2(VAR_3, VAR_1->addr));
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
}
