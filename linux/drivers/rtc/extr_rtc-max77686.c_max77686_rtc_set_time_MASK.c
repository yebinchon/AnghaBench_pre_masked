
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {int dummy; } ;
struct max77686_rtc_info {int lock; int dev; TYPE_1__* drv_data; int rtc_regmap; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * map; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 struct max77686_rtc_info* FUNC_2 (struct device*) ;
 int FUNC_3 (struct rtc_time*,int *,struct max77686_rtc_info*) ;
 int FUNC_4 (struct max77686_rtc_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct max77686_rtc_info *VAR_5 = FUNC_2(VAR_3);
 u8 VAR_6[VAR_2];
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_5(&VAR_5->lock);

 VAR_7 = FUNC_7(VAR_5->rtc_regmap,
    VAR_5->drv_data->map[VAR_1],
    VAR_6, FUNC_0(VAR_6));
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "Fail to write time reg(%d)\n", VAR_7);
  goto out;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_0);

out:
 FUNC_6(&VAR_5->lock);
 return VAR_7;
}
