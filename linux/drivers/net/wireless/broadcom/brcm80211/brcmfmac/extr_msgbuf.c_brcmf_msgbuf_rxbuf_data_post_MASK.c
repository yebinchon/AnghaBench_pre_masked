
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
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_8__ {void* low_addr; void* high_addr; } ;
struct TYPE_7__ {void* request_id; int msgtype; } ;
struct TYPE_6__ {void* low_addr; void* high_addr; } ;
struct msgbuf_rx_bufpost {TYPE_4__ data_buf_addr; void* data_buf_len; TYPE_3__ msg; TYPE_2__ metadata_buf_addr; void* metadata_buf_len; } ;
struct brcmf_pub {TYPE_1__* bus_if; } ;
struct brcmf_msgbuf {scalar_t__ rx_metadata_offset; int rx_pktids; struct brcmf_pub* drvr; struct brcmf_commonring** commonrings; } ;
struct brcmf_commonring {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (struct brcmf_commonring*) ;
 void* FUNC_2 (struct brcmf_commonring*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct brcmf_commonring*,scalar_t__) ;
 int FUNC_4 (struct brcmf_commonring*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int ,struct sk_buff*,int ,scalar_t__*,scalar_t__*) ;
 struct sk_buff* FUNC_7 (int ) ;
 void* FUNC_8 (scalar_t__) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct msgbuf_rx_bufpost*,int ,int) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_13(struct brcmf_msgbuf *VAR_4, u32 VAR_5)
{
 struct brcmf_pub *VAR_6 = VAR_4->drvr;
 struct brcmf_commonring *VAR_7;
 void *VAR_8;
 struct sk_buff *VAR_9;
 u16 VAR_10;
 u32 VAR_11;
 dma_addr_t VAR_12;
 struct msgbuf_rx_bufpost *VAR_13;
 u64 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 VAR_7 = VAR_4->commonrings[VAR_0];
 VAR_8 = FUNC_2(VAR_7,
             VAR_5,
             &VAR_10);
 if (!VAR_8) {
  FUNC_5(VAR_2, "Failed to reserve space in commonring\n");
  return 0;
 }

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_13 = (struct msgbuf_rx_bufpost *)VAR_8;
  FUNC_11(VAR_13, 0, sizeof(*VAR_13));

  VAR_9 = FUNC_7(VAR_1);

  if (VAR_9 == ((void*)0)) {
   FUNC_0(VAR_6, "Failed to alloc SKB\n");
   FUNC_3(VAR_7, VAR_10 - VAR_16);
   break;
  }

  VAR_11 = VAR_9->len;
  if (FUNC_6(VAR_4->drvr->bus_if->dev,
          VAR_4->rx_pktids, VAR_9, 0,
          &VAR_12, &VAR_15)) {
   FUNC_10(VAR_9);
   FUNC_0(VAR_6, "No PKTID available !!\n");
   FUNC_3(VAR_7, VAR_10 - VAR_16);
   break;
  }

  if (VAR_4->rx_metadata_offset) {
   VAR_14 = (u64)VAR_12;
   VAR_13->metadata_buf_len =
    FUNC_8(VAR_4->rx_metadata_offset);
   VAR_13->metadata_buf_addr.high_addr =
    FUNC_9(VAR_14 >> 32);
   VAR_13->metadata_buf_addr.low_addr =
    FUNC_9(VAR_14 & 0xffffffff);

   FUNC_12(VAR_9, VAR_4->rx_metadata_offset);
   VAR_11 = VAR_9->len;
   VAR_12 += VAR_4->rx_metadata_offset;
  }
  VAR_13->msg.msgtype = VAR_3;
  VAR_13->msg.request_id = FUNC_9(VAR_15);

  VAR_14 = (u64)VAR_12;
  VAR_13->data_buf_len = FUNC_8((u16)VAR_11);
  VAR_13->data_buf_addr.high_addr =
   FUNC_9(VAR_14 >> 32);
  VAR_13->data_buf_addr.low_addr =
   FUNC_9(VAR_14 & 0xffffffff);

  VAR_8 += FUNC_1(VAR_7);
 }

 if (VAR_16)
  FUNC_4(VAR_7);

 return VAR_16;
}
