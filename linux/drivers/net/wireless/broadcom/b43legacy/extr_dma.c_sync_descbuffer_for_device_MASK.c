
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43legacy_dmaring {TYPE_2__* dev; int tx; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dma_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,size_t,int ) ;

__attribute__((used)) static inline
void FUNC_2(struct b43legacy_dmaring *VAR_1,
    dma_addr_t VAR_2,
    size_t VAR_3)
{
 FUNC_0(VAR_1->tx);

 FUNC_1(VAR_1->dev->dev->dma_dev,
       VAR_2, VAR_3, VAR_0);
}
