
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_net_virtqueue {scalar_t__ rx_ring; } ;
struct TYPE_2__ {int lock; } ;
struct sock {TYPE_1__ sk_receive_queue; } ;
struct sk_buff {int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct vhost_net_virtqueue*) ;

__attribute__((used)) static int FUNC_6(struct vhost_net_virtqueue *VAR_1, struct sock *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4 = 0;
 unsigned long VAR_5;

 if (VAR_1->rx_ring)
  return FUNC_5(VAR_1);

 FUNC_3(&VAR_2->sk_receive_queue.lock, VAR_5);
 VAR_3 = FUNC_1(&VAR_2->sk_receive_queue);
 if (FUNC_0(VAR_3)) {
  VAR_4 = VAR_3->len;
  if (FUNC_2(VAR_3))
   VAR_4 += VAR_0;
 }

 FUNC_4(&VAR_2->sk_receive_queue.lock, VAR_5);
 return VAR_4;
}
