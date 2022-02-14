
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_dmaring {TYPE_2__* dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,size_t,int ) ;

__attribute__((used)) static inline
    dma_addr_t FUNC_1(struct b43_dmaring *VAR_2,
         unsigned char *VAR_3, size_t VAR_4, int VAR_5)
{
 dma_addr_t VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_2->dev->dev->dma_dev,
      VAR_3, VAR_4, VAR_1);
 } else {
  VAR_6 = FUNC_0(VAR_2->dev->dev->dma_dev,
      VAR_3, VAR_4, VAR_0);
 }

 return VAR_6;
}
