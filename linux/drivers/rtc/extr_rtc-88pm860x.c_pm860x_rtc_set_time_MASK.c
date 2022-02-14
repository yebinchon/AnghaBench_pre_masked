
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; } ;
struct pm860x_rtc_info {int (* sync ) (unsigned long) ;int i2c; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned long,...) ;
 struct pm860x_rtc_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int,unsigned char*) ;
 int FUNC_3 (int ,int ,unsigned long) ;
 int FUNC_4 (struct rtc_time*,unsigned long*) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct pm860x_rtc_info *VAR_8 = FUNC_1(VAR_6);
 unsigned char VAR_9[4];
 unsigned long VAR_10, VAR_11, VAR_12;

 if (VAR_7->tm_year > 206) {
  FUNC_0(VAR_8->dev, "Set time %d out of range. "
   "Please set time between 1970 to 2106.\n",
   1900 + VAR_7->tm_year);
  return -VAR_0;
 }
 FUNC_4(VAR_7, &VAR_10);


 FUNC_2(VAR_8->i2c, VAR_1, 4, VAR_9);
 VAR_12 = ((unsigned long)VAR_9[3] << 24) | (VAR_9[2] << 16) |
  (VAR_9[1] << 8) | VAR_9[0];
 VAR_11 = VAR_10 - VAR_12;
 FUNC_0(VAR_8->dev, "set base:0x%lx, RO count:0x%lx, ticks:0x%lx\n",
  VAR_11, VAR_12, VAR_10);

 FUNC_3(VAR_8->i2c, VAR_2, (VAR_11 >> 24) & 0xFF);
 FUNC_3(VAR_8->i2c, VAR_3, (VAR_11 >> 16) & 0xFF);
 FUNC_3(VAR_8->i2c, VAR_4, (VAR_11 >> 8) & 0xFF);
 FUNC_3(VAR_8->i2c, VAR_5, VAR_11 & 0xFF);

 if (VAR_8->sync)
  VAR_8->sync(VAR_10);
 return 0;
}
