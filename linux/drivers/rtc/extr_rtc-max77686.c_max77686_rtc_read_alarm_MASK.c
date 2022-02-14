
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct max77686_rtc_info {int lock; int dev; TYPE_1__* drv_data; int regmap; int rtc_regmap; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int* map; unsigned int const alarm_pending_status_reg; scalar_t__ alarm_enable_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 unsigned int const VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int const VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 struct max77686_rtc_info* FUNC_2 (struct device*) ;
 int FUNC_3 (int*,int *,struct max77686_rtc_info*) ;
 int FUNC_4 (struct max77686_rtc_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,unsigned int const,int*,int) ;
 int FUNC_8 (int ,unsigned int const,unsigned int*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct max77686_rtc_info *VAR_10 = FUNC_2(VAR_8);
 u8 VAR_11[VAR_7];
 unsigned int VAR_12;
 const unsigned int *VAR_13 = VAR_10->drv_data->map;
 int VAR_14, VAR_15;

 FUNC_5(&VAR_10->lock);

 VAR_15 = FUNC_4(VAR_10, VAR_3);
 if (VAR_15 < 0)
  goto out;

 VAR_15 = FUNC_7(VAR_10->rtc_regmap, VAR_13[VAR_4],
          VAR_11, FUNC_0(VAR_11));
 if (VAR_15 < 0) {
  FUNC_1(VAR_10->dev, "Fail to read alarm reg(%d)\n", VAR_15);
  goto out;
 }

 FUNC_3(VAR_11, &VAR_9->time, VAR_10);

 VAR_9->enabled = 0;

 if (VAR_10->drv_data->alarm_enable_reg) {
  if (VAR_13[VAR_5] == VAR_6) {
   VAR_15 = -VAR_1;
   FUNC_1(VAR_10->dev,
    "alarm enable register not set(%d)\n", VAR_15);
   goto out;
  }

  VAR_15 = FUNC_8(VAR_10->rtc_regmap, VAR_13[VAR_5], &VAR_12);
  if (VAR_15 < 0) {
   FUNC_1(VAR_10->dev,
    "fail to read alarm enable(%d)\n", VAR_15);
   goto out;
  }

  if (VAR_12)
   VAR_9->enabled = 1;
 } else {
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_11); VAR_14++) {
   if (VAR_11[VAR_14] & VAR_0) {
    VAR_9->enabled = 1;
    break;
   }
  }
 }

 VAR_9->pending = 0;

 if (VAR_10->drv_data->alarm_pending_status_reg == VAR_2)
  goto out;

 VAR_15 = FUNC_8(VAR_10->regmap,
     VAR_10->drv_data->alarm_pending_status_reg, &VAR_12);
 if (VAR_15 < 0) {
  FUNC_1(VAR_10->dev,
   "Fail to read alarm pending status reg(%d)\n", VAR_15);
  goto out;
 }

 if (VAR_12 & (1 << 4))
  VAR_9->pending = 1;

out:
 FUNC_6(&VAR_10->lock);
 return VAR_15;
}
