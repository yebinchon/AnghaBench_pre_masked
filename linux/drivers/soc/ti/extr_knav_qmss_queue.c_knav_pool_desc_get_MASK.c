
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_pool {int queue; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct knav_pool*,int ) ;
 int FUNC_2 (int ,unsigned int*) ;
 scalar_t__ FUNC_3 (int) ;

void *FUNC_4(void *VAR_1)
{
 struct knav_pool *VAR_2 = VAR_1;
 dma_addr_t VAR_3;
 unsigned VAR_4;
 void *VAR_5;

 VAR_3 = FUNC_2(VAR_2->queue, &VAR_4);
 if (FUNC_3(!VAR_3))
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_1(VAR_2, VAR_3);
 return VAR_5;
}
