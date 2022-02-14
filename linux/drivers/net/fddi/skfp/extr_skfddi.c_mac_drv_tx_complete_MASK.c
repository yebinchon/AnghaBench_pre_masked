
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_8__ {scalar_t__ dma_addr; struct sk_buff* skb; } ;
struct s_smt_fp_txd {TYPE_4__ txd_os; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; } ;
struct TYPE_6__ {TYPE_1__ gen; } ;
struct TYPE_7__ {TYPE_2__ MacStat; int pdev; } ;
struct s_smc {TYPE_3__ os; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct s_smc *VAR_1, volatile struct s_smt_fp_txd *VAR_2)
{
 struct sk_buff *VAR_3;

 FUNC_2("entering mac_drv_tx_complete\n");


 if (!(VAR_3 = VAR_2->txd_os.skb)) {
  FUNC_2("TXD with no skb assigned.\n");
  return;
 }
 VAR_2->txd_os.skb = ((void*)0);


 FUNC_1(&VAR_1->os.pdev, VAR_2->txd_os.dma_addr,
    VAR_3->len, VAR_0);
 VAR_2->txd_os.dma_addr = 0;

 VAR_1->os.MacStat.gen.tx_packets++;
 VAR_1->os.MacStat.gen.tx_bytes+=VAR_3->len;


 FUNC_0(VAR_3);

 FUNC_2("leaving mac_drv_tx_complete\n");
}
