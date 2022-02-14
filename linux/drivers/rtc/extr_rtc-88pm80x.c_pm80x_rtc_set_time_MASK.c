
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct pm80x_rtc_info {int map; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,unsigned long) ;
 struct pm80x_rtc_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ,unsigned char*,int) ;
 unsigned long FUNC_4 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct pm80x_rtc_info *VAR_4 = FUNC_1(VAR_2);
 unsigned char VAR_5[4];
 unsigned long VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_4(VAR_3);


 FUNC_2(VAR_4->map, VAR_0, VAR_5, 4);
 VAR_8 = ((unsigned long)VAR_5[3] << 24) | (VAR_5[2] << 16) |
  (VAR_5[1] << 8) | VAR_5[0];
 VAR_7 = VAR_6 - VAR_8;
 FUNC_0(VAR_4->dev, "set base:0x%lx, RO count:0x%lx, ticks:0x%lx\n",
  VAR_7, VAR_8, VAR_6);
 VAR_5[0] = VAR_7 & 0xFF;
 VAR_5[1] = (VAR_7 >> 8) & 0xFF;
 VAR_5[2] = (VAR_7 >> 16) & 0xFF;
 VAR_5[3] = (VAR_7 >> 24) & 0xFF;
 FUNC_3(VAR_4->map, VAR_1, VAR_5, 4);

 return 0;
}
