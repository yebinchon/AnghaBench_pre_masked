
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {int dma_done; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 long FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct r852_device *VAR_1)
{
 long VAR_2 = FUNC_2(&VAR_1->dma_done,
    FUNC_1(1000));
 if (!VAR_2) {
  FUNC_0("timeout waiting for DMA interrupt");
  return -VAR_0;
 }

 return 0;
}
