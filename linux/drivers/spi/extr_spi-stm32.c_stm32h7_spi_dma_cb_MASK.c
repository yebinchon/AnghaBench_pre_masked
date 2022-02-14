
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int dev; int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct stm32_spi *VAR_3 = VAR_2;
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);

 VAR_5 = FUNC_1(VAR_3->base + VAR_0);

 FUNC_3(&VAR_3->lock, VAR_4);

 if (!(VAR_5 & VAR_1))
  FUNC_0(VAR_3->dev, "DMA error (sr=0x%08x)\n", VAR_5);


}
