
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_rtc_info {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct tegra_rtc_info* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct tegra_rtc_info*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct tegra_rtc_info *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 500;





 while (FUNC_2(VAR_2)) {
  if (!VAR_3--)
   goto retry_failed;

  FUNC_3(1);
 }


 return 0;

retry_failed:
 FUNC_0(VAR_1, "write failed: retry count exceeded\n");
 return -VAR_0;
}
