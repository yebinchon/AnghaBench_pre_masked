
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct rtc_time {int dummy; } ;
struct pm860x_rtc_info {int i2c; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,unsigned long,...) ;
 struct pm860x_rtc_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int,unsigned char*) ;
 int FUNC_3 (int ,int ,int,unsigned char*) ;
 int FUNC_4 (int ,int ,int,unsigned char*) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (struct rtc_time*,struct rtc_time*,int *) ;
 int FUNC_7 (unsigned long,struct rtc_time*) ;
 int FUNC_8 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_7, struct rtc_wkalrm *VAR_8)
{
 struct pm860x_rtc_info *VAR_9 = FUNC_1(VAR_7);
 struct rtc_time VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;
 unsigned char VAR_15[8];
 int VAR_16;

 FUNC_5(VAR_9->i2c, VAR_3, VAR_1, 0);

 FUNC_4(VAR_9->i2c, VAR_6, 8, VAR_15);
 FUNC_0(VAR_9->dev, "%x-%x-%x-%x-%x-%x-%x-%x\n", VAR_15[0], VAR_15[1],
  VAR_15[2], VAR_15[3], VAR_15[4], VAR_15[5], VAR_15[6], VAR_15[7]);
 VAR_13 = ((unsigned long)VAR_15[1] << 24) | (VAR_15[3] << 16) |
  (VAR_15[5] << 8) | VAR_15[7];


 FUNC_2(VAR_9->i2c, VAR_4, 4, VAR_15);
 VAR_14 = ((unsigned long)VAR_15[3] << 24) | (VAR_15[2] << 16) |
  (VAR_15[1] << 8) | VAR_15[0];
 VAR_12 = VAR_13 + VAR_14;
 FUNC_0(VAR_9->dev, "get base:0x%lx, RO count:0x%lx, ticks:0x%lx\n",
  VAR_13, VAR_14, VAR_12);

 FUNC_7(VAR_12, &VAR_10);
 FUNC_6(&VAR_11, &VAR_10, &VAR_8->time);

 FUNC_8(&VAR_11, &VAR_12);
 VAR_14 = VAR_12 - VAR_13;

 VAR_15[0] = VAR_14 & 0xff;
 VAR_15[1] = (VAR_14 >> 8) & 0xff;
 VAR_15[2] = (VAR_14 >> 16) & 0xff;
 VAR_15[3] = (VAR_14 >> 24) & 0xff;
 FUNC_3(VAR_9->i2c, VAR_5, 4, VAR_15);
 if (VAR_8->enabled) {
  VAR_16 = VAR_0 | VAR_2 | VAR_1;
  FUNC_5(VAR_9->i2c, VAR_3, VAR_16, VAR_16);
 } else {
  VAR_16 = VAR_0 | VAR_2 | VAR_1;
  FUNC_5(VAR_9->i2c, VAR_3, VAR_16,
    VAR_0 | VAR_2);
 }
 return 0;
}
