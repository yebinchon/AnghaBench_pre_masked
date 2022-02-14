
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1343_priv {int map; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;






 int VAR_0 ;
 int VAR_1 ;
 struct ds1343_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct ds1343_priv *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;
 char *VAR_7 = "disabled", *VAR_8 = " ";

 FUNC_1(VAR_5->map, VAR_1, &VAR_6);

 if ((VAR_6 & 0xf0) == VAR_0) {
  switch (VAR_6 & 0x0c) {
  case 128:
   VAR_7 = "one diode,";
   break;

  default:
   VAR_7 = "no diode,";
   break;
  }

  switch (VAR_6 & 0x03) {
  case 131:
   VAR_8 = "1k Ohm";
   break;

  case 130:
   VAR_8 = "2k Ohm";
   break;

  case 129:
   VAR_8 = "4k Ohm";
   break;

  default:
   VAR_7 = "disabled";
   break;
  }
 }

 return FUNC_2(VAR_4, "%s %s\n", VAR_7, VAR_8);
}
