
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned char* data; } ;
struct TYPE_4__ {unsigned long dma_addr; struct sk_buff* skb; } ;
struct s_smt_fp_rxd {TYPE_2__ rxd_os; } ;
struct TYPE_3__ {int MaxFrameSize; unsigned char* LocalRxBuffer; unsigned long LocalRxBufferDMA; int pdev; } ;
struct s_smc {TYPE_1__ os; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s_smt_fp_rxd* FUNC_0 (struct s_smc*) ;
 scalar_t__ FUNC_1 (struct s_smc*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct s_smc*,unsigned char*,unsigned long,int,int) ;
 unsigned long FUNC_4 (int *,unsigned char*,int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

void FUNC_8(struct s_smc *VAR_4)
{
 int VAR_5;
 unsigned char *VAR_6;
 unsigned long VAR_7;
 struct sk_buff *VAR_8;
 volatile struct s_smt_fp_rxd *VAR_9;

 FUNC_5("entering mac_drv_fill_rxd\n");




 VAR_5 = VAR_4->os.MaxFrameSize;

 while (FUNC_1(VAR_4) > 0) {
  FUNC_5(".\n");

  VAR_9 = FUNC_0(VAR_4);
  VAR_8 = FUNC_2(VAR_5 + 3, VAR_1);
  if (VAR_8) {

   FUNC_7(VAR_8, 3);
   FUNC_6(VAR_8, VAR_5);
   VAR_6 = VAR_8->data;
   VAR_7 = FUNC_4(&VAR_4->os.pdev,
      VAR_6,
      VAR_5,
      VAR_3);
   VAR_9->rxd_os.dma_addr = VAR_7;
  } else {





   FUNC_5("Queueing invalid buffer!\n");
   VAR_6 = VAR_4->os.LocalRxBuffer;
   VAR_7 = VAR_4->os.LocalRxBufferDMA;
  }

  VAR_9->rxd_os.skb = VAR_8;


  FUNC_3(VAR_4, VAR_6, VAR_7, VAR_5,
       VAR_0 | VAR_2);
 }
 FUNC_5("leaving mac_drv_fill_rxd\n");
}
