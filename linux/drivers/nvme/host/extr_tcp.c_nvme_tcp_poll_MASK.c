
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_receive_queue; } ;
struct nvme_tcp_queue {int nr_cqe; TYPE_1__* sock; } ;
struct blk_mq_hw_ctx {struct nvme_tcp_queue* driver_data; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int FUNC_0 (struct nvme_tcp_queue*) ;
 int FUNC_1 (struct sock*,int) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct blk_mq_hw_ctx *VAR_0)
{
 struct nvme_tcp_queue *VAR_1 = VAR_0->driver_data;
 struct sock *VAR_2 = VAR_1->sock->sk;

 if (FUNC_2(VAR_2) && FUNC_3(&VAR_2->sk_receive_queue))
  FUNC_1(VAR_2, 1);
 FUNC_0(VAR_1);
 return VAR_1->nr_cqe;
}
