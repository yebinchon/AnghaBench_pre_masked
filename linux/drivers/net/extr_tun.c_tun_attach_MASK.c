
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int queue_index; } ;
struct TYPE_10__ {TYPE_6__* sk; } ;
struct tun_struct {int flags; int numqueues; scalar_t__ numdisabled; int filter_attached; int queue_index; int * tfiles; int tun; int sk; int xdp_prog; scalar_t__ detached; TYPE_2__ xdp_rxq; struct net_device* dev; TYPE_1__ socket; int tx_ring; int fprog; int security; } ;
struct tun_file {int flags; int numqueues; scalar_t__ numdisabled; int filter_attached; int queue_index; int * tfiles; int tun; int sk; int xdp_prog; scalar_t__ detached; TYPE_2__ xdp_rxq; struct net_device* dev; TYPE_1__ socket; int tx_ring; int fprog; int security; } ;
struct net_device {int tx_queue_len; } ;
struct file {struct tun_struct* private_data; } ;
struct TYPE_12__ {int sk_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,struct tun_struct*) ;
 int FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (int *,TYPE_6__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct tun_struct*) ;
 int FUNC_11 (struct tun_struct*,struct tun_struct*,int,int) ;
 int VAR_10 ;
 int FUNC_12 (struct tun_struct*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,struct net_device*,int) ;
 int FUNC_15 (TYPE_2__*,int ,int *) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_17(struct tun_struct *VAR_11, struct file *VAR_12,
        bool VAR_13, bool VAR_14, bool VAR_15,
        bool VAR_16)
{
 struct tun_file *VAR_17 = VAR_12->private_data;
 struct net_device *VAR_18 = VAR_11->dev;
 int VAR_19;

 VAR_19 = FUNC_6(VAR_17->socket.sk, VAR_11->security);
 if (VAR_19 < 0)
  goto out;

 VAR_19 = -VAR_2;
 if (FUNC_5(VAR_17->tun) && !VAR_17->detached)
  goto out;

 VAR_19 = -VAR_1;
 if (!(VAR_11->flags & VAR_5) && VAR_11->numqueues == 1)
  goto out;

 VAR_19 = -VAR_0;
 if (!VAR_17->detached &&
     VAR_11->numqueues + VAR_11->numdisabled == VAR_6)
  goto out;

 VAR_19 = 0;


 if (!VAR_13 && (VAR_11->filter_attached == 1)) {
  FUNC_1(VAR_17->socket.sk);
  VAR_19 = FUNC_7(&VAR_11->fprog, VAR_17->socket.sk);
  FUNC_4(VAR_17->socket.sk);
  if (!VAR_19)
   goto out;
 }

 if (!VAR_17->detached &&
     FUNC_2(&VAR_17->tx_ring, VAR_18->tx_queue_len,
       VAR_4, VAR_10)) {
  VAR_19 = -VAR_3;
  goto out;
 }

 VAR_17->queue_index = VAR_11->numqueues;
 VAR_17->socket.sk->sk_shutdown &= ~VAR_8;

 if (VAR_17->detached) {

  FUNC_0(!FUNC_13(&VAR_17->xdp_rxq));

  if (VAR_17->xdp_rxq.queue_index != VAR_17->queue_index)
   VAR_17->xdp_rxq.queue_index = VAR_17->queue_index;
 } else {

  VAR_19 = FUNC_14(&VAR_17->xdp_rxq,
           VAR_11->dev, VAR_17->queue_index);
  if (VAR_19 < 0)
   goto out;
  VAR_19 = FUNC_15(&VAR_17->xdp_rxq,
       VAR_7, ((void*)0));
  if (VAR_19 < 0) {
   FUNC_16(&VAR_17->xdp_rxq);
   goto out;
  }
  VAR_19 = 0;
 }

 if (VAR_17->detached) {
  FUNC_10(VAR_17);
 } else {
  FUNC_8(&VAR_17->sk);
  FUNC_11(VAR_11, VAR_17, VAR_14, VAR_15);
 }

 if (FUNC_5(VAR_11->xdp_prog))
  FUNC_9(&VAR_17->sk, VAR_9);
 if (VAR_16)
  FUNC_3(VAR_17->tun, VAR_11);
 FUNC_3(VAR_11->tfiles[VAR_11->numqueues], VAR_17);
 VAR_11->numqueues++;
 FUNC_12(VAR_11);
out:
 return VAR_19;
}
