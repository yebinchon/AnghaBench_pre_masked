
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tps65910_rtc {int rtc; } ;
struct tps65910 {int regmap; } ;
struct device {struct device* parent; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct device *VAR_8 = VAR_7;
 unsigned long VAR_9 = 0;
 struct tps65910 *VAR_10 = FUNC_0(VAR_8->parent);
 struct tps65910_rtc *VAR_11 = FUNC_0(VAR_8);
 int VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_1(VAR_10->regmap, VAR_4, &VAR_13);
 if (VAR_12)
  return VAR_1;

 if (VAR_13 & VAR_5)
  VAR_9 = VAR_3 | VAR_2;

 VAR_12 = FUNC_2(VAR_10->regmap, VAR_4, VAR_13);
 if (VAR_12)
  return VAR_1;


 FUNC_3(VAR_11->rtc, 1, VAR_9);

 return VAR_0;
}
