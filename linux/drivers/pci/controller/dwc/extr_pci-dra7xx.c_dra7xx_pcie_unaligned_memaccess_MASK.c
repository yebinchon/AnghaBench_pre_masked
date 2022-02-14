
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct of_phandle_args {int np; int * args; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_5 (struct regmap*,int ,int ,int ) ;
 struct regmap* FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1)
{
 int VAR_2;
 struct device_node *VAR_3 = VAR_1->of_node;
 struct of_phandle_args VAR_4;
 struct regmap *VAR_5;

 VAR_5 = FUNC_6(VAR_3,
       "ti,syscon-unaligned-access");
 if (FUNC_0(VAR_5)) {
  FUNC_1(VAR_1, "can't get ti,syscon-unaligned-access\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_4(VAR_3, "ti,syscon-unaligned-access",
            2, 0, &VAR_4);
 if (VAR_2) {
  FUNC_2(VAR_1, "failed to parse ti,syscon-unaligned-access\n");
  return VAR_2;
 }

 VAR_2 = FUNC_5(VAR_5, VAR_4.args[0], VAR_4.args[1],
     VAR_4.args[1]);
 if (VAR_2)
  FUNC_2(VAR_1, "failed to enable unaligned access\n");

 FUNC_3(VAR_4.np);

 return VAR_2;
}
