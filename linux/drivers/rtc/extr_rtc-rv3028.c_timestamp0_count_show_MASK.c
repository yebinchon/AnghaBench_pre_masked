
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv3028_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct rv3028_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct rv3028_data *VAR_4 = FUNC_0(VAR_1->parent);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4->regmap, VAR_0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_3, "%u\n", VAR_6);
}
