
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net_buf {int tail; int queue; scalar_t__ head; } ;
struct vhost_net_virtqueue {int rx_ring; struct vhost_net_buf rxq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vhost_net_virtqueue *VAR_1)
{
 struct vhost_net_buf *VAR_2 = &VAR_1->rxq;

 VAR_2->head = 0;
 VAR_2->tail = FUNC_0(VAR_1->rx_ring, VAR_2->queue,
           VAR_0);
 return VAR_2->tail;
}
