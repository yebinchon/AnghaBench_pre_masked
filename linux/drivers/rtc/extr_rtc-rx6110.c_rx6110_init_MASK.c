
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx6110_data {int regmap; struct rtc_device* rtc; } ;
struct rtc_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct rx6110_data *VAR_8)
{
 struct rtc_device *VAR_9 = VAR_8->rtc;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_8->regmap, VAR_5,
     VAR_0, 0);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_8->regmap, VAR_7,
        FUNC_0(VAR_7));
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_8->regmap, VAR_6, &VAR_10);
 if (VAR_11)
  return VAR_11;


 if ((VAR_10 & VAR_4))
  FUNC_1(&VAR_9->dev, "Voltage low, data loss detected.\n");


 if (VAR_10 & VAR_1)
  FUNC_1(&VAR_9->dev, "An alarm may have been missed.\n");


 if (VAR_10 & VAR_2)
  FUNC_1(&VAR_9->dev, "Periodic timer was detected\n");


 if (VAR_10 & VAR_3)
  FUNC_1(&VAR_9->dev, "Update timer was detected\n");


 VAR_11 = FUNC_4(VAR_8->regmap, VAR_6,
     VAR_1 |
     VAR_3 |
     VAR_2,
     0);

 return VAR_11;
}
