
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_hwmon {int props; struct power_supply* psy; } ;
struct power_supply_desc {int num_properties; int* properties; char* name; } ;
struct device {int dummy; } ;
struct power_supply {struct power_supply_desc* desc; struct device dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct device*,int ,int ) ;
 struct device* FUNC_3 (struct device*,char const*,struct power_supply_hwmon*,int *,int *) ;
 char* FUNC_4 (struct device*,char const*,int ) ;
 struct power_supply_hwmon* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int (*) (struct power_supply*)) ;
 int FUNC_7 (struct device*,int (*) (struct power_supply*),int ) ;
 int FUNC_8 (struct device*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int const,int ) ;
 scalar_t__ FUNC_10 (char const*,char) ;
 int FUNC_11 (char*,char,char) ;

int FUNC_12(struct power_supply *VAR_5)
{
 const struct power_supply_desc *VAR_6 = VAR_5->desc;
 struct power_supply_hwmon *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 struct device *VAR_9;
 int VAR_10, VAR_11;
 const char *VAR_12;

 if (!FUNC_7(VAR_8, FUNC_12,
          VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_8, sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_10 = -VAR_0;
  goto error;
 }

 VAR_7->psy = VAR_5;
 VAR_7->props = FUNC_1(VAR_2 + 1,
         VAR_1);
 if (!VAR_7->props) {
  VAR_10 = -VAR_0;
  goto error;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_3,
         VAR_7->props);
 if (VAR_10)
  goto error;

 for (VAR_11 = 0; VAR_11 < VAR_6->num_properties; VAR_11++) {
  const enum power_supply_property VAR_13 = VAR_6->properties[VAR_11];

  switch (VAR_13) {
  case 142:
  case 141:
  case 140:
  case 139:
  case 133:
  case 132:
  case 137:
  case 138:
  case 136:
  case 134:
  case 135:
  case 131:
  case 129:
  case 130:
  case 128:
   FUNC_9(VAR_13, VAR_7->props);
   break;
  default:
   break;
  }
 }

 VAR_12 = VAR_5->desc->name;
 if (FUNC_10(VAR_12, '-')) {
  char *VAR_14;

  VAR_14 = FUNC_4(VAR_8, VAR_12, VAR_1);
  if (!VAR_14) {
   VAR_10 = -VAR_0;
   goto error;
  }
  FUNC_11(VAR_14, '-', '_');
  VAR_12 = VAR_14;
 }
 VAR_9 = FUNC_3(VAR_8, VAR_12,
      VAR_7,
      &VAR_4,
      ((void*)0));
 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  goto error;

 FUNC_6(VAR_8, FUNC_12);
 return 0;
error:
 FUNC_8(VAR_8, ((void*)0));
 return VAR_10;
}
