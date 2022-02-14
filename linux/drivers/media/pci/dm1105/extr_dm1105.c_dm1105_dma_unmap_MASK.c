
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm1105_dev {int dma_addr; int ts_buf; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dm1105_dev *VAR_1)
{
 FUNC_0(VAR_1->pdev,
   6 * VAR_0,
   VAR_1->ts_buf,
   VAR_1->dma_addr);
}
