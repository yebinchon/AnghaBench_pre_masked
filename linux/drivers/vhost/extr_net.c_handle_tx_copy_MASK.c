
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vhost_virtqueue {int num; TYPE_3__* heads; int poll; } ;
struct vhost_net_virtqueue {size_t done_idx; struct vhost_virtqueue vq; } ;
struct vhost_net {int dev; struct vhost_net_virtqueue* vqs; } ;
struct socket {TYPE_2__* ops; TYPE_1__* sk; } ;
struct msghdr {int msg_flags; int * msg_control; int msg_iter; int msg_controllen; int msg_namelen; int * msg_name; } ;
struct TYPE_6__ {scalar_t__ len; int id; } ;
struct TYPE_5__ {int (* sendmsg ) (struct socket*,struct msghdr*,size_t) ;} ;
struct TYPE_4__ {scalar_t__ sk_sndbuf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct vhost_virtqueue*,int) ;
 int FUNC_1 (struct vhost_net*,struct vhost_net_virtqueue*,struct msghdr*,unsigned int*,unsigned int*,size_t*,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,size_t) ;
 int FUNC_4 (struct socket*,struct msghdr*,size_t) ;
 scalar_t__ FUNC_5 (struct vhost_virtqueue*,size_t) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,struct vhost_virtqueue*) ;
 int FUNC_8 (struct vhost_virtqueue*,int) ;
 int FUNC_9 (int *,struct vhost_virtqueue*) ;
 int FUNC_10 (struct vhost_virtqueue*,int,size_t) ;
 int FUNC_11 (struct vhost_net_virtqueue*,int *) ;
 int FUNC_12 (struct vhost_net*,struct vhost_virtqueue*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct vhost_net*,struct vhost_net_virtqueue*,struct socket*,struct msghdr*) ;

__attribute__((used)) static void FUNC_15(struct vhost_net *VAR_6, struct socket *VAR_7)
{
 struct vhost_net_virtqueue *VAR_8 = &VAR_6->vqs[VAR_5];
 struct vhost_virtqueue *VAR_9 = &VAR_8->vq;
 unsigned VAR_10, VAR_11;
 int VAR_12;
 struct msghdr VAR_13 = {
  .msg_name = ((void*)0),
  .msg_namelen = 0,
  .msg_control = ((void*)0),
  .msg_controllen = 0,
  .msg_flags = VAR_2,
 };
 size_t VAR_14, VAR_15 = 0;
 int VAR_16;
 int VAR_17 = 0;
 bool VAR_18 = (VAR_7->sk->sk_sndbuf == VAR_1);

 do {
  bool VAR_19 = 0;

  if (VAR_8->done_idx == VAR_4)
   FUNC_14(VAR_6, VAR_8, VAR_7, &VAR_13);

  VAR_12 = FUNC_1(VAR_6, VAR_8, &VAR_13, &VAR_10, &VAR_11, &VAR_14,
       &VAR_19);

  if (FUNC_6(VAR_12 < 0))
   break;

  if (VAR_12 == VAR_9->num) {
   if (FUNC_6(VAR_19)) {
    FUNC_13(&VAR_9->poll);
   } else if (FUNC_6(FUNC_9(&VAR_6->dev,
        VAR_9))) {
    FUNC_7(&VAR_6->dev, VAR_9);
    continue;
   }
   break;
  }

  VAR_15 += VAR_14;




  if (VAR_18) {
   VAR_16 = FUNC_11(VAR_8, &VAR_13.msg_iter);
   if (!VAR_16) {
    goto done;
   } else if (FUNC_6(VAR_16 != -VAR_0)) {
    FUNC_14(VAR_6, VAR_8, VAR_7, &VAR_13);
    FUNC_8(VAR_9, 1);
    FUNC_12(VAR_6, VAR_9);
    break;
   }





   FUNC_14(VAR_6, VAR_8, VAR_7, &VAR_13);
   VAR_13.msg_control = ((void*)0);
  } else {
   if (FUNC_5(VAR_9, VAR_15))
    VAR_13.msg_flags |= VAR_3;
   else
    VAR_13.msg_flags &= ~VAR_3;
  }


  VAR_16 = VAR_7->ops->sendmsg(VAR_7, &VAR_13, VAR_14);
  if (FUNC_6(VAR_16 < 0)) {
   FUNC_8(VAR_9, 1);
   FUNC_12(VAR_6, VAR_9);
   break;
  }
  if (VAR_16 != VAR_14)
   FUNC_3("Truncated TX packet: len %d != %zd\n",
     VAR_16, VAR_14);
done:
  VAR_9->heads[VAR_8->done_idx].id = FUNC_0(VAR_9, VAR_12);
  VAR_9->heads[VAR_8->done_idx].len = 0;
  ++VAR_8->done_idx;
 } while (FUNC_2(!FUNC_10(VAR_9, ++VAR_17, VAR_15)));

 FUNC_14(VAR_6, VAR_8, VAR_7, &VAR_13);
}
