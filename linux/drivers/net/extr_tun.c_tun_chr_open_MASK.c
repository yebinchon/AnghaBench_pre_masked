
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int sk_sndbuf; int sk_write_space; } ;
struct TYPE_9__ {int wait; } ;
struct TYPE_11__ {int * ops; struct file* file; TYPE_2__ wq; } ;
struct tun_file {TYPE_3__ sk; int next; TYPE_4__ socket; scalar_t__ ifindex; scalar_t__ flags; int tun; int napi_mutex; int tx_ring; } ;
struct net {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct tun_file* private_data; } ;
struct TYPE_12__ {TYPE_1__* nsproxy; } ;
struct TYPE_8__ {struct net* net_ns; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int VAR_5 ;
 TYPE_7__* VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct net*,int ,int ,int *,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_10, struct file * VAR_11)
{
 struct net *VAR_12 = VAR_6->nsproxy->net_ns;
 struct tun_file *VAR_13;

 FUNC_0(VAR_4, "tunX: tun_chr_open\n");

 VAR_13 = (struct tun_file *)FUNC_6(VAR_12, VAR_0, VAR_2,
         &VAR_7, 0);
 if (!VAR_13)
  return -VAR_1;
 if (FUNC_5(&VAR_13->tx_ring, 0, VAR_2)) {
  FUNC_7(&VAR_13->sk);
  return -VAR_1;
 }

 FUNC_4(&VAR_13->napi_mutex);
 FUNC_2(VAR_13->tun, ((void*)0));
 VAR_13->flags = 0;
 VAR_13->ifindex = 0;

 FUNC_3(&VAR_13->socket.wq.wait);

 VAR_13->socket.file = VAR_11;
 VAR_13->socket.ops = &VAR_9;

 FUNC_8(&VAR_13->socket, &VAR_13->sk);

 VAR_13->sk.sk_write_space = VAR_8;
 VAR_13->sk.sk_sndbuf = VAR_3;

 VAR_11->private_data = VAR_13;
 FUNC_1(&VAR_13->next);

 FUNC_9(&VAR_13->sk, VAR_5);

 return 0;
}
