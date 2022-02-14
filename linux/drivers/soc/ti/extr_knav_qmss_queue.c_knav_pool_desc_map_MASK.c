
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_pool {int dev; TYPE_1__* region; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int desc_size; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (struct knav_pool*,void*) ;
 unsigned int FUNC_4 (unsigned int,int ) ;

int FUNC_5(void *VAR_2, void *VAR_3, unsigned VAR_4,
     dma_addr_t *VAR_5, unsigned *VAR_6)
{
 struct knav_pool *VAR_7 = VAR_2;
 *VAR_5 = FUNC_3(VAR_7, VAR_3);
 VAR_4 = FUNC_4(VAR_4, VAR_7->region->desc_size);
 VAR_4 = FUNC_0(VAR_4, VAR_1);
 *VAR_6 = VAR_4;
 FUNC_2(VAR_7->dev, *VAR_5, VAR_4, VAR_0);


 FUNC_1();

 return 0;
}
