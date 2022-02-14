
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct thermal_zone_device {int dummy; } ;
struct tegra_bpmp_thermal_zone {unsigned int idx; int tz_device_update_work; struct thermal_zone_device* tzd; struct tegra_bpmp_thermal* tegra; } ;
struct tegra_bpmp_thermal {int num_zones; struct tegra_bpmp_thermal_zone** zones; struct tegra_bpmp* bpmp; TYPE_1__* dev; } ;
struct tegra_bpmp {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct thermal_zone_device*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 struct tegra_bpmp* FUNC_4 (int ) ;
 struct tegra_bpmp_thermal_zone** FUNC_5 (TYPE_1__*,unsigned int,int,int ) ;
 int FUNC_6 (TYPE_1__*,struct tegra_bpmp_thermal_zone*) ;
 void* FUNC_7 (TYPE_1__*,int,int ) ;
 struct thermal_zone_device* FUNC_8 (TYPE_1__*,unsigned int,struct tegra_bpmp_thermal_zone*,int *) ;
 int FUNC_9 (struct platform_device*,struct tegra_bpmp_thermal*) ;
 int VAR_5 ;
 int FUNC_10 (struct tegra_bpmp*,int ,int ,struct tegra_bpmp_thermal*) ;
 int FUNC_11 (struct tegra_bpmp*,unsigned int*) ;
 int FUNC_12 (struct tegra_bpmp_thermal_zone*,int*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct tegra_bpmp *VAR_8 = FUNC_4(VAR_7->dev.parent);
 struct tegra_bpmp_thermal *VAR_9;
 struct thermal_zone_device *VAR_10;
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = FUNC_7(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = &VAR_7->dev;
 VAR_9->bpmp = VAR_8;

 VAR_13 = FUNC_11(VAR_8, &VAR_12);
 if (VAR_13) {
  FUNC_3(&VAR_7->dev, "failed to get the number of zones: %d\n",
   VAR_13);
  return VAR_13;
 }

 VAR_9->zones = FUNC_5(&VAR_7->dev, VAR_12,
        sizeof(*VAR_9->zones), VAR_2);
 if (!VAR_9->zones)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  struct tegra_bpmp_thermal_zone *VAR_14;
  int VAR_15;

  VAR_14 = FUNC_7(&VAR_7->dev, sizeof(*VAR_14), VAR_2);
  if (!VAR_14)
   return -VAR_0;

  VAR_14->idx = VAR_11;
  VAR_14->tegra = VAR_9;

  VAR_13 = FUNC_12(VAR_14, &VAR_15);
  if (VAR_13 < 0) {
   FUNC_6(&VAR_7->dev, VAR_14);
   continue;
  }

  VAR_10 = FUNC_8(
   &VAR_7->dev, VAR_11, VAR_14, &VAR_5);
  if (FUNC_1(VAR_10)) {
   if (FUNC_2(VAR_10) == -VAR_1)
    return -VAR_1;
   FUNC_6(&VAR_7->dev, VAR_14);
   continue;
  }

  VAR_14->tzd = VAR_10;
  FUNC_0(&VAR_14->tz_device_update_work,
     VAR_6);

  VAR_9->zones[VAR_9->num_zones++] = VAR_14;
 }

 VAR_13 = FUNC_10(VAR_8, VAR_3, VAR_4,
         VAR_9);
 if (VAR_13) {
  FUNC_3(&VAR_7->dev, "failed to register mrq handler: %d\n",
   VAR_13);
  return VAR_13;
 }

 FUNC_9(VAR_7, VAR_9);

 return 0;
}
