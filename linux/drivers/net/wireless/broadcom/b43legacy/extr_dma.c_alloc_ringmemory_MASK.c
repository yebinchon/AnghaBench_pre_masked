
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43legacy_dmaring {int descbase; int dmabase; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct b43legacy_dmaring *VAR_3)
{

 VAR_3->descbase = FUNC_0(VAR_3->dev->dev->dma_dev,
         VAR_0,
         &(VAR_3->dmabase), VAR_2);
 if (!VAR_3->descbase)
  return -VAR_1;

 return 0;
}
