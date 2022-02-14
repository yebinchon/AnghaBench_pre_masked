
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct armada_37xx_pinctrl {int irq_lock; scalar_t__ base; int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct armada_37xx_pinctrl *VAR_3,
          u32 VAR_4)
{
 u32 VAR_5 = VAR_4 / VAR_0;
 u32 VAR_6 = VAR_4 % VAR_0;
 u32 VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10;

 FUNC_1(VAR_3->regmap, VAR_1 + 4*VAR_5, &VAR_8);

 FUNC_2(&VAR_3->irq_lock, VAR_10);
 VAR_7 = FUNC_0(VAR_3->base + VAR_2 + 4 * VAR_5);
 if ((VAR_7 ^ VAR_8) & (1 << VAR_6)) {
  VAR_7 ^= 1 << VAR_6;
  FUNC_4(VAR_7, VAR_3->base + VAR_2 + 4 * VAR_5);
  VAR_9 = 0;
 } else {

  VAR_9 = -1;
 }

 FUNC_3(&VAR_3->irq_lock, VAR_10);
 return VAR_9;
}
