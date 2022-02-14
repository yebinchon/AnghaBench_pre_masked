
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tja11xx_priv {char* hwmon_name; int hwmon_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {TYPE_1__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,struct phy_device*,int *,int *) ;
 char* FUNC_3 (struct device*,int ,int ) ;
 struct tja11xx_priv* FUNC_4 (struct device*,int,int ) ;
 scalar_t__ FUNC_5 (char) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->mdio.dev;
 struct tja11xx_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->hwmon_name = FUNC_3(VAR_4, FUNC_1(VAR_4), VAR_1);
 if (!VAR_5->hwmon_name)
  return -VAR_0;

 for (VAR_6 = 0; VAR_5->hwmon_name[VAR_6]; VAR_6++)
  if (FUNC_5(VAR_5->hwmon_name[VAR_6]))
   VAR_5->hwmon_name[VAR_6] = '_';

 VAR_5->hwmon_dev =
  FUNC_2(VAR_4, VAR_5->hwmon_name,
           VAR_3,
           &VAR_2,
           ((void*)0));

 return FUNC_0(VAR_5->hwmon_dev);
}
