
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int mutex; struct vhost_net_ubuf_ref* private_data; } ;
struct vhost_net_virtqueue {struct vhost_net_ubuf_ref* ubufs; int rx_ring; struct vhost_virtqueue vq; } ;
struct vhost_net_ubuf_ref {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct vhost_net {int tx_flush; TYPE_1__ dev; scalar_t__ tx_zcopy_err; scalar_t__ tx_packets; struct vhost_net_virtqueue* vqs; } ;
typedef struct vhost_net_ubuf_ref socket ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vhost_net_ubuf_ref*) ;
 int FUNC_1 (struct vhost_net_ubuf_ref*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct vhost_net_ubuf_ref* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vhost_net_ubuf_ref*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct vhost_net_virtqueue*) ;
 int FUNC_9 (struct vhost_net*,struct vhost_virtqueue*) ;
 int FUNC_10 (struct vhost_net*,struct vhost_virtqueue*) ;
 int FUNC_11 (struct vhost_net*,unsigned int) ;
 struct vhost_net_ubuf_ref* FUNC_12 (struct vhost_virtqueue*,int) ;
 int FUNC_13 (struct vhost_net_ubuf_ref*) ;
 scalar_t__ FUNC_14 (struct vhost_net_ubuf_ref*) ;
 int FUNC_15 (struct vhost_virtqueue*) ;
 int FUNC_16 (struct vhost_virtqueue*) ;
 int FUNC_17 (struct vhost_net*,struct vhost_virtqueue*) ;

__attribute__((used)) static long FUNC_18(struct vhost_net *VAR_4, unsigned VAR_5, int VAR_6)
{
 struct socket *VAR_7, *VAR_8;
 struct vhost_virtqueue *VAR_9;
 struct vhost_net_virtqueue *VAR_10;
 struct vhost_net_ubuf_ref *VAR_11, *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_4(&VAR_4->dev.mutex);
 VAR_13 = FUNC_7(&VAR_4->dev);
 if (VAR_13)
  goto err;

 if (VAR_5 >= VAR_2) {
  VAR_13 = -VAR_1;
  goto err;
 }
 VAR_9 = &VAR_4->vqs[VAR_5].vq;
 VAR_10 = &VAR_4->vqs[VAR_5];
 FUNC_4(&VAR_9->mutex);


 if (!FUNC_15(VAR_9)) {
  VAR_13 = -VAR_0;
  goto err_vq;
 }
 VAR_7 = FUNC_2(VAR_6);
 if (FUNC_0(VAR_7)) {
  VAR_13 = FUNC_1(VAR_7);
  goto err_vq;
 }


 VAR_8 = VAR_9->private_data;
 if (VAR_7 != VAR_8) {
  VAR_11 = FUNC_12(VAR_9,
          VAR_7 && FUNC_14(VAR_7));
  if (FUNC_0(VAR_11)) {
   VAR_13 = FUNC_1(VAR_11);
   goto err_ubufs;
  }

  FUNC_9(VAR_4, VAR_9);
  VAR_9->private_data = VAR_7;
  FUNC_8(VAR_10);
  VAR_13 = FUNC_16(VAR_9);
  if (VAR_13)
   goto err_used;
  VAR_13 = FUNC_10(VAR_4, VAR_9);
  if (VAR_13)
   goto err_used;
  if (VAR_5 == VAR_3)
   VAR_10->rx_ring = FUNC_3(VAR_6);

  VAR_12 = VAR_10->ubufs;
  VAR_10->ubufs = VAR_11;

  VAR_4->tx_packets = 0;
  VAR_4->tx_zcopy_err = 0;
  VAR_4->tx_flush = 0;
 }

 FUNC_5(&VAR_9->mutex);

 if (VAR_12) {
  FUNC_13(VAR_12);
  FUNC_4(&VAR_9->mutex);
  FUNC_17(VAR_4, VAR_9);
  FUNC_5(&VAR_9->mutex);
 }

 if (VAR_8) {
  FUNC_11(VAR_4, VAR_5);
  FUNC_6(VAR_8);
 }

 FUNC_5(&VAR_4->dev.mutex);
 return 0;

err_used:
 VAR_9->private_data = VAR_8;
 FUNC_10(VAR_4, VAR_9);
 if (VAR_11)
  FUNC_13(VAR_11);
err_ubufs:
 if (VAR_7)
  FUNC_6(VAR_7);
err_vq:
 FUNC_5(&VAR_9->mutex);
err:
 FUNC_5(&VAR_4->dev.mutex);
 return VAR_13;
}
