
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skge_rx_desc {unsigned int control; scalar_t__ csum2; scalar_t__ csum1; void* csum2_start; void* csum1_start; int dma_hi; int dma_lo; } ;
struct skge_port {TYPE_1__* hw; } ;
struct skge_element {struct sk_buff* skb; struct skge_rx_desc* desc; } ;
struct sk_buff {int data; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int pdev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct skge_element*,int ,int ) ;
 int FUNC_1 (struct skge_element*,int ,unsigned int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct skge_port *VAR_8, struct skge_element *VAR_9,
    struct sk_buff *VAR_10, unsigned int VAR_11)
{
 struct skge_rx_desc *VAR_12 = VAR_9->desc;
 dma_addr_t VAR_13;

 VAR_13 = FUNC_4(VAR_8->hw->pdev, VAR_10->data, VAR_11,
        VAR_5);

 if (FUNC_3(VAR_8->hw->pdev, VAR_13))
  return -1;

 VAR_12->dma_lo = FUNC_2(VAR_13);
 VAR_12->dma_hi = FUNC_5(VAR_13);
 VAR_9->skb = VAR_10;
 VAR_12->csum1_start = VAR_4;
 VAR_12->csum2_start = VAR_4;
 VAR_12->csum1 = 0;
 VAR_12->csum2 = 0;

 FUNC_6();

 VAR_12->control = VAR_1 | VAR_2 | VAR_0 | VAR_3 | VAR_11;
 FUNC_0(VAR_9, VAR_6, VAR_13);
 FUNC_1(VAR_9, VAR_7, VAR_11);
 return 0;
}
