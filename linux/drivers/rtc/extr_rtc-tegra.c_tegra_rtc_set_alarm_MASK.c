
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tegra_rtc_info {scalar_t__ base; } ;
struct rtc_wkalrm {int time; scalar_t__ enabled; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tegra_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct tegra_rtc_info *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4;

 if (VAR_2->enabled)
  VAR_4 = FUNC_3(&VAR_2->time);
 else
  VAR_4 = 0;

 FUNC_5(VAR_1);
 FUNC_6(VAR_4, VAR_3->base + VAR_0);
 FUNC_1(VAR_1, "alarm read back as %d\n",
   FUNC_2(VAR_3->base + VAR_0));


 if (VAR_4) {
  FUNC_4(VAR_1, 1);
  FUNC_1(VAR_1, "alarm set as %u, %ptR\n", VAR_4, &VAR_2->time);
 } else {

  FUNC_1(VAR_1, "alarm disabled\n");
  FUNC_4(VAR_1, 0);
 }

 return 0;
}
