
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nx_host_sds_ring {int crb_sts_consumer; } ;
struct netxen_recv_context {struct nx_host_sds_ring* sds_rings; TYPE_4__* rds_rings; } ;
struct TYPE_6__ {int revision_id; } ;
struct netxen_adapter {int physical_port; scalar_t__ is_up; int max_sds_rings; TYPE_3__* tx_ring; TYPE_2__ ahw; int crb_int_state_reg; TYPE_1__* pdev; struct netxen_recv_context recv_ctx; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_8__ {int crb_rcv_producer; } ;
struct TYPE_7__ {int crb_cmd_producer; int crb_cmd_consumer; int * hw_consumer; } ;
struct TYPE_5__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct netxen_adapter*,scalar_t__) ;
 int FUNC_1 (struct netxen_adapter*,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,int ,int ) ;
 struct netxen_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_19, struct ethtool_regs *VAR_20, void *VAR_21)
{
 struct netxen_adapter *VAR_22 = FUNC_5(VAR_19);
 struct netxen_recv_context *VAR_23 = &VAR_22->recv_ctx;
 struct nx_host_sds_ring *VAR_24;
 u32 *VAR_25 = VAR_21;
 int VAR_26, VAR_27 = 0;
 int VAR_28 = VAR_22->physical_port;

 FUNC_4(VAR_21, 0, VAR_11);

 VAR_20->version = (1 << 24) | (VAR_22->ahw.revision_id << 16) |
     (VAR_22->pdev)->device;

 if (VAR_22->is_up != VAR_5)
  return;

 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_0);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_2);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_1);
 VAR_25[VAR_27++] = FUNC_1(VAR_22, VAR_22->crb_int_state_reg);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_17);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_18);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_14);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_15);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_16);

 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_6+0x3c);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_7+0x3c);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_8+0x3c);
 VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_9+0x3c);

 if (FUNC_2(VAR_22->ahw.revision_id)) {

  VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_10+0x3c);
  VAR_27 += 2;

  VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_4);
  VAR_25[VAR_27++] = FUNC_3(*(VAR_22->tx_ring->hw_consumer));

 } else {
  VAR_27++;

  VAR_25[VAR_27++] = FUNC_0(VAR_22,
     VAR_12+(0x10000*VAR_28));
  VAR_25[VAR_27++] = FUNC_0(VAR_22,
     VAR_13+(0x10000*VAR_28));

  VAR_25[VAR_27++] = FUNC_0(VAR_22, VAR_3);
  VAR_25[VAR_27++] = FUNC_1(VAR_22,
     VAR_22->tx_ring->crb_cmd_consumer);
 }

 VAR_25[VAR_27++] = FUNC_1(VAR_22, VAR_22->tx_ring->crb_cmd_producer);

 VAR_25[VAR_27++] = FUNC_1(VAR_22,
    VAR_23->rds_rings[0].crb_rcv_producer);
 VAR_25[VAR_27++] = FUNC_1(VAR_22,
    VAR_23->rds_rings[1].crb_rcv_producer);

 VAR_25[VAR_27++] = VAR_22->max_sds_rings;

 for (VAR_26 = 0; VAR_26 < VAR_22->max_sds_rings; VAR_26++) {
  VAR_24 = &(VAR_23->sds_rings[VAR_26]);
  VAR_25[VAR_27++] = FUNC_1(VAR_22,
     VAR_24->crb_sts_consumer);
 }
}
