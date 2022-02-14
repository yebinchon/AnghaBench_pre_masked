
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77686_rtc_info {int dev; TYPE_1__* drv_data; int rtc_regmap; } ;
typedef enum MAX77686_RTC_OP { ____Placeholder_MAX77686_RTC_OP } MAX77686_RTC_OP ;
struct TYPE_2__ {unsigned long delay; int * map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct max77686_rtc_info *VAR_4,
          enum MAX77686_RTC_OP VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8 = VAR_4->drv_data->delay;

 if (VAR_5 == VAR_0)
  VAR_7 = 1 << VAR_3;
 else
  VAR_7 = 1 << VAR_2;

 VAR_6 = FUNC_1(VAR_4->rtc_regmap,
     VAR_4->drv_data->map[VAR_1],
     VAR_7, VAR_7);
 if (VAR_6 < 0)
  FUNC_0(VAR_4->dev, "Fail to write update reg(ret=%d, data=0x%x)\n",
   VAR_6, VAR_7);
 else {

  FUNC_2(VAR_8, VAR_8 * 2);
 }

 return VAR_6;
}
