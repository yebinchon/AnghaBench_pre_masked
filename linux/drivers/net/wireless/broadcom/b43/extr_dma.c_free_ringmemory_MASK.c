
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct b43_dmaring {scalar_t__ type; int dmabase; int descbase; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct b43_dmaring *VAR_3)
{
 u16 VAR_4 = (VAR_3->type == VAR_2) ?
    VAR_1 : VAR_0;
 FUNC_0(VAR_3->dev->dev->dma_dev, VAR_4,
     VAR_3->descbase, VAR_3->dmabase);
}
