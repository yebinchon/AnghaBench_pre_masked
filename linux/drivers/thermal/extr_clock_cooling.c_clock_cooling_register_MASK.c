
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int notifier_call; } ;
struct clock_cooling_device {int id; TYPE_1__ clk_rate_change_nb; struct thermal_cooling_device* clk; int clock_val; scalar_t__ clock_state; int freq_table; struct thermal_cooling_device* cdev; struct device* dev; int lock; } ;
typedef int dev_name ;


 int VAR_0 ;
 int VAR_1 ;
 struct thermal_cooling_device* FUNC_0 (struct thermal_cooling_device*) ;
 struct thermal_cooling_device* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct thermal_cooling_device*) ;
 int VAR_3 ;
 int FUNC_3 (struct thermal_cooling_device*,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (struct clock_cooling_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct device*,int *) ;
 struct thermal_cooling_device* FUNC_6 (struct device*,char const*) ;
 struct clock_cooling_device* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,int) ;
 struct thermal_cooling_device* FUNC_12 (char*,struct clock_cooling_device*,int *) ;

struct thermal_cooling_device *
FUNC_13(struct device *VAR_7, const char *VAR_8)
{
 struct thermal_cooling_device *VAR_9;
 struct clock_cooling_device *VAR_10 = ((void*)0);
 char VAR_11[VAR_3];
 int VAR_12 = 0;

 VAR_10 = FUNC_7(VAR_7, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_1(-VAR_1);

 FUNC_10(&VAR_10->lock);
 VAR_10->dev = VAR_7;
 VAR_10->clk = FUNC_6(VAR_7, VAR_8);
 if (FUNC_2(VAR_10->clk))
  return FUNC_0(VAR_10->clk);

 VAR_12 = FUNC_8(&VAR_6, 0, 0, VAR_2);
 if (VAR_12 < 0)
  return FUNC_1(VAR_12);
 VAR_10->id = VAR_12;

 FUNC_11(VAR_11, sizeof(VAR_11), "thermal-clock-%d", VAR_10->id);

 VAR_9 = FUNC_12(VAR_11, VAR_10,
            &VAR_5);
 if (FUNC_2(VAR_9)) {
  FUNC_9(&VAR_6, VAR_10->id);
  return FUNC_1(-VAR_0);
 }
 VAR_10->cdev = VAR_9;
 VAR_10->clk_rate_change_nb.notifier_call = VAR_4;


 VAR_12 = FUNC_5(VAR_7, &VAR_10->freq_table);
 if (VAR_12) {
  FUNC_9(&VAR_6, VAR_10->id);
  return FUNC_1(VAR_12);
 }
 VAR_10->clock_state = 0;
 VAR_10->clock_val = FUNC_4(VAR_10, 0);

 FUNC_3(VAR_10->clk, &VAR_10->clk_rate_change_nb);

 return VAR_9;
}
