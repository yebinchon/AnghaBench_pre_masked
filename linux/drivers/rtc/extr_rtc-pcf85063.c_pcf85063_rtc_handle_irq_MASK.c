
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf85063 {int regmap; int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int,int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct pcf85063 *VAR_9 = VAR_8;
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_9->regmap, VAR_4, &VAR_10);
 if (VAR_11)
  return VAR_1;

 if (VAR_10 & VAR_2) {
  FUNC_2(VAR_9->rtc, 1, VAR_6 | VAR_5);
  FUNC_1(VAR_9->regmap, VAR_4,
       VAR_3 | VAR_2,
       0);
  return VAR_0;
 }

 return VAR_1;
}
