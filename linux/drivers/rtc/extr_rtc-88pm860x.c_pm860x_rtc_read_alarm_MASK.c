
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct pm860x_rtc_info {int i2c; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,unsigned long,...) ;
 struct pm860x_rtc_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int,unsigned char*) ;
 int FUNC_3 (int ,int ,int,unsigned char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned long,int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct pm860x_rtc_info *VAR_8 = FUNC_1(VAR_6);
 unsigned char VAR_9[8];
 unsigned long VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_3(VAR_8->i2c, VAR_5, 8, VAR_9);
 FUNC_0(VAR_8->dev, "%x-%x-%x-%x-%x-%x-%x-%x\n", VAR_9[0], VAR_9[1],
  VAR_9[2], VAR_9[3], VAR_9[4], VAR_9[5], VAR_9[6], VAR_9[7]);
 VAR_11 = ((unsigned long)VAR_9[1] << 24) | (VAR_9[3] << 16) |
  (VAR_9[5] << 8) | VAR_9[7];

 FUNC_2(VAR_8->i2c, VAR_4, 4, VAR_9);
 VAR_12 = ((unsigned long)VAR_9[3] << 24) | (VAR_9[2] << 16) |
  (VAR_9[1] << 8) | VAR_9[0];
 VAR_10 = VAR_11 + VAR_12;
 FUNC_0(VAR_8->dev, "get base:0x%lx, RO count:0x%lx, ticks:0x%lx\n",
  VAR_11, VAR_12, VAR_10);

 FUNC_5(VAR_10, &VAR_7->time);
 VAR_13 = FUNC_4(VAR_8->i2c, VAR_3);
 VAR_7->enabled = (VAR_13 & VAR_1) ? 1 : 0;
 VAR_7->pending = (VAR_13 & (VAR_0 | VAR_2)) ? 1 : 0;
 return 0;
}
