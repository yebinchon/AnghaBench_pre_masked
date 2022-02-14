
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net_buf {scalar_t__ tail; scalar_t__ head; scalar_t__ queue; } ;
struct vhost_net_virtqueue {scalar_t__ rx_ring; struct vhost_net_buf rxq; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vhost_net_buf*) ;
 int FUNC_2 (struct vhost_net_buf*) ;

__attribute__((used)) static void FUNC_3(struct vhost_net_virtqueue *VAR_1)
{
 struct vhost_net_buf *VAR_2 = &VAR_1->rxq;

 if (VAR_1->rx_ring && !FUNC_2(VAR_2)) {
  FUNC_0(VAR_1->rx_ring, VAR_2->queue + VAR_2->head,
       FUNC_1(VAR_2),
       VAR_0);
  VAR_2->head = VAR_2->tail = 0;
 }
}
