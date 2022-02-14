
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {TYPE_2__* ops; struct sock* sk; } ;
struct sock {int dummy; } ;
struct nvme_tcp_queue {scalar_t__ nr_cqe; struct socket* sock; } ;
struct TYPE_5__ {struct nvme_tcp_queue* data; } ;
struct TYPE_7__ {int count; TYPE_1__ arg; } ;
typedef TYPE_3__ read_descriptor_t ;
struct TYPE_6__ {int (* read_sock ) (struct sock*,TYPE_3__*,int ) ;} ;


 int FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_tcp_queue *VAR_1)
{
 struct socket *VAR_2 = VAR_1->sock;
 struct sock *VAR_3 = VAR_2->sk;
 read_descriptor_t VAR_4;
 int VAR_5;

 VAR_4.arg.data = VAR_1;
 VAR_4.count = 1;
 FUNC_0(VAR_3);
 VAR_1->nr_cqe = 0;
 VAR_5 = VAR_2->ops->read_sock(VAR_3, &VAR_4, VAR_0);
 FUNC_1(VAR_3);
 return VAR_5;
}
