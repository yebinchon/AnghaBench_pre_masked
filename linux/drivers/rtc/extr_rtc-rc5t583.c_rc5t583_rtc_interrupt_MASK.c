
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc5t583_rtc {int rtc; } ;
struct rc5t583 {int regmap; } ;
struct device {struct device* parent; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 void* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct device *VAR_8 = VAR_7;
 struct rc5t583 *VAR_9 = FUNC_0(VAR_8->parent);
 struct rc5t583_rtc *VAR_10 = FUNC_0(VAR_8);
 unsigned long VAR_11 = 0;
 int VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_1(VAR_9->regmap, VAR_3, &VAR_13);
 if (VAR_12 < 0)
  return VAR_2;

 if (VAR_13 & VAR_0) {
  VAR_11 = VAR_5 | VAR_4;

  VAR_13 &= ~VAR_0;
 }

 VAR_12 = FUNC_2(VAR_9->regmap, VAR_3, VAR_13);
 if (VAR_12)
  return VAR_2;


 FUNC_3(VAR_10->rtc, 1, VAR_11);

 return VAR_1;
}
