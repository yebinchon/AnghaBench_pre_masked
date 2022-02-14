
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int pdev; } ;
struct slgt_desc {scalar_t__ buf_dma_addr; int pbuf; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct slgt_info *VAR_2, struct slgt_desc *VAR_3, int VAR_4)
{
 int VAR_5;
 for (VAR_5=0; VAR_5 < VAR_4; VAR_5++) {
  if ((VAR_3[VAR_5].buf = FUNC_1(VAR_2->pdev, VAR_0, &VAR_3[VAR_5].buf_dma_addr)) == ((void*)0))
   return -VAR_1;
  VAR_3[VAR_5].pbuf = FUNC_0((unsigned int)VAR_3[VAR_5].buf_dma_addr);
 }
 return 0;
}
