
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt1 {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *,int,int*,int ) ;

__attribute__((used)) static void *FUNC_2(struct pt1 *VAR_3, dma_addr_t *VAR_4, u32 *VAR_5)
{
 void *VAR_6;
 dma_addr_t VAR_7;

 VAR_6 = FUNC_1(&VAR_3->pdev->dev, VAR_2, &VAR_7,
      VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_7 & (VAR_2 - 1));
 FUNC_0(VAR_7 >> VAR_1 >> 31 >> 1);

 *VAR_4 = VAR_7;
 *VAR_5 = VAR_7 >> VAR_1;
 return VAR_6;
}
