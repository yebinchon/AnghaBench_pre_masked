
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm1105_dev {int ts_buf; int dma_addr; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct dm1105_dev *VAR_1)
{
 VAR_1->ts_buf = FUNC_0(VAR_1->pdev,
     6 * VAR_0,
     &VAR_1->dma_addr);

 return !VAR_1->ts_buf;
}
