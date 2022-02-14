
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1307 {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct ds1307* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct ds1307 *VAR_6 = FUNC_1(VAR_2->parent);
 bool VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, &VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_2, "Failed to store RTC Frequency Test attribute\n");
  return VAR_8;
 }

 FUNC_3(VAR_6->regmap, VAR_1, VAR_0,
      VAR_7 ? VAR_0 : 0);

 return VAR_5;
}
