
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int dev; int lock; scalar_t__ base; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stm32_spi*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct stm32_spi *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_3(&VAR_3->lock, VAR_4);





 FUNC_5(VAR_3, VAR_0, VAR_1);

 VAR_5 = FUNC_2(VAR_3->base + VAR_0);
 VAR_6 = (VAR_5 & VAR_1) >>
    VAR_2;
 VAR_6 += 1;

 FUNC_4(&VAR_3->lock, VAR_4);

 FUNC_1(VAR_3->dev, "%d-bit maximum data frame\n", VAR_6);

 return FUNC_0(4, VAR_6);
}
