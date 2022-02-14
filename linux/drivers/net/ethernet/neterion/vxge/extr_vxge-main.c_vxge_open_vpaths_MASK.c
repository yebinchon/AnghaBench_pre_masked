
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_18__ {int vpath_open_fail; int vpaths_open; } ;
struct TYPE_30__ {int fifo_indicate_max_pkts; scalar_t__ tx_steering_type; } ;
struct vxgedev {int no_of_vpath; int vpaths_deployed; TYPE_15__* ndev; TYPE_12__ stats; int vlan_tag_strip; TYPE_14__** vp_handles; int rx_hwts; TYPE_9__ config; int pdev; TYPE_13__* devh; int mtu; int titan1; struct vxge_vpath* vpaths; } ;
struct TYPE_29__ {int syncp; } ;
struct TYPE_17__ {int vlan_tag_strip; int rx_hwts; scalar_t__ rx_vector_no; TYPE_8__ stats; struct __vxge_hw_ring* handle; int pdev; TYPE_15__* ndev; } ;
struct TYPE_28__ {int syncp; } ;
struct TYPE_16__ {scalar_t__ tx_vector_no; int indicate_max_pkts; void* txq; TYPE_7__ stats; int pdev; TYPE_15__* ndev; scalar_t__ tx_steering_type; struct __vxge_hw_fifo* handle; } ;
struct vxge_vpath {size_t device_id; int is_open; TYPE_14__* handle; TYPE_11__ ring; TYPE_10__ fifo; int is_configured; } ;
struct vxge_tx_priv {int dummy; } ;
struct vxge_rx_priv {int dummy; } ;
struct TYPE_27__ {int per_rxd_space; TYPE_11__* userdata; int rxd_term; int rxd_init; int callback; } ;
struct TYPE_26__ {int per_txdl_space; TYPE_10__* userdata; int txdl_term; int callback; } ;
struct vxge_hw_vpath_attr {size_t vp_id; TYPE_6__ ring_attr; TYPE_5__ fifo_attr; } ;
struct TYPE_25__ {int rtimer_val; int ltimer_val; int uec_d; int uec_c; int uec_b; int uec_a; } ;
struct TYPE_24__ {int urange_c; int urange_b; int urange_a; } ;
struct vxge_hw_vp_config {TYPE_4__ tti; TYPE_3__ rti; } ;
struct __vxge_hw_ring {int dummy; } ;
struct __vxge_hw_fifo {int dummy; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_23__ {struct vxge_hw_vp_config* vp_config; } ;
struct TYPE_22__ {int vp_id; } ;
struct TYPE_21__ {int name; } ;
struct TYPE_20__ {TYPE_1__* vpath; } ;
struct TYPE_19__ {TYPE_2__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (TYPE_15__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vxgedev*,int ) ;
 int FUNC_6 (int ,char*,int ,size_t,int) ;
 int FUNC_7 (TYPE_13__*,struct vxge_hw_vpath_attr*,TYPE_14__**) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_9(struct vxgedev *VAR_15)
{
 struct vxge_hw_vpath_attr VAR_16;
 enum vxge_hw_status VAR_17;
 struct vxge_vpath *VAR_18;
 u32 VAR_19 = 0;
 int VAR_20;

 for (VAR_20 = 0; VAR_20 < VAR_15->no_of_vpath; VAR_20++) {
  VAR_18 = &VAR_15->vpaths[VAR_20];
  FUNC_4(VAR_18->is_configured);

  if (!VAR_15->titan1) {
   struct vxge_hw_vp_config *VAR_21;
   VAR_21 = &VAR_15->devh->config.vp_config[VAR_18->device_id];

   VAR_21->rti.urange_a = VAR_1;
   VAR_21->rti.urange_b = VAR_2;
   VAR_21->rti.urange_c = VAR_3;
   VAR_21->tti.uec_a = VAR_4;
   VAR_21->tti.uec_b = VAR_5;
   VAR_21->tti.uec_c = FUNC_0(VAR_15->mtu);
   VAR_21->tti.uec_d = FUNC_1(VAR_15->mtu);
   VAR_21->tti.ltimer_val = VAR_8;
   VAR_21->tti.rtimer_val = VAR_9;
  }

  VAR_16.vp_id = VAR_18->device_id;
  VAR_16.fifo_attr.callback = VAR_14;
  VAR_16.fifo_attr.txdl_term = VAR_13;
  VAR_16.fifo_attr.per_txdl_space = sizeof(struct vxge_tx_priv);
  VAR_16.fifo_attr.userdata = &VAR_18->fifo;

  VAR_16.ring_attr.callback = VAR_10;
  VAR_16.ring_attr.rxd_init = VAR_11;
  VAR_16.ring_attr.rxd_term = VAR_12;
  VAR_16.ring_attr.per_rxd_space = sizeof(struct vxge_rx_priv);
  VAR_16.ring_attr.userdata = &VAR_18->ring;

  VAR_18->ring.ndev = VAR_15->ndev;
  VAR_18->ring.pdev = VAR_15->pdev;

  VAR_17 = FUNC_7(VAR_15->devh, &VAR_16, &VAR_18->handle);
  if (VAR_17 == VAR_7) {
   VAR_18->fifo.handle =
       (struct __vxge_hw_fifo *)VAR_16.fifo_attr.userdata;
   VAR_18->ring.handle =
       (struct __vxge_hw_ring *)VAR_16.ring_attr.userdata;
   VAR_18->fifo.tx_steering_type =
    VAR_15->config.tx_steering_type;
   VAR_18->fifo.ndev = VAR_15->ndev;
   VAR_18->fifo.pdev = VAR_15->pdev;

   FUNC_3(&VAR_18->fifo.stats.syncp);
   FUNC_3(&VAR_18->ring.stats.syncp);

   if (VAR_15->config.tx_steering_type)
    VAR_18->fifo.txq =
     FUNC_2(VAR_15->ndev, VAR_20);
   else
    VAR_18->fifo.txq =
     FUNC_2(VAR_15->ndev, 0);
   VAR_18->fifo.indicate_max_pkts =
    VAR_15->config.fifo_indicate_max_pkts;
   VAR_18->fifo.tx_vector_no = 0;
   VAR_18->ring.rx_vector_no = 0;
   VAR_18->ring.rx_hwts = VAR_15->rx_hwts;
   VAR_18->is_open = 1;
   VAR_15->vp_handles[VAR_20] = VAR_18->handle;
   VAR_18->ring.vlan_tag_strip = VAR_15->vlan_tag_strip;
   VAR_15->stats.vpaths_open++;
  } else {
   VAR_15->stats.vpath_open_fail++;
   FUNC_6(VAR_6, "%s: vpath: %d failed to "
     "open with status: %d",
     VAR_15->ndev->name, VAR_18->device_id,
     VAR_17);
   FUNC_5(VAR_15, 0);
   return -VAR_0;
  }

  VAR_19 = VAR_18->handle->vpath->vp_id;
  VAR_15->vpaths_deployed |= FUNC_8(VAR_19);
 }

 return VAR_7;
}
