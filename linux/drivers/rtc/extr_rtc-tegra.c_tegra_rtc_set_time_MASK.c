
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_rtc_info {scalar_t__ base; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tegra_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct tegra_rtc_info *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4;
 int VAR_5;


 VAR_4 = FUNC_3(VAR_2);

 FUNC_1(VAR_1, "time set to %u, %ptR\n", VAR_4, VAR_2);


 VAR_5 = FUNC_4(VAR_1);
 if (!VAR_5)
  FUNC_5(VAR_4, VAR_3->base + VAR_0);

 FUNC_1(VAR_1, "time read back as %d\n",
   FUNC_2(VAR_3->base + VAR_0));

 return VAR_5;
}
