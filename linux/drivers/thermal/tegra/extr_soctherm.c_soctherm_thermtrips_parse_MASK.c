
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tsensor_group_thermtrips {scalar_t__ temp; scalar_t__ id; } ;
struct tegra_soctherm {TYPE_1__* soc; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int num_ttgs; struct tsensor_group_thermtrips* thermtrips; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct tegra_soctherm* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__* FUNC_3 (struct device*,int const,int,int ) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct tegra_soctherm *VAR_5 = FUNC_1(VAR_4);
 struct tsensor_group_thermtrips *VAR_6 = VAR_5->soc->thermtrips;
 const int VAR_7 = VAR_5->soc->num_ttgs * 2;
 u32 *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (!VAR_6)
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_4->of_node, "nvidia,thermtrips");
 if (VAR_11 <= 0) {
  FUNC_2(VAR_4,
    "missing thermtrips, will use critical trips as shut down temp\n");
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_7, VAR_11);

 VAR_8 = FUNC_3(&VAR_3->dev, VAR_7, sizeof(u32), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_12 = FUNC_6(VAR_4->of_node, "nvidia,thermtrips",
      VAR_8, VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_4, "invalid num ele: thermtrips:%d\n", VAR_12);
  return VAR_12;
 }

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10 = VAR_10 + 2) {
  if (VAR_8[VAR_10] >= VAR_2)
   continue;

  VAR_6[VAR_9].id = VAR_8[VAR_10];
  VAR_6[VAR_9].temp = VAR_8[VAR_10 + 1];
  VAR_9++;
 }

 return 0;
}
