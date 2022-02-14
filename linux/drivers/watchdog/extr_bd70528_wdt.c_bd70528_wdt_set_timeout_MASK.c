
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdtbd70528 {int mfd; int dev; int regmap; } ;
struct watchdog_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wdtbd70528*,int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int ,unsigned int) ;
 struct wdtbd70528* FUNC_7 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_8(struct watchdog_device *VAR_6,
       unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 struct wdtbd70528 *VAR_12 = FUNC_7(VAR_6);

 VAR_10 = VAR_7;
 VAR_8 = VAR_7 / (60 * 60);

 if (VAR_8)
  VAR_10 -= (60 * 60);
 VAR_9 = VAR_10 / 60;
 VAR_10 = VAR_10 % 60;

 FUNC_0(VAR_12->mfd);

 VAR_11 = FUNC_1(VAR_12, 0);
 if (VAR_11)
  goto out_unlock;

 VAR_11 = FUNC_6(VAR_12->regmap, VAR_3,
     VAR_0, VAR_8);
 if (VAR_11) {
  FUNC_5(VAR_12->dev, "Failed to set WDT hours\n");
  goto out_en_unlock;
 }
 VAR_11 = FUNC_6(VAR_12->regmap, VAR_4,
     VAR_1, FUNC_3(VAR_9));
 if (VAR_11) {
  FUNC_5(VAR_12->dev, "Failed to set WDT minutes\n");
  goto out_en_unlock;
 }
 VAR_11 = FUNC_6(VAR_12->regmap, VAR_5,
     VAR_2, FUNC_3(VAR_10));
 if (VAR_11)
  FUNC_5(VAR_12->dev, "Failed to set WDT seconds\n");
 else
  FUNC_4(VAR_12->dev, "WDT tmo set to %u\n", VAR_7);

out_en_unlock:
 VAR_11 = FUNC_1(VAR_12, 1);
out_unlock:
 FUNC_2(VAR_12->mfd);

 return VAR_11;
}
