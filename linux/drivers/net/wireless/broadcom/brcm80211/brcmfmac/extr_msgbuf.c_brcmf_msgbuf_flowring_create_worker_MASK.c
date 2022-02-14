
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_6__ {void* low_addr; void* high_addr; } ;
struct TYPE_5__ {scalar_t__ request_id; int ifidx; int msgtype; } ;
struct msgbuf_tx_flowring_create_req {int tid; void* len_item; void* max_items; TYPE_3__ flow_ring_addr; int da; int sa; void* flow_ring_id; TYPE_2__ msg; } ;
struct brcmf_pub {TYPE_1__* bus_if; } ;
struct brcmf_msgbuf_work_item {size_t flowid; int ifidx; int da; int sa; } ;
struct brcmf_msgbuf {scalar_t__* flowring_dma_handle; int flow; struct brcmf_commonring** commonrings; int * flowrings; struct brcmf_pub* drvr; } ;
struct brcmf_commonring {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,size_t,size_t,void*) ;
 int FUNC_2 (struct brcmf_commonring*) ;
 void* FUNC_3 (struct brcmf_commonring*) ;
 int FUNC_4 (struct brcmf_commonring*) ;
 int FUNC_5 (struct brcmf_commonring*) ;
 int FUNC_6 (int ,char*,size_t,int ,int ,int ) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (int ,size_t) ;
 int FUNC_9 (struct brcmf_msgbuf*,size_t) ;
 void* FUNC_10 (size_t) ;
 void* FUNC_11 (int) ;
 void* FUNC_12 (int ,size_t,scalar_t__*,int ) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static u32
FUNC_14(struct brcmf_msgbuf *VAR_9,
        struct brcmf_msgbuf_work_item *VAR_10)
{
 struct brcmf_pub *VAR_11 = VAR_9->drvr;
 struct msgbuf_tx_flowring_create_req *VAR_12;
 struct brcmf_commonring *VAR_13;
 void *VAR_14;
 u32 VAR_15;
 void *VAR_16;
 u32 VAR_17;
 u64 VAR_18;
 int VAR_19;

 VAR_15 = VAR_10->flowid;
 VAR_17 = VAR_4 * VAR_3;
 VAR_16 = FUNC_12(VAR_9->drvr->bus_if->dev, VAR_17,
         &VAR_9->flowring_dma_handle[VAR_15],
         VAR_6);
 if (!VAR_16) {
  FUNC_0(VAR_11, "dma_alloc_coherent failed\n");
  FUNC_7(VAR_9->flow, VAR_15);
  return VAR_0;
 }

 FUNC_1(VAR_9->flowrings[VAR_15],
    VAR_4,
    VAR_3, VAR_16);

 VAR_13 = VAR_9->commonrings[VAR_1];
 FUNC_2(VAR_13);
 VAR_14 = FUNC_3(VAR_13);
 if (!VAR_14) {
  FUNC_0(VAR_11, "Failed to reserve space in commonring\n");
  FUNC_4(VAR_13);
  FUNC_9(VAR_9, VAR_15);
  return VAR_0;
 }

 VAR_12 = (struct msgbuf_tx_flowring_create_req *)VAR_14;
 VAR_12->msg.msgtype = VAR_8;
 VAR_12->msg.ifidx = VAR_10->ifidx;
 VAR_12->msg.request_id = 0;
 VAR_12->tid = FUNC_8(VAR_9->flow, VAR_15);
 VAR_12->flow_ring_id = FUNC_10(VAR_15 +
        VAR_2);
 FUNC_13(VAR_12->sa, VAR_10->sa, VAR_5);
 FUNC_13(VAR_12->da, VAR_10->da, VAR_5);
 VAR_18 = (u64)VAR_9->flowring_dma_handle[VAR_15];
 VAR_12->flow_ring_addr.high_addr = FUNC_11(VAR_18 >> 32);
 VAR_12->flow_ring_addr.low_addr = FUNC_11(VAR_18 & 0xffffffff);
 VAR_12->max_items = FUNC_10(VAR_4);
 VAR_12->len_item = FUNC_10(VAR_3);

 FUNC_6(VAR_7, "Send Flow Create Req flow ID %d for peer %pM prio %d ifindex %d\n",
    VAR_15, VAR_10->da, VAR_12->tid, VAR_10->ifidx);

 VAR_19 = FUNC_5(VAR_13);
 FUNC_4(VAR_13);
 if (VAR_19) {
  FUNC_0(VAR_11, "Failed to write commonring\n");
  FUNC_9(VAR_9, VAR_15);
  return VAR_0;
 }

 return VAR_15;
}
