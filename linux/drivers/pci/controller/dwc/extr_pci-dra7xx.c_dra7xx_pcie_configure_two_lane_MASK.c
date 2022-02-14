
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int,unsigned int*) ;
 int FUNC_3 (struct regmap*,unsigned int,int,int) ;
 struct regmap* FUNC_4 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3,
       u32 VAR_4)
{
 struct device_node *VAR_5 = VAR_3->of_node;
 struct regmap *VAR_6;
 unsigned int VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_6 = FUNC_4(VAR_5, "ti,syscon-lane-sel");
 if (FUNC_0(VAR_6)) {
  FUNC_1(VAR_3, "unable to get ti,syscon-lane-sel\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_5, "ti,syscon-lane-sel", 1,
           &VAR_7)) {
  FUNC_1(VAR_3, "couldn't get lane selection reg offset\n");
  return -VAR_0;
 }

 VAR_8 = VAR_4 | VAR_1;
 VAR_9 = VAR_2 | VAR_1;
 FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9);

 return 0;
}
