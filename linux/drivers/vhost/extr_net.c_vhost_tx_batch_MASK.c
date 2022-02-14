
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_net_virtqueue {scalar_t__ batched_xdp; int vq; int xdp; } ;
struct vhost_net {int dummy; } ;
struct tun_msg_ctl {scalar_t__ num; int ptr; int type; } ;
struct socket {TYPE_1__* ops; } ;
struct msghdr {struct tun_msg_ctl* msg_control; } ;
struct TYPE_2__ {int (* sendmsg ) (struct socket*,struct msghdr*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,struct msghdr*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vhost_net_virtqueue*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(struct vhost_net *VAR_1,
      struct vhost_net_virtqueue *VAR_2,
      struct socket *VAR_3,
      struct msghdr *VAR_4)
{
 struct tun_msg_ctl VAR_5 = {
  .type = VAR_0,
  .num = VAR_2->batched_xdp,
  .ptr = VAR_2->xdp,
 };
 int VAR_6;

 if (VAR_2->batched_xdp == 0)
  goto signal_used;

 VAR_4->msg_control = &VAR_5;
 VAR_6 = VAR_3->ops->sendmsg(VAR_3, VAR_4, 0);
 if (FUNC_1(VAR_6 < 0)) {
  FUNC_3(&VAR_2->vq, "Fail to batch sending packets\n");
  return;
 }

signal_used:
 FUNC_2(VAR_2);
 VAR_2->batched_xdp = 0;
}
