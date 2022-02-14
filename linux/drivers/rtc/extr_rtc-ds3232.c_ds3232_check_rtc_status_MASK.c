
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds3232 {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ds3232* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_8)
{
 struct ds3232 *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = 0;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_9->regmap, VAR_4, &VAR_12);
 if (VAR_10)
  return VAR_10;

 if (VAR_12 & VAR_7)
  FUNC_1(VAR_8,
    "oscillator discontinuity flagged, "
    "time unreliable\n");

 VAR_12 &= ~(VAR_7 | VAR_5 | VAR_6);

 VAR_10 = FUNC_3(VAR_9->regmap, VAR_4, VAR_12);
 if (VAR_10)
  return VAR_10;






 VAR_10 = FUNC_2(VAR_9->regmap, VAR_0, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 &= ~(VAR_1 | VAR_2);
 VAR_11 |= VAR_3;

 return FUNC_3(VAR_9->regmap, VAR_0, VAR_11);
}
