
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max77686_rtc_info {int rtc_24hr_mode; int dev; TYPE_1__* drv_data; int rtc_regmap; } ;
struct TYPE_2__ {int * map; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct max77686_rtc_info*,int ) ;
 int FUNC_3 (int ,int ,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct max77686_rtc_info *VAR_4)
{
 u8 VAR_5[2];
 int VAR_6;


 VAR_5[0] = (1 << VAR_0) | (1 << VAR_2);
 VAR_5[1] = (0 << VAR_0) | (1 << VAR_2);

 VAR_4->rtc_24hr_mode = 1;

 VAR_6 = FUNC_3(VAR_4->rtc_regmap,
    VAR_4->drv_data->map[VAR_3],
    VAR_5, FUNC_0(VAR_5));
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->dev, "Fail to write controlm reg(%d)\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_1);
 return VAR_6;
}
