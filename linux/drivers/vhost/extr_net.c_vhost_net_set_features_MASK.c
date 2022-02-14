
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct virtio_net_hdr_mrg_rxbuf {int dummy; } ;
struct virtio_net_hdr {int dummy; } ;
struct TYPE_7__ {int mutex; } ;
struct vhost_net {TYPE_3__ dev; TYPE_2__* vqs; } ;
struct TYPE_5__ {unsigned long long acked_features; int mutex; } ;
struct TYPE_6__ {size_t vhost_hlen; size_t sock_hlen; TYPE_1__ vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct vhost_net *VAR_7, u64 VAR_8)
{
 size_t VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_11 = (VAR_8 & ((1ULL << VAR_6) |
          (1ULL << VAR_5))) ?
   sizeof(struct virtio_net_hdr_mrg_rxbuf) :
   sizeof(struct virtio_net_hdr);
 if (VAR_8 & (1 << VAR_2)) {

  VAR_9 = VAR_11;
  VAR_10 = 0;
 } else {

  VAR_9 = 0;
  VAR_10 = VAR_11;
 }
 FUNC_0(&VAR_7->dev.mutex);
 if ((VAR_8 & (1 << VAR_1)) &&
     !FUNC_3(&VAR_7->dev))
  goto out_unlock;

 if ((VAR_8 & (1ULL << VAR_4))) {
  if (FUNC_2(&VAR_7->dev, 1))
   goto out_unlock;
 }

 for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12) {
  FUNC_0(&VAR_7->vqs[VAR_12].vq.mutex);
  VAR_7->vqs[VAR_12].vq.acked_features = VAR_8;
  VAR_7->vqs[VAR_12].vhost_hlen = VAR_9;
  VAR_7->vqs[VAR_12].sock_hlen = VAR_10;
  FUNC_1(&VAR_7->vqs[VAR_12].vq.mutex);
 }
 FUNC_1(&VAR_7->dev.mutex);
 return 0;

out_unlock:
 FUNC_1(&VAR_7->dev.mutex);
 return -VAR_0;
}
