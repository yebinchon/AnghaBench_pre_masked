
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device_ops {int dummy; } ;
struct thermal_cooling_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct thermal_cooling_device* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct thermal_cooling_device*) ;
 struct thermal_cooling_device* FUNC_2 (struct device_node*,char*,void*,struct thermal_cooling_device_ops const*) ;
 int FUNC_3 (struct device*,struct thermal_cooling_device**) ;
 struct thermal_cooling_device** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct thermal_cooling_device**) ;
 int VAR_2 ;

struct thermal_cooling_device *
FUNC_6(struct device *VAR_3,
    struct device_node *VAR_4,
    char *VAR_5, void *VAR_6,
    const struct thermal_cooling_device_ops *VAR_7)
{
 struct thermal_cooling_device **VAR_8, *VAR_9;

 VAR_8 = FUNC_4(VAR_2, sizeof(*VAR_8),
      VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
 if (FUNC_1(VAR_9)) {
  FUNC_5(VAR_8);
  return VAR_9;
 }

 *VAR_8 = VAR_9;
 FUNC_3(VAR_3, VAR_8);

 return VAR_9;
}
