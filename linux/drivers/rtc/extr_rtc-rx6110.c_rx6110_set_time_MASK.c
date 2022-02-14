
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx6110_data {int regmap; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rx6110_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct rtc_time*,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct rx6110_data *VAR_8 = FUNC_0(VAR_6);
 u8 VAR_9[VAR_0];
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_2(VAR_8->regmap, VAR_3,
     VAR_1, VAR_1);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_8->regmap, VAR_5, VAR_9,
    VAR_0);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_2(VAR_8->regmap, VAR_4,
     VAR_2, 0);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_2(VAR_8->regmap, VAR_3,
     VAR_1, 0);

 return VAR_10;
}
