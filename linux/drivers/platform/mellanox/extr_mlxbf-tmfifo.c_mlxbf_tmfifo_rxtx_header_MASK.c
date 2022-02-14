
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vring_desc {int dummy; } ;
struct virtio_net_hdr {int dummy; } ;
struct virtio_net_config {scalar_t__ mtu; } ;
struct mlxbf_tmfifo_vring {int vdev_id; int cur_len; scalar_t__ pkt_len; scalar_t__ rem_len; struct vring_desc* desc; struct mlxbf_tmfifo* fifo; } ;
struct TYPE_2__ {struct virtio_net_config net; } ;
struct mlxbf_tmfifo_vdev {struct mlxbf_tmfifo_vring* vrings; TYPE_1__ config; } ;
struct mlxbf_tmfifo_msg_hdr {scalar_t__ len; void* type; } ;
struct mlxbf_tmfifo {struct mlxbf_tmfifo_vring** vring; scalar_t__ tx_base; struct mlxbf_tmfifo_vdev** vdev; scalar_t__ rx_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct mlxbf_tmfifo_vring*,struct vring_desc*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mlxbf_tmfifo_vring *VAR_6,
         struct vring_desc *VAR_7,
         bool VAR_8, bool *VAR_9)
{
 struct mlxbf_tmfifo *VAR_10 = VAR_6->fifo;
 struct virtio_net_config *VAR_11;
 struct mlxbf_tmfifo_msg_hdr VAR_12;
 int VAR_13, VAR_14;


 if (VAR_8) {

  *(u64 *)&VAR_12 = FUNC_3(VAR_10->rx_base + VAR_1);


  if (VAR_12.len == 0)
   return;


  if (VAR_12.type == VAR_5) {
   VAR_13 = VAR_5;
   VAR_14 = sizeof(struct virtio_net_hdr);
   VAR_11 = &VAR_10->vdev[VAR_13]->config.net;
   if (FUNC_2(VAR_12.len) > VAR_11->mtu +
       VAR_0)
    return;
  } else {
   VAR_13 = VAR_4;
   VAR_14 = 0;
  }





  if (VAR_13 != VAR_6->vdev_id) {
   struct mlxbf_tmfifo_vdev *VAR_15 = VAR_10->vdev[VAR_13];

   if (!VAR_15)
    return;
   VAR_6->desc = VAR_7;
   VAR_6 = &VAR_15->vrings[VAR_3];
   *VAR_9 = 1;
  }
  VAR_6->pkt_len = FUNC_2(VAR_12.len) + VAR_14;
 } else {

  VAR_14 = (VAR_6->vdev_id == VAR_5) ?
      sizeof(struct virtio_net_hdr) : 0;
  VAR_6->pkt_len = FUNC_1(VAR_6, VAR_7);
  VAR_12.type = (VAR_6->vdev_id == VAR_5) ?
       VAR_5 : VAR_4;
  VAR_12.len = FUNC_0(VAR_6->pkt_len - VAR_14);
  FUNC_4(*(u64 *)&VAR_12, VAR_10->tx_base + VAR_2);
 }

 VAR_6->cur_len = VAR_14;
 VAR_6->rem_len = VAR_6->pkt_len;
 VAR_10->vring[VAR_8] = VAR_6;
}
