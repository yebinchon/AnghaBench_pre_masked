
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_rtc {scalar_t__ base; int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sprd_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,int,int) ;
 int FUNC_2 (struct sprd_rtc*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, unsigned int VAR_4)
{
 struct sprd_rtc *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (VAR_4) {
  VAR_6 = FUNC_1(VAR_5->regmap,
      VAR_5->base + VAR_2,
      VAR_0 | VAR_1,
      VAR_0 | VAR_1);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_2(VAR_5, 0);
 } else {
  FUNC_1(VAR_5->regmap, VAR_5->base + VAR_2,
       VAR_0 | VAR_1, 0);

  VAR_6 = FUNC_2(VAR_5, 1);
 }

 return VAR_6;
}
