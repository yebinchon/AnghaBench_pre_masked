
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xdp_buff {int dummy; } ;
typedef void vhost_virtqueue ;
struct TYPE_7__ {int * page; } ;
struct vhost_dev {int dummy; } ;
struct vhost_net {scalar_t__ refcnt_bias; TYPE_3__ page_frag; scalar_t__ poll; TYPE_2__* vqs; struct vhost_dev dev; } ;
struct inode {int dummy; } ;
struct file {struct vhost_net* private_data; } ;
struct TYPE_8__ {void** queue; } ;
struct TYPE_5__ {int handle_kick; } ;
struct TYPE_6__ {TYPE_4__ rxq; int * rx_ring; scalar_t__ sock_hlen; scalar_t__ vhost_hlen; scalar_t__ batched_xdp; scalar_t__ done_idx; scalar_t__ upend_idx; int * ubuf_info; int * ubufs; TYPE_1__ vq; struct xdp_buff* xdp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (void**) ;
 void* FUNC_1 (int,int,int) ;
 int FUNC_2 (struct vhost_net*) ;
 struct vhost_net* FUNC_3 (int,int) ;
 int FUNC_4 (struct vhost_dev*,void**,int,scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (scalar_t__,int ,int ,struct vhost_dev*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_16, struct file *VAR_17)
{
 struct vhost_net *VAR_18;
 struct vhost_dev *VAR_19;
 struct vhost_virtqueue **VAR_20;
 void **VAR_21;
 struct xdp_buff *VAR_22;
 int VAR_23;

 VAR_18 = FUNC_3(sizeof *VAR_18, VAR_3 | VAR_11);
 if (!VAR_18)
  return -VAR_0;
 VAR_20 = FUNC_1(VAR_7, sizeof(*VAR_20), VAR_3);
 if (!VAR_20) {
  FUNC_2(VAR_18);
  return -VAR_0;
 }

 VAR_21 = FUNC_1(VAR_5, sizeof(void *),
         VAR_3);
 if (!VAR_21) {
  FUNC_0(VAR_20);
  FUNC_2(VAR_18);
  return -VAR_0;
 }
 VAR_18->vqs[VAR_8].rxq.queue = VAR_21;

 VAR_22 = FUNC_1(VAR_5, sizeof(*VAR_22), VAR_3);
 if (!VAR_22) {
  FUNC_0(VAR_20);
  FUNC_2(VAR_18);
  FUNC_0(VAR_21);
  return -VAR_0;
 }
 VAR_18->vqs[VAR_9].xdp = VAR_22;

 VAR_19 = &VAR_18->dev;
 VAR_20[VAR_9] = &VAR_18->vqs[VAR_9].vq;
 VAR_20[VAR_8] = &VAR_18->vqs[VAR_8].vq;
 VAR_18->vqs[VAR_9].vq.handle_kick = VAR_14;
 VAR_18->vqs[VAR_8].vq.handle_kick = VAR_12;
 for (VAR_23 = 0; VAR_23 < VAR_7; VAR_23++) {
  VAR_18->vqs[VAR_23].ubufs = ((void*)0);
  VAR_18->vqs[VAR_23].ubuf_info = ((void*)0);
  VAR_18->vqs[VAR_23].upend_idx = 0;
  VAR_18->vqs[VAR_23].done_idx = 0;
  VAR_18->vqs[VAR_23].batched_xdp = 0;
  VAR_18->vqs[VAR_23].vhost_hlen = 0;
  VAR_18->vqs[VAR_23].sock_hlen = 0;
  VAR_18->vqs[VAR_23].rx_ring = ((void*)0);
  FUNC_5(&VAR_18->vqs[VAR_23].rxq);
 }
 FUNC_4(VAR_19, VAR_20, VAR_7,
         VAR_4 + VAR_5,
         VAR_6, VAR_10);

 FUNC_6(VAR_18->poll + VAR_9, VAR_15, VAR_2, VAR_19);
 FUNC_6(VAR_18->poll + VAR_8, VAR_13, VAR_1, VAR_19);

 VAR_17->private_data = VAR_18;
 VAR_18->page_frag.page = ((void*)0);
 VAR_18->refcnt_bias = 0;

 return 0;
}
