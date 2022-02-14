
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {unsigned char* data; int len; } ;
struct TYPE_13__ {int dma_addr; struct sk_buff* skb; } ;
struct s_smt_fp_txd {TYPE_6__ txd_os; } ;
struct TYPE_11__ {int a; } ;
struct TYPE_12__ {TYPE_4__ fddi_canon_addr; } ;
struct TYPE_9__ {scalar_t__ fddiESSSynchTxMode; } ;
struct TYPE_8__ {int sync_bw_available; } ;
struct TYPE_14__ {int DriverLock; int pdev; int QueueSkb; int SendSkbQueue; TYPE_3__* dev; } ;
struct s_smc {TYPE_5__ hw; TYPE_2__ mib; TYPE_1__ ess; TYPE_7__ os; } ;
typedef TYPE_7__ skfddi_priv ;
typedef int dma_addr_t ;
struct TYPE_10__ {int name; } ;


 int FUNC_0 (unsigned char*,int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct s_smc*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct s_smc*,unsigned char*,int ,int ,int) ;
 int FUNC_4 (struct s_smc*,unsigned char,int,int ,int) ;
 int FUNC_5 (int *,unsigned char*,int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (char*,...) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct s_smc *VAR_13)
{
 skfddi_priv *VAR_14 = &VAR_13->os;
 struct sk_buff *VAR_15;
 unsigned char VAR_16;
 int VAR_17;
 struct s_smt_fp_txd *VAR_18;
 dma_addr_t VAR_19;
 unsigned long VAR_20;

 int VAR_21;

 FUNC_7("send queued packets\n");
 for (;;) {

  VAR_15 = FUNC_8(&VAR_14->SendSkbQueue);

  if (!VAR_15) {
   FUNC_7("queue empty\n");
   return;
  }

  FUNC_10(&VAR_14->DriverLock, VAR_20);
  VAR_16 = VAR_15->data[0];
  VAR_17 = (VAR_16 & VAR_3) ? VAR_11 : VAR_10;
  VAR_21 = FUNC_4(VAR_13, VAR_16, 1, VAR_15->len, VAR_17);

  if ((VAR_21 & (VAR_7 | VAR_5)) == 0) {


   if ((VAR_21 & VAR_12) != 0) {

    FUNC_7("Tx attempt while ring down.\n");
   } else if ((VAR_21 & VAR_8) != 0) {
    FUNC_7("%s: out of TXDs.\n", VAR_14->dev->name);
   } else {
    FUNC_7("%s: out of transmit resources",
     VAR_14->dev->name);
   }



   FUNC_9(&VAR_14->SendSkbQueue, VAR_15);
   FUNC_11(&VAR_14->DriverLock, VAR_20);
   return;

  }

  VAR_14->QueueSkb++;


  FUNC_0(VAR_15->data, VAR_13->hw.fddi_canon_addr.a);

  VAR_18 = (struct s_smt_fp_txd *) FUNC_1(VAR_13, VAR_17);

  VAR_19 = FUNC_5(&VAR_14->pdev, VAR_15->data,
          VAR_15->len, VAR_9);
  if (VAR_21 & VAR_5) {
   VAR_18->txd_os.skb = VAR_15;
   VAR_18->txd_os.dma_addr = VAR_19;
  }
  FUNC_3(VAR_13, VAR_15->data, VAR_19, VAR_15->len,
                      VAR_21 | VAR_4 | VAR_6 | VAR_0);

  if (!(VAR_21 & VAR_5)) {
   FUNC_6(&VAR_14->pdev, VAR_19,
      VAR_15->len, VAR_9);
   FUNC_2(VAR_15);
  }
  FUNC_11(&VAR_14->DriverLock, VAR_20);
 }

 return;

}
