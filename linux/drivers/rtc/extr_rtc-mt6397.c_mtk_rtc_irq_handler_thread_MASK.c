
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt6397_rtc {int lock; scalar_t__ addr_base; int regmap; int rtc_dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mt6397_rtc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct mt6397_rtc *VAR_10 = VAR_9;
 u32 VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_10->regmap, VAR_10->addr_base + VAR_6, &VAR_11);
 if ((VAR_13 >= 0) && (VAR_11 & VAR_7)) {
  FUNC_5(VAR_10->rtc_dev, 1, VAR_3 | VAR_2);
  VAR_12 = VAR_11 & ~VAR_5;
  FUNC_1(&VAR_10->lock);
  if (FUNC_4(VAR_10->regmap, VAR_10->addr_base + VAR_4,
     VAR_12) < 0)
   FUNC_0(VAR_10);
  FUNC_2(&VAR_10->lock);

  return VAR_0;
 }

 return VAR_1;
}
