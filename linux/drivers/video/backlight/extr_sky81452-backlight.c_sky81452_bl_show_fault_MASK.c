
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct regmap* FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 struct regmap *VAR_6 = FUNC_0(FUNC_4(VAR_3));
 unsigned int VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_2, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_5 = 0;

 if (VAR_7 & VAR_0)
  FUNC_2(VAR_5, "over-current ");

 if (VAR_7 & VAR_1)
  FUNC_2(VAR_5, "over-temperature");

 FUNC_2(VAR_5, "\n");
 return FUNC_3(VAR_5);
}
