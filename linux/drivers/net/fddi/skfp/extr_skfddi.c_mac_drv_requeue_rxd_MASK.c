
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned char* data; } ;
struct TYPE_4__ {void* dma_addr; struct sk_buff* skb; } ;
struct s_smt_fp_rxd {TYPE_2__ rxd_os; struct s_smt_fp_rxd* rxd_next; } ;
struct TYPE_3__ {int MaxFrameSize; unsigned char* LocalRxBuffer; int pdev; void* LocalRxBufferDMA; } ;
struct s_smc {TYPE_1__ os; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct s_smt_fp_rxd* FUNC_0 (struct s_smc*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (struct s_smc*,unsigned char*,void*,int,int) ;
 void* FUNC_3 (int *,unsigned char*,int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

void FUNC_8(struct s_smc *VAR_4, volatile struct s_smt_fp_rxd *VAR_5,
    int VAR_6)
{
 volatile struct s_smt_fp_rxd *VAR_7;
 volatile struct s_smt_fp_rxd *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;
 unsigned char *VAR_11;
 dma_addr_t VAR_12;

 if (VAR_6 != 1)

  FUNC_5("fddi: Multi-fragment requeue!\n");

 VAR_10 = VAR_4->os.MaxFrameSize;
 VAR_8 = VAR_5;
 for (; VAR_6 > 0; VAR_6--) {
  VAR_7 = VAR_8->rxd_next;
  VAR_5 = FUNC_0(VAR_4);

  VAR_9 = VAR_8->rxd_os.skb;
  if (VAR_9 == ((void*)0)) {

   FUNC_4("Requeue with no skb in rxd!\n");
   VAR_9 = FUNC_1(VAR_10 + 3, VAR_1);
   if (VAR_9) {

    VAR_5->rxd_os.skb = VAR_9;
    FUNC_7(VAR_9, 3);
    FUNC_6(VAR_9, VAR_10);
    VAR_11 = VAR_9->data;
    VAR_12 = FUNC_3(&VAR_4->os.pdev,
       VAR_11,
       VAR_10,
       VAR_3);
    VAR_5->rxd_os.dma_addr = VAR_12;
   } else {

    FUNC_4("Queueing invalid buffer!\n");
    VAR_5->rxd_os.skb = ((void*)0);
    VAR_11 = VAR_4->os.LocalRxBuffer;
    VAR_12 = VAR_4->os.LocalRxBufferDMA;
   }
  } else {

   VAR_5->rxd_os.skb = VAR_9;
   VAR_11 = VAR_9->data;
   VAR_12 = FUNC_3(&VAR_4->os.pdev,
      VAR_11,
      VAR_10,
      VAR_3);
   VAR_5->rxd_os.dma_addr = VAR_12;
  }
  FUNC_2(VAR_4, VAR_11, VAR_12, VAR_10,
       VAR_0 | VAR_2);

  VAR_8 = VAR_7;
 }
}
