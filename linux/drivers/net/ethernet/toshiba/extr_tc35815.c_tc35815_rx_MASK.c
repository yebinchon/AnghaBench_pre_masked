
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tc35815_local {int fbl_count; struct RxFD* rfd_cur; struct RxFD* rfd_base; struct RxFD* rfd_limit; TYPE_3__* rx_skbs; int pci_dev; TYPE_1__* fbl_ptr; } ;
struct sk_buff {int protocol; int data; } ;
struct TYPE_9__ {int rx_bytes; int rx_frame_errors; int rx_crc_errors; int rx_fifo_errors; int rx_length_errors; int rx_errors; int rx_packets; } ;
struct net_device {int name; TYPE_4__ stats; int dev; } ;
struct TYPE_7__ {void* FDCtl; void* FDNext; void* FDStat; } ;
struct RxFD {TYPE_2__ fd; TYPE_5__* bd; } ;
struct BDesc {void* BDCtl; void* BuffData; } ;
struct TYPE_10__ {void* BDCtl; void* BuffData; } ;
struct TYPE_8__ {int skb_dma; struct sk_buff* skb; } ;
struct TYPE_6__ {struct BDesc* bd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct tc35815_local*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct sk_buff* FUNC_2 (struct net_device*,int ,unsigned int*) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct RxFD*) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 struct RxFD* FUNC_7 (struct tc35815_local*,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,int ,int) ;
 struct tc35815_local* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct tc35815_local*) ;
 scalar_t__ FUNC_12 (struct tc35815_local*) ;
 scalar_t__ FUNC_13 (struct tc35815_local*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,int,int,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (unsigned char*) ;
 int FUNC_19 (char*,struct RxFD*,...) ;
 unsigned char* FUNC_20 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_21(struct net_device *VAR_19, int VAR_20)
{
 struct tc35815_local *VAR_21 = FUNC_10(VAR_19);
 unsigned int VAR_22;
 int VAR_23;
 int VAR_24 = 0;

 while (!((VAR_22 = FUNC_8(VAR_21->rfd_cur->fd.FDCtl)) & VAR_6)) {
  int VAR_25 = FUNC_8(VAR_21->rfd_cur->fd.FDStat);
  int VAR_26 = VAR_22 & VAR_7;
  int VAR_27 = (VAR_22 & VAR_4) >> VAR_5;




  VAR_26 -= VAR_3;


  if (FUNC_13(VAR_21))
   FUNC_5(VAR_21->rfd_cur);
  if (VAR_25 & VAR_15) {
   struct sk_buff *VAR_28;
   unsigned char *VAR_29;
   int VAR_30;

   if (--VAR_20 < 0)
    break;
   FUNC_0(VAR_27 > 1);
   VAR_30 = (FUNC_8(VAR_21->rfd_cur->bd[0].BDCtl)
      & VAR_1) >> VAR_2;
   FUNC_0(VAR_30 >= VAR_11);

   VAR_28 = VAR_21->rx_skbs[VAR_30].skb;
   FUNC_17(VAR_28->data);
   VAR_21->rx_skbs[VAR_30].skb = ((void*)0);
   FUNC_16(VAR_21->pci_dev,
      VAR_21->rx_skbs[VAR_30].skb_dma,
      VAR_12, VAR_10);
   if (!FUNC_1(VAR_21) && VAR_9 != 0)
    FUNC_9(VAR_28->data, VAR_28->data - VAR_9,
     VAR_26);
   VAR_29 = FUNC_20(VAR_28, VAR_26);
   if (FUNC_11(VAR_21))
    FUNC_18(VAR_29);
   VAR_28->protocol = FUNC_6(VAR_28, VAR_19);
   FUNC_14(VAR_28);
   VAR_24++;
   VAR_19->stats.rx_packets++;
   VAR_19->stats.rx_bytes += VAR_26;
  } else {
   VAR_19->stats.rx_errors++;
   if (FUNC_12(VAR_21))
    FUNC_4(&VAR_19->dev, "Rx error (status %x)\n",
      VAR_25 & VAR_18);

   if ((VAR_25 & VAR_16) && (VAR_25 & VAR_14)) {
    VAR_25 &= ~(VAR_16|VAR_14);
    VAR_25 |= VAR_17;
   }
   if (VAR_25 & VAR_16)
    VAR_19->stats.rx_length_errors++;
   if (VAR_25 & VAR_17)
    VAR_19->stats.rx_fifo_errors++;
   if (VAR_25 & VAR_14)
    VAR_19->stats.rx_crc_errors++;
   if (VAR_25 & VAR_13)
    VAR_19->stats.rx_frame_errors++;
  }

  if (VAR_27 > 0) {

   int VAR_31 = FUNC_8(VAR_21->rfd_cur->bd[VAR_27 - 1].BDCtl);
   unsigned char VAR_32 =
    (VAR_31 & VAR_1) >> VAR_2;






   FUNC_0(VAR_32 >= VAR_11);


   VAR_21->fbl_count--;
   while (VAR_21->fbl_count < VAR_11)
   {
    unsigned char VAR_33 =
     (VAR_32 + 1 + VAR_21->fbl_count) % VAR_11;
    struct BDesc *VAR_34 = &VAR_21->fbl_ptr->bd[VAR_33];
    if (!VAR_21->rx_skbs[VAR_33].skb) {
     VAR_21->rx_skbs[VAR_33].skb =
      FUNC_2(VAR_19,
        VAR_21->pci_dev,
        &VAR_21->rx_skbs[VAR_33].skb_dma);
     if (!VAR_21->rx_skbs[VAR_33].skb)
      break;
     VAR_34->BuffData = FUNC_3(VAR_21->rx_skbs[VAR_33].skb_dma);
    }

    VAR_34->BDCtl = FUNC_3(VAR_0 |
       (VAR_33 << VAR_2) |
       VAR_12);
    VAR_21->fbl_count++;
   }
  }
  for (VAR_23 = 0; VAR_23 < (VAR_27 + 1) / 2 + 1; VAR_23++) {




   VAR_21->rfd_cur->fd.FDNext = FUNC_3(VAR_8);

   VAR_21->rfd_cur->fd.FDCtl = FUNC_3(VAR_6);
   VAR_21->rfd_cur++;
  }
  if (VAR_21->rfd_cur > VAR_21->rfd_limit)
   VAR_21->rfd_cur = VAR_21->rfd_base;





 }

 return VAR_24;
}
