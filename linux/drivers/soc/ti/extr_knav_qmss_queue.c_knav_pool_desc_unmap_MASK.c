
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_pool {int dev; TYPE_1__* region; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int desc_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,int ) ;
 void* FUNC_1 (struct knav_pool*,int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (void*) ;

void *FUNC_4(void *VAR_1, dma_addr_t VAR_2, unsigned VAR_3)
{
 struct knav_pool *VAR_4 = VAR_1;
 unsigned VAR_5;
 void *VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4->region->desc_size);
 VAR_6 = FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_4->dev, VAR_2, VAR_5, VAR_0);
 FUNC_3(VAR_6);
 return VAR_6;
}
