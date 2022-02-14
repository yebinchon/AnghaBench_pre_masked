
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_rtc_info {int lock; scalar_t__ base; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tegra_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ,struct rtc_time*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct rtc_time*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct tegra_rtc_info *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;





 FUNC_4(&VAR_4->lock, VAR_5);

 VAR_7 = FUNC_2(VAR_4->base + VAR_0);
 VAR_6 = FUNC_2(VAR_4->base + VAR_1);

 FUNC_5(&VAR_4->lock, VAR_5);

 FUNC_3(VAR_6, VAR_3);

 FUNC_1(VAR_2, "time read as %u, %ptR\n", VAR_6, VAR_3);

 return 0;
}
