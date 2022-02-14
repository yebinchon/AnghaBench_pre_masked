
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct sk_buff {int priority; scalar_t__ len; int data; } ;
struct TYPE_8__ {scalar_t__ low_addr; scalar_t__ high_addr; } ;
struct TYPE_7__ {void* low_addr; void* high_addr; } ;
struct TYPE_6__ {int ifidx; void* request_id; int msgtype; } ;
struct msgbuf_tx_msghdr {int flags; int seg_cnt; TYPE_4__ metadata_buf_addr; scalar_t__ metadata_buf_len; TYPE_3__ data_buf_addr; int data_len; int txhdr; TYPE_2__ msg; } ;
struct brcmf_pub {TYPE_1__* bus_if; } ;
struct brcmf_msgbuf {int tx_pktids; struct brcmf_pub* drvr; struct brcmf_commonring** flowrings; struct brcmf_flowring* flow; } ;
struct brcmf_flowring {int dummy; } ;
struct brcmf_commonring {int outstanding_tx; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct brcmf_pub*,char*,...) ;
 int FUNC_2 (struct brcmf_commonring*) ;
 void* FUNC_3 (struct brcmf_commonring*) ;
 int FUNC_4 (struct brcmf_commonring*) ;
 int FUNC_5 (struct brcmf_commonring*) ;
 int FUNC_6 (struct brcmf_commonring*) ;
 struct sk_buff* FUNC_7 (struct brcmf_flowring*,size_t) ;
 int FUNC_8 (struct brcmf_flowring*,size_t) ;
 scalar_t__ FUNC_9 (struct brcmf_flowring*,size_t) ;
 int FUNC_10 (struct brcmf_flowring*,size_t,struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ,int ,struct sk_buff*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (int ,int ,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (int ,int ,scalar_t__) ;
 int FUNC_16 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_17(struct brcmf_msgbuf *VAR_6, u16 VAR_7)
{
 struct brcmf_flowring *VAR_8 = VAR_6->flow;
 struct brcmf_pub *VAR_9 = VAR_6->drvr;
 struct brcmf_commonring *VAR_10;
 void *VAR_11;
 u32 VAR_12;
 struct sk_buff *VAR_13;
 dma_addr_t VAR_14;
 u32 VAR_15;
 struct msgbuf_tx_msghdr *VAR_16;
 u64 VAR_17;

 VAR_10 = VAR_6->flowrings[VAR_7];
 if (!FUNC_5(VAR_10))
  return;

 FUNC_2(VAR_10);

 VAR_12 = VAR_3 - VAR_2;
 while (FUNC_9(VAR_8, VAR_7)) {
  VAR_13 = FUNC_7(VAR_8, VAR_7);
  if (VAR_13 == ((void*)0)) {
   FUNC_1(VAR_9, "No SKB, but qlen %d\n",
     FUNC_9(VAR_8, VAR_7));
   break;
  }
  FUNC_16(VAR_13);
  if (FUNC_11(VAR_6->drvr->bus_if->dev,
          VAR_6->tx_pktids, VAR_13, VAR_4,
          &VAR_14, &VAR_15)) {
   FUNC_10(VAR_8, VAR_7, VAR_13);
   FUNC_1(VAR_9, "No PKTID available !!\n");
   break;
  }
  VAR_11 = FUNC_3(VAR_10);
  if (!VAR_11) {
   FUNC_12(VAR_6->drvr->bus_if->dev,
            VAR_6->tx_pktids, VAR_15);
   FUNC_10(VAR_8, VAR_7, VAR_13);
   break;
  }
  VAR_12++;

  VAR_16 = (struct msgbuf_tx_msghdr *)VAR_11;

  VAR_16->msg.msgtype = VAR_5;
  VAR_16->msg.request_id = FUNC_14(VAR_15 + 1);
  VAR_16->msg.ifidx = FUNC_8(VAR_8, VAR_7);
  VAR_16->flags = VAR_0;
  VAR_16->flags |= (VAR_13->priority & 0x07) <<
        VAR_1;
  VAR_16->seg_cnt = 1;
  FUNC_15(VAR_16->txhdr, VAR_13->data, VAR_4);
  VAR_16->data_len = FUNC_13(VAR_13->len - VAR_4);
  VAR_17 = (u64)VAR_14;
  VAR_16->data_buf_addr.high_addr = FUNC_14(VAR_17 >> 32);
  VAR_16->data_buf_addr.low_addr =
   FUNC_14(VAR_17 & 0xffffffff);
  VAR_16->metadata_buf_len = 0;
  VAR_16->metadata_buf_addr.high_addr = 0;
  VAR_16->metadata_buf_addr.low_addr = 0;
  FUNC_0(&VAR_10->outstanding_tx);
  if (VAR_12 >= VAR_3) {
   FUNC_6(VAR_10);
   VAR_12 = 0;
  }
 }
 if (VAR_12)
  FUNC_6(VAR_10);
 FUNC_4(VAR_10);
}
