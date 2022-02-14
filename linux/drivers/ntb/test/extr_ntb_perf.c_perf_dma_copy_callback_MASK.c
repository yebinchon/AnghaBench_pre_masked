
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread {int dma_wait; int dma_sync; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct perf_thread *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->dma_sync);
 FUNC_1(&VAR_1->dma_wait);
}
