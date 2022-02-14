
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {struct sk_buff* skb; int dma_addr; } ;
struct s_smt_fp_rxd {struct s_smt_fp_rxd* rxd_next; TYPE_1__ rxd_os; } ;
struct TYPE_4__ {int MaxFrameSize; int pdev; } ;
struct s_smc {TYPE_2__ os; } ;
typedef TYPE_2__ skfddi_priv ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct s_smc *VAR_1, volatile struct s_smt_fp_rxd *VAR_2,
         int VAR_3)
{

 struct sk_buff *VAR_4;

 FUNC_2("entering mac_drv_clear_rxd\n");

 if (VAR_3 != 1)

  FUNC_3("fddi: Multi-fragment clear!\n");

 for (; VAR_3 > 0; VAR_3--) {
  VAR_4 = VAR_2->rxd_os.skb;
  if (VAR_4 != ((void*)0)) {
   skfddi_priv *VAR_5 = &VAR_1->os;
   int VAR_6 = VAR_5->MaxFrameSize;

   FUNC_1(&VAR_5->pdev, VAR_2->rxd_os.dma_addr,
      VAR_6, VAR_0);

   FUNC_0(VAR_4);
   VAR_2->rxd_os.skb = ((void*)0);
  }
  VAR_2 = VAR_2->rxd_next;

 }
}
