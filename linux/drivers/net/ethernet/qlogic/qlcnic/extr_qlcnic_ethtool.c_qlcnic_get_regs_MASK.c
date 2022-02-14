
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_tx_ring {int sw_consumer; int producer; scalar_t__ crb_intr_mask; scalar_t__ crb_cmd_producer; int * hw_consumer; } ;
struct qlcnic_host_sds_ring {int consumer; scalar_t__ crb_intr_mask; scalar_t__ crb_sts_consumer; } ;
struct qlcnic_host_rds_ring {int producer; scalar_t__ crb_rcv_producer; } ;
struct qlcnic_adapter {int drv_tx_rings; int max_rds_rings; int drv_sds_rings; struct qlcnic_host_tx_ring* tx_ring; int state; TYPE_2__* ahw; TYPE_1__* pdev; struct qlcnic_recv_context* recv_ctx; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_4__ {int revision_id; int capabilities; int max_vnic_func; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int ) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int*) ;
 int FUNC_5 (struct qlcnic_adapter*,int*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct net_device *VAR_6, struct ethtool_regs *VAR_7, void *VAR_8)
{
 struct qlcnic_adapter *VAR_9 = FUNC_2(VAR_6);
 struct qlcnic_recv_context *VAR_10 = VAR_9->recv_ctx;
 struct qlcnic_host_sds_ring *VAR_11;
 struct qlcnic_host_rds_ring *VAR_12;
 struct qlcnic_host_tx_ring *VAR_13;
 u32 *VAR_14 = VAR_8;
 int VAR_15, VAR_16 = 0;

 FUNC_1(VAR_8, 0, FUNC_6(VAR_6));

 VAR_7->version = (VAR_1 << 24) |
  (VAR_9->ahw->revision_id << 16) | (VAR_9->pdev)->device;

 VAR_14[0] = (0xcafe0000 | (VAR_0 & 0xffff));
 VAR_14[1] = VAR_2;

 if (VAR_9->ahw->capabilities & VAR_4)
  VAR_14[2] = VAR_9->ahw->max_vnic_func;

 if (FUNC_3(VAR_9))
  VAR_16 = FUNC_4(VAR_9, VAR_14);
 else
  VAR_16 = FUNC_5(VAR_9, VAR_14);

 if (!FUNC_8(VAR_5, &VAR_9->state))
  return;


 VAR_14[VAR_16++] = 0xFFEFCDAB;

 VAR_14[VAR_16++] = VAR_9->drv_tx_rings;
 for (VAR_15 = 0; VAR_15 < VAR_9->drv_tx_rings; VAR_15++) {
  VAR_13 = &VAR_9->tx_ring[VAR_15];
  VAR_14[VAR_16++] = FUNC_0(*(VAR_13->hw_consumer));
  VAR_14[VAR_16++] = VAR_13->sw_consumer;
  VAR_14[VAR_16++] = FUNC_7(VAR_13->crb_cmd_producer);
  VAR_14[VAR_16++] = VAR_13->producer;
  if (VAR_13->crb_intr_mask)
   VAR_14[VAR_16++] = FUNC_7(VAR_13->crb_intr_mask);
  else
   VAR_14[VAR_16++] = VAR_3;
 }

 VAR_14[VAR_16++] = VAR_9->max_rds_rings;
 for (VAR_15 = 0; VAR_15 < VAR_9->max_rds_rings; VAR_15++) {
  VAR_12 = &VAR_10->rds_rings[VAR_15];
  VAR_14[VAR_16++] = FUNC_7(VAR_12->crb_rcv_producer);
  VAR_14[VAR_16++] = VAR_12->producer;
 }

 VAR_14[VAR_16++] = VAR_9->drv_sds_rings;
 for (VAR_15 = 0; VAR_15 < VAR_9->drv_sds_rings; VAR_15++) {
  VAR_11 = &(VAR_10->sds_rings[VAR_15]);
  VAR_14[VAR_16++] = FUNC_7(VAR_11->crb_sts_consumer);
  VAR_14[VAR_16++] = VAR_11->consumer;
  VAR_14[VAR_16++] = FUNC_7(VAR_11->crb_intr_mask);
 }
}
