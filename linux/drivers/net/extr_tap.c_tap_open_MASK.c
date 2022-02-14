
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct virtio_net_hdr {int dummy; } ;
struct TYPE_12__ {int sk_destruct; int sk_write_space; } ;
struct TYPE_11__ {int wait; } ;
struct TYPE_13__ {int * ops; struct file* file; int state; int type; TYPE_2__ wq; } ;
struct tap_queue {int flags; int vnet_hdr_sz; TYPE_3__ sk; TYPE_5__ sock; int ring; } ;
struct tap_dev {TYPE_8__* dev; } ;
struct net {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_15__ {TYPE_1__* nsproxy; } ;
struct TYPE_14__ {int features; int tx_queue_len; } ;
struct TYPE_10__ {struct net* net_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_9__* VAR_12 ;
 struct tap_dev* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct net*,int ,int ,int *,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int VAR_13 ;
 int FUNC_13 (struct tap_dev*,struct file*,struct tap_queue*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_17, struct file *VAR_18)
{
 struct net *VAR_19 = VAR_12->nsproxy->net_ns;
 struct tap_dev *VAR_20;
 struct tap_queue *VAR_21;
 int VAR_22 = -VAR_1;

 FUNC_6();
 VAR_20 = FUNC_0(FUNC_2(VAR_17), FUNC_3(VAR_17));
 if (!VAR_20)
  goto err;

 VAR_22 = -VAR_2;
 VAR_21 = (struct tap_queue *)FUNC_8(VAR_19, VAR_0, VAR_3,
          &VAR_13, 0);
 if (!VAR_21)
  goto err;
 if (FUNC_5(&VAR_21->ring, VAR_20->dev->tx_queue_len, VAR_3)) {
  FUNC_9(&VAR_21->sk);
  goto err;
 }

 FUNC_4(&VAR_21->sock.wq.wait);
 VAR_21->sock.type = VAR_9;
 VAR_21->sock.state = VAR_11;
 VAR_21->sock.file = VAR_18;
 VAR_21->sock.ops = &VAR_16;
 FUNC_10(&VAR_21->sock, &VAR_21->sk);
 VAR_21->sk.sk_write_space = VAR_15;
 VAR_21->sk.sk_destruct = VAR_14;
 VAR_21->flags = VAR_6 | VAR_4 | VAR_5;
 VAR_21->vnet_hdr_sz = sizeof(struct virtio_net_hdr);
 if ((VAR_20->dev->features & VAR_7) && (VAR_20->dev->features & VAR_8))
  FUNC_12(&VAR_21->sk, VAR_10);

 VAR_22 = FUNC_13(VAR_20, VAR_18, VAR_21);
 if (VAR_22) {

  goto err_put;
 }

 FUNC_1(VAR_20->dev);

 FUNC_7();
 return VAR_22;

err_put:
 FUNC_11(&VAR_21->sk);
err:
 if (VAR_20)
  FUNC_1(VAR_20->dev);

 FUNC_7();
 return VAR_22;
}
