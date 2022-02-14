
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv3028_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rv3028_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct rv3028_data *VAR_6 = FUNC_0(VAR_2->parent);

 FUNC_1(VAR_6->regmap, VAR_0, VAR_1,
      VAR_1);

 return VAR_5;
}
