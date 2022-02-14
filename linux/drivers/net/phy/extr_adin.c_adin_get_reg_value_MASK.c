
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct adin_cfg_reg_map {int dummy; } ;


 int FUNC_0 (struct adin_cfg_reg_map const*,int) ;
 scalar_t__ FUNC_1 (struct device*,char const*,int*) ;
 int FUNC_2 (struct phy_device*,char*,int,char const*,int) ;

__attribute__((used)) static u32 FUNC_3(struct phy_device *VAR_0,
         const char *VAR_1,
         const struct adin_cfg_reg_map *VAR_2,
         u32 VAR_3)
{
 struct device *VAR_4 = &VAR_0->mdio.dev;
 u32 VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_4, VAR_1, &VAR_5))
  return VAR_3;

 VAR_6 = FUNC_0(VAR_2, VAR_5);
 if (VAR_6 < 0) {
  FUNC_2(VAR_0,
       "Unsupported value %u for %s using default (%u)\n",
       VAR_5, VAR_1, VAR_3);
  return VAR_3;
 }

 return VAR_6;
}
