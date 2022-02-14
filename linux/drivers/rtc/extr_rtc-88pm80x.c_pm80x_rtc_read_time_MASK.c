
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct pm80x_rtc_info {int dev; int map; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,unsigned long,...) ;
 struct pm80x_rtc_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned char*,int) ;
 int FUNC_3 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct pm80x_rtc_info *VAR_4 = FUNC_1(VAR_2);
 unsigned char VAR_5[4];
 unsigned long VAR_6, VAR_7, VAR_8;
 FUNC_2(VAR_4->map, VAR_1, VAR_5, 4);
 VAR_7 = ((unsigned long)VAR_5[3] << 24) | (VAR_5[2] << 16) |
  (VAR_5[1] << 8) | VAR_5[0];
 FUNC_0(VAR_4->dev, "%x-%x-%x-%x\n", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);


 FUNC_2(VAR_4->map, VAR_0, VAR_5, 4);
 VAR_8 = ((unsigned long)VAR_5[3] << 24) | (VAR_5[2] << 16) |
  (VAR_5[1] << 8) | VAR_5[0];
 VAR_6 = VAR_7 + VAR_8;
 FUNC_0(VAR_4->dev, "get base:0x%lx, RO count:0x%lx, ticks:0x%lx\n",
  VAR_7, VAR_8, VAR_6);
 FUNC_3(VAR_6, VAR_3);
 return 0;
}
