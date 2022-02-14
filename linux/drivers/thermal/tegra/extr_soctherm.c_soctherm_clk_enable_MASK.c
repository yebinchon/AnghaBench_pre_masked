
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_soctherm {int reset; int clock_soctherm; int clock_tsensor; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tegra_soctherm* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1, bool VAR_2)
{
 struct tegra_soctherm *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (!VAR_3->clock_soctherm || !VAR_3->clock_tsensor)
  return -VAR_0;

 FUNC_3(VAR_3->reset);

 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_3->clock_soctherm);
  if (VAR_4) {
   FUNC_4(VAR_3->reset);
   return VAR_4;
  }

  VAR_4 = FUNC_1(VAR_3->clock_tsensor);
  if (VAR_4) {
   FUNC_0(VAR_3->clock_soctherm);
   FUNC_4(VAR_3->reset);
   return VAR_4;
  }
 } else {
  FUNC_0(VAR_3->clock_tsensor);
  FUNC_0(VAR_3->clock_soctherm);
 }

 FUNC_4(VAR_3->reset);

 return 0;
}
