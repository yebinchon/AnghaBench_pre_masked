
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct vnic_rq_buf {struct sk_buff* os_buf; int len; int dma_addr; } ;
struct vnic_rq {size_t index; int vdev; } ;
struct vnic_cq {int pkt_size_counter; } ;
struct sk_buff {int csum_level; int ip_summed; int protocol; scalar_t__ data; } ;
struct net_device {int features; } ;
struct TYPE_4__ {scalar_t__ use_adaptive_rx_coalesce; } ;
struct TYPE_3__ {int patch_level; scalar_t__ vxlan_udp_port_number; } ;
struct enic {int pdev; TYPE_2__ rx_coalesce_setting; int * napi; TYPE_1__ vxlan; int rq_truncated_pkts; int rq_bad_fcs; struct vnic_cq* cq; struct net_device* netdev; } ;
struct cq_enet_rq_desc {int dummy; } ;
struct cq_desc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_2 (struct cq_enet_rq_desc*,int*,int*,scalar_t__*,scalar_t__*,int*,int*,int*,int*,int*,int*,int*,scalar_t__*,int*,int*,scalar_t__*,scalar_t__*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_3 (struct sk_buff*) ;
 size_t FUNC_4 (struct enic*,size_t) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct net_device*,struct sk_buff**,struct vnic_rq_buf*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct sk_buff*,int *) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 int FUNC_16 (struct sk_buff*,int,int ) ;
 struct enic* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct vnic_rq *VAR_9,
 struct cq_desc *VAR_10, struct vnic_rq_buf *VAR_11,
 int VAR_12, void *VAR_13)
{
 struct enic *VAR_14 = FUNC_17(VAR_9->vdev);
 struct net_device *VAR_15 = VAR_14->netdev;
 struct sk_buff *VAR_16;
 struct vnic_cq *VAR_17 = &VAR_14->cq[FUNC_4(VAR_14, VAR_9->index)];

 u8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 u8 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 u8 VAR_29, VAR_30, VAR_31, VAR_32;
 u8 VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
 u8 VAR_39;
 u16 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 u32 VAR_45;
 bool VAR_46 = 1, VAR_47 = 0;

 if (VAR_12)
  return;

 VAR_16 = VAR_11->os_buf;

 FUNC_2((struct cq_enet_rq_desc *)VAR_10,
  &VAR_18, &VAR_19, &VAR_40, &VAR_41,
  &VAR_22, &VAR_24, &VAR_20, &VAR_21, &VAR_37,
  &VAR_38, &VAR_45, &VAR_42,
  &VAR_39, &VAR_23, &VAR_43, &VAR_44,
  &VAR_25, &VAR_26, &VAR_27,
  &VAR_28, &VAR_29, &VAR_30, &VAR_31,
  &VAR_32, &VAR_33, &VAR_34, &VAR_35,
  &VAR_36);

 if (VAR_39) {

  if (!VAR_36) {
   if (VAR_42 > 0)
    VAR_14->rq_bad_fcs++;
   else if (VAR_42 == 0)
    VAR_14->rq_truncated_pkts++;
  }

  FUNC_11(VAR_14->pdev, VAR_11->dma_addr, VAR_11->len,
     VAR_6);
  FUNC_3(VAR_16);
  VAR_11->os_buf = ((void*)0);

  return;
 }

 if (VAR_20 && VAR_42 > 0) {




  if (!FUNC_6(VAR_15, &VAR_16, VAR_11, VAR_42)) {
   VAR_11->os_buf = ((void*)0);
   FUNC_11(VAR_14->pdev, VAR_11->dma_addr, VAR_11->len,
      VAR_6);
  }
  FUNC_12(VAR_16->data - VAR_5);

  FUNC_14(VAR_16, VAR_42);
  VAR_16->protocol = FUNC_7(VAR_16, VAR_15);
  FUNC_15(VAR_16, VAR_40);
  if ((VAR_15->features & VAR_4) && VAR_45 &&
      (VAR_18 == 3)) {
   switch (VAR_37) {
   case 130:
   case 129:
   case 128:
    FUNC_16(VAR_16, VAR_45, VAR_8);
    break;
   case 133:
   case 132:
   case 131:
    FUNC_16(VAR_16, VAR_45, VAR_7);
    break;
   }
  }
  if (VAR_14->vxlan.vxlan_udp_port_number) {
   switch (VAR_14->vxlan.patch_level) {
   case 0:
    if (VAR_24) {
     VAR_47 = 1;
     VAR_46 = VAR_26;
    }
    break;
   case 2:
    if ((VAR_18 == 7) &&
        (VAR_45 & FUNC_0(0))) {
     VAR_47 = 1;
     VAR_46 = (VAR_45 & FUNC_0(1)) &&
       (VAR_45 & FUNC_0(2));
    }
    break;
   }
  }
  if ((VAR_15->features & VAR_3) && !VAR_38 &&
      VAR_29 && VAR_46 &&
      (VAR_32 || VAR_33)) {
   VAR_16->ip_summed = VAR_0;
   VAR_16->csum_level = VAR_47;
  }

  if (VAR_23)
   FUNC_1(VAR_16, FUNC_8(VAR_1), VAR_43);

  FUNC_13(VAR_16, &VAR_14->napi[VAR_9->index]);
  if (!(VAR_15->features & VAR_2))
   FUNC_10(VAR_16);
  else
   FUNC_9(&VAR_14->napi[VAR_40], VAR_16);
  if (VAR_14->rx_coalesce_setting.use_adaptive_rx_coalesce)
   FUNC_5(&VAR_17->pkt_size_counter,
        VAR_42);
 } else {




  FUNC_11(VAR_14->pdev, VAR_11->dma_addr, VAR_11->len,
     VAR_6);
  FUNC_3(VAR_16);
  VAR_11->os_buf = ((void*)0);
 }
}
