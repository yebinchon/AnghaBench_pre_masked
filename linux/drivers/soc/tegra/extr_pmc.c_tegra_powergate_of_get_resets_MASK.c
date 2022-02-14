
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_powergate {int reset; TYPE_1__* pmc; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct tegra_powergate *VAR_0,
      struct device_node *VAR_1, bool VAR_2)
{
 struct device *VAR_3 = VAR_0->pmc->dev;
 int VAR_4;

 VAR_0->reset = FUNC_3(VAR_1);
 if (FUNC_0(VAR_0->reset)) {
  VAR_4 = FUNC_1(VAR_0->reset);
  FUNC_2(VAR_3, "failed to get device resets: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_0->reset);
 if (VAR_4 < 0) {
  FUNC_4("failed to acquire resets: %d\n", VAR_4);
  goto out;
 }

 if (VAR_2) {
  VAR_4 = FUNC_6(VAR_0->reset);
 } else {
  VAR_4 = FUNC_7(VAR_0->reset);
  if (VAR_4 < 0)
   goto out;

  FUNC_9(VAR_0->reset);
 }

out:
 if (VAR_4) {
  FUNC_9(VAR_0->reset);
  FUNC_8(VAR_0->reset);
 }

 return VAR_4;
}
