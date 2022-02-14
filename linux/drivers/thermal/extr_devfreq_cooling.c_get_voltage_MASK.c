
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct devfreq {TYPE_1__ dev; } ;
struct dev_pm_opp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 int FUNC_2 (struct device*,char*,unsigned long,...) ;
 struct dev_pm_opp* FUNC_3 (struct device*,unsigned long,int) ;
 int FUNC_4 (struct dev_pm_opp*) ;
 int FUNC_5 (struct dev_pm_opp*) ;

__attribute__((used)) static unsigned long FUNC_6(struct devfreq *VAR_1, unsigned long VAR_2)
{
 struct device *VAR_3 = VAR_1->dev.parent;
 unsigned long VAR_4;
 struct dev_pm_opp *VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_2, 1);
 if (FUNC_1(VAR_5) == -VAR_0)
  VAR_5 = FUNC_3(VAR_3, VAR_2, 0);

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_3, "Failed to find OPP for frequency %lu: %ld\n",
        VAR_2, FUNC_1(VAR_5));
  return 0;
 }

 VAR_4 = FUNC_4(VAR_5) / 1000;
 FUNC_5(VAR_5);

 if (VAR_4 == 0) {
  FUNC_2(VAR_3,
        "Failed to get voltage for frequency %lu\n",
        VAR_2);
 }

 return VAR_4;
}
