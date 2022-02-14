
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dma_addr; scalar_t__ skb; } ;
struct s_smt_fp_rxd {TYPE_1__ rxd_os; } ;
union s_fp_descr {struct s_smt_fp_rxd r; } ;
struct TYPE_4__ {int MaxFrameSize; int pdev; } ;
struct s_smc {TYPE_2__ os; } ;
typedef TYPE_2__ skfddi_priv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int,int ) ;

void FUNC_1(struct s_smc *VAR_2, volatile union s_fp_descr *VAR_3, int VAR_4)
{
 if (VAR_4 & VAR_0) {
  skfddi_priv *VAR_5 = &VAR_2->os;
  volatile struct s_smt_fp_rxd *VAR_6 = &VAR_3->r;


  if (VAR_6->rxd_os.skb && VAR_6->rxd_os.dma_addr) {
   int VAR_7 = VAR_5->MaxFrameSize;

   FUNC_0(&VAR_5->pdev, VAR_6->rxd_os.dma_addr,
      VAR_7, VAR_1);
   VAR_6->rxd_os.dma_addr = 0;
  }
 }
}
