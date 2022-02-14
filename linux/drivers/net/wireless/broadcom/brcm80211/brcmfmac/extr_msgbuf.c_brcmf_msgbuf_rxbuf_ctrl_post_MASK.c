
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_6__ {void* low_addr; void* high_addr; } ;
struct TYPE_5__ {void* request_id; int msgtype; } ;
struct msgbuf_rx_ioctl_resp_or_event {TYPE_3__ host_buf_addr; int host_buf_len; TYPE_2__ msg; } ;
struct brcmf_pub {TYPE_1__* bus_if; } ;
struct brcmf_msgbuf {int rx_pktids; struct brcmf_pub* drvr; struct brcmf_commonring** commonrings; } ;
struct brcmf_commonring {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (struct brcmf_commonring*) ;
 int FUNC_2 (struct brcmf_commonring*) ;
 void* FUNC_3 (struct brcmf_commonring*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct brcmf_commonring*) ;
 int FUNC_5 (struct brcmf_commonring*,scalar_t__) ;
 int FUNC_6 (struct brcmf_commonring*) ;
 scalar_t__ FUNC_7 (int ,int ,struct sk_buff*,int ,scalar_t__*,scalar_t__*) ;
 struct sk_buff* FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct msgbuf_rx_ioctl_resp_or_event*,int ,int) ;

__attribute__((used)) static u32
FUNC_13(struct brcmf_msgbuf *VAR_4, bool VAR_5,
        u32 VAR_6)
{
 struct brcmf_pub *VAR_7 = VAR_4->drvr;
 struct brcmf_commonring *VAR_8;
 void *VAR_9;
 struct sk_buff *VAR_10;
 u16 VAR_11;
 u32 VAR_12;
 dma_addr_t VAR_13;
 struct msgbuf_rx_ioctl_resp_or_event *VAR_14;
 u64 VAR_15;
 u32 VAR_16;
 u32 VAR_17;

 VAR_8 = VAR_4->commonrings[VAR_0];
 FUNC_2(VAR_8);
 VAR_9 = FUNC_3(VAR_8,
             VAR_6,
             &VAR_11);
 if (!VAR_9) {
  FUNC_0(VAR_7, "Failed to reserve space in commonring\n");
  FUNC_4(VAR_8);
  return 0;
 }

 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
  VAR_14 = (struct msgbuf_rx_ioctl_resp_or_event *)VAR_9;
  FUNC_12(VAR_14, 0, sizeof(*VAR_14));

  VAR_10 = FUNC_8(VAR_1);

  if (VAR_10 == ((void*)0)) {
   FUNC_0(VAR_7, "Failed to alloc SKB\n");
   FUNC_5(VAR_8, VAR_11 - VAR_17);
   break;
  }

  VAR_12 = VAR_10->len;
  if (FUNC_7(VAR_4->drvr->bus_if->dev,
          VAR_4->rx_pktids, VAR_10, 0,
          &VAR_13, &VAR_16)) {
   FUNC_11(VAR_10);
   FUNC_0(VAR_7, "No PKTID available !!\n");
   FUNC_5(VAR_8, VAR_11 - VAR_17);
   break;
  }
  if (VAR_5)
   VAR_14->msg.msgtype = VAR_2;
  else
   VAR_14->msg.msgtype =
    VAR_3;
  VAR_14->msg.request_id = FUNC_10(VAR_16);

  VAR_15 = (u64)VAR_13;
  VAR_14->host_buf_len = FUNC_9((u16)VAR_12);
  VAR_14->host_buf_addr.high_addr =
   FUNC_10(VAR_15 >> 32);
  VAR_14->host_buf_addr.low_addr =
   FUNC_10(VAR_15 & 0xffffffff);

  VAR_9 += FUNC_1(VAR_8);
 }

 if (VAR_17)
  FUNC_6(VAR_8);

 FUNC_4(VAR_8);

 return VAR_17;
}
