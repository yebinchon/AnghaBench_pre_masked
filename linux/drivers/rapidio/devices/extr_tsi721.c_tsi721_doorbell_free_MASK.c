
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsi721_device {int * idb_base; int idb_dma; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct tsi721_device *VAR_2)
{
 if (VAR_2->idb_base == ((void*)0))
  return;


 FUNC_0(&VAR_2->pdev->dev, VAR_0 * VAR_1,
     VAR_2->idb_base, VAR_2->idb_dma);
 VAR_2->idb_base = ((void*)0);
}
