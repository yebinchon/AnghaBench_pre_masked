
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ cb; struct net_device* dev; scalar_t__ len; scalar_t__ data; } ;
struct rx_desc {int OWN; int EOR; int Length; int BufferAddress; } ;
struct rtllib_rx_stats {scalar_t__ bCRC; scalar_t__ RxBufShift; scalar_t__ RxDrvInfoSize; int nic_type; int freq; int rate; int noise; int signal; } ;
struct rtllib_hdr_1addr {int frame_ctl; int addr1; } ;
struct TYPE_5__ {int rxbytesunicast; int rxok; int rxmgmtcrcerr; int rxdatacrcerr; } ;
struct r8192_priv {unsigned int rxringcount; size_t* rx_idx; int rxbuffersize; int pdev; struct sk_buff*** rx_buf; TYPE_2__ stats; TYPE_3__* rtllib; TYPE_1__* ops; struct rx_desc** rx_ring; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int (* LedControlHandler ) (struct net_device*,int ) ;} ;
struct TYPE_4__ {int (* rx_query_status_descriptor ) (struct net_device*,struct rtllib_rx_stats*,struct rx_desc*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 struct r8192_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_3__*,struct sk_buff*,struct rtllib_rx_stats*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 int FUNC_14 (struct net_device*,struct rtllib_rx_stats*,struct rx_desc*,struct sk_buff*) ;
 int FUNC_15 (struct net_device*,int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct net_device *VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_8(VAR_6);
 struct rtllib_hdr_1addr *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 bool VAR_10 = 1;
 u16 VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13 = 0;
 int VAR_14 = VAR_5;

 struct rtllib_rx_stats VAR_15 = {
  .signal = 0,
  .noise = (u8)-98,
  .rate = 0,
  .freq = VAR_3,
 };
 unsigned int VAR_16 = VAR_7->rxringcount;

 VAR_15.nic_type = VAR_1;

 while (VAR_16--) {
  struct rx_desc *VAR_17 = &VAR_7->rx_ring[VAR_14]
     [VAR_7->rx_idx[VAR_14]];
  struct sk_buff *VAR_18 = VAR_7->rx_buf[VAR_14]
          [VAR_7->rx_idx[VAR_14]];
  struct sk_buff *VAR_19;

  if (VAR_17->OWN)
   return;
  if (!VAR_7->ops->rx_query_status_descriptor(VAR_6, &VAR_15,
  VAR_17, VAR_18))
   goto done;
  VAR_19 = FUNC_1(VAR_7->rxbuffersize);



  if (FUNC_16(!VAR_19))
   goto done;

  FUNC_7(VAR_7->pdev,
    *((dma_addr_t *)VAR_18->cb),
    VAR_7->rxbuffersize,
    VAR_2);

  FUNC_10(VAR_18, VAR_17->Length);
  FUNC_11(VAR_18, VAR_15.RxDrvInfoSize +
   VAR_15.RxBufShift);
  FUNC_13(VAR_18, VAR_18->len - 4 );
  VAR_8 = (struct rtllib_hdr_1addr *)VAR_18->data;
  if (!FUNC_3(VAR_8->addr1)) {

   VAR_9 = 1;
  }
  VAR_11 = FUNC_4(VAR_8->frame_ctl);
  VAR_12 = FUNC_0(VAR_11);
  if (VAR_12 == VAR_4)
   VAR_10 = 0;

  if (VAR_10)
   if (VAR_7->rtllib->LedControlHandler)
    VAR_7->rtllib->LedControlHandler(VAR_6,
       VAR_0);

  if (VAR_15.bCRC) {
   if (VAR_12 != VAR_4)
    VAR_7->stats.rxdatacrcerr++;
   else
    VAR_7->stats.rxmgmtcrcerr++;
  }

  VAR_13 = VAR_18->len;

  if (!FUNC_9(VAR_7->rtllib, VAR_18, &VAR_15)) {
   FUNC_2(VAR_18);
  } else {
   VAR_7->stats.rxok++;
   if (VAR_9)
    VAR_7->stats.rxbytesunicast += VAR_13;
  }

  VAR_18 = VAR_19;
  VAR_18->dev = VAR_6;

  VAR_7->rx_buf[VAR_14][VAR_7->rx_idx[VAR_14]] =
         VAR_18;
  *((dma_addr_t *)VAR_18->cb) = FUNC_6(VAR_7->pdev,
         FUNC_12(VAR_18),
         VAR_7->rxbuffersize,
         VAR_2);
  if (FUNC_5(VAR_7->pdev,
       *((dma_addr_t *)VAR_18->cb))) {
   FUNC_2(VAR_18);
   return;
  }
done:
  VAR_17->BufferAddress = *((dma_addr_t *)VAR_18->cb);
  VAR_17->OWN = 1;
  VAR_17->Length = VAR_7->rxbuffersize;
  if (VAR_7->rx_idx[VAR_14] == VAR_7->rxringcount - 1)
   VAR_17->EOR = 1;
  VAR_7->rx_idx[VAR_14] = (VAR_7->rx_idx[VAR_14] + 1) %
           VAR_7->rxringcount;
 }

}
