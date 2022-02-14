
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf85363 {int regmap; int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pcf85363* FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct pcf85363 *VAR_8 = FUNC_0(VAR_7);
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8->regmap, VAR_0, &VAR_9);
 if (VAR_10)
  return VAR_3;

 if (VAR_9 & VAR_1) {
  FUNC_3(VAR_8->rtc, 1, VAR_5 | VAR_4);
  FUNC_2(VAR_8->regmap, VAR_0, VAR_1, 0);
  return VAR_2;
 }

 return VAR_3;
}
