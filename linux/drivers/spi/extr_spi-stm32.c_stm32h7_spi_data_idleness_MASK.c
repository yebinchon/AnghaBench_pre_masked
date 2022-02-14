
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {scalar_t__ cur_midi; int cur_speed; scalar_t__ base; int dev; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct stm32_spi *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = 0, VAR_7 = 0;

 VAR_6 |= VAR_2;
 if ((VAR_5 > 1) && (VAR_4->cur_midi > 0)) {
  u32 VAR_8 = FUNC_0(VAR_0, VAR_4->cur_speed);
  u32 VAR_9 = FUNC_2((u32)FUNC_0(VAR_4->cur_midi, VAR_8),
          (u32)VAR_2 >>
          VAR_3);

  FUNC_1(VAR_4->dev, "period=%dns, midi=%d(=%dns)\n",
   VAR_8, VAR_9, VAR_9 * VAR_8);
  VAR_7 |= (VAR_9 << VAR_3) &
        VAR_2;
 }

 FUNC_4((FUNC_3(VAR_4->base + VAR_1) &
   ~VAR_6) | VAR_7,
         VAR_4->base + VAR_1);
}
