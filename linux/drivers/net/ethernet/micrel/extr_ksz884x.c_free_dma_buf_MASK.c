
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_dma_buf {scalar_t__ dma; int * skb; int len; } ;
struct dev_info {int pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dev_info *VAR_0, struct ksz_dma_buf *VAR_1,
 int VAR_2)
{
 FUNC_1(VAR_0->pdev, VAR_1->dma, VAR_1->len, VAR_2);
 FUNC_0(VAR_1->skb);
 VAR_1->skb = ((void*)0);
 VAR_1->dma = 0;
}
