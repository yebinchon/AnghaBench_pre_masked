
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int dev; int lock; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct stm32_spi*,int ,int ) ;
 int FUNC_5 (struct stm32_spi*,int ,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct stm32_spi *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7 = 0;

 FUNC_2(&VAR_5->lock, VAR_6);

 FUNC_5(VAR_5, VAR_0, VAR_1);

 while (FUNC_1(VAR_5->base + VAR_2) & VAR_3)
  FUNC_6(++VAR_7, VAR_5->base + VAR_4);

 FUNC_4(VAR_5, VAR_0, VAR_1);

 FUNC_3(&VAR_5->lock, VAR_6);

 FUNC_0(VAR_5->dev, "%d x 8-bit fifo size\n", VAR_7);

 return VAR_7;
}
