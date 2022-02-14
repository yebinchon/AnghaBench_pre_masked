
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct regmap* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct regmap*,int ,int ,unsigned long) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct regmap *VAR_6 = FUNC_1(FUNC_4(VAR_2));
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, 16, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_6, VAR_1, VAR_0,
     VAR_7 << FUNC_0(VAR_0));
 if (VAR_8 < 0)
  return VAR_8;

 return VAR_5;
}
