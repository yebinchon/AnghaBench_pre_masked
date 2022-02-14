
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct pm80x_rtc_info {int map; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,unsigned long,...) ;
 struct pm80x_rtc_info* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (unsigned long,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct pm80x_rtc_info *VAR_8 = FUNC_1(VAR_6);
 unsigned char VAR_9[4];
 unsigned long VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_2(VAR_8->map, VAR_5, VAR_9, 4);
 VAR_11 = ((unsigned long)VAR_9[3] << 24) | (VAR_9[2] << 16) |
  (VAR_9[1] << 8) | VAR_9[0];
 FUNC_0(VAR_8->dev, "%x-%x-%x-%x\n", VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3]);

 FUNC_2(VAR_8->map, VAR_4, VAR_9, 4);
 VAR_12 = ((unsigned long)VAR_9[3] << 24) | (VAR_9[2] << 16) |
  (VAR_9[1] << 8) | VAR_9[0];
 VAR_10 = VAR_11 + VAR_12;
 FUNC_0(VAR_8->dev, "get base:0x%lx, RO count:0x%lx, ticks:0x%lx\n",
  VAR_11, VAR_12, VAR_10);

 FUNC_4(VAR_10, &VAR_7->time);
 FUNC_3(VAR_8->map, VAR_3, &VAR_13);
 VAR_7->enabled = (VAR_13 & VAR_1) ? 1 : 0;
 VAR_7->pending = (VAR_13 & (VAR_0 | VAR_2)) ? 1 : 0;
 return 0;
}
