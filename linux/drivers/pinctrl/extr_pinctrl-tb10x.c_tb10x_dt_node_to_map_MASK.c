
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct device_node {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,char const**) ;
 int FUNC_1 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,char const*,int ) ;
 int FUNC_2 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,int) ;
 int FUNC_3 (char*,struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1,
    struct device_node *VAR_2,
    struct pinctrl_map **VAR_3, unsigned *VAR_4)
{
 const char *VAR_5;
 unsigned VAR_6 = 0;
 int VAR_7 = 0;

 if (FUNC_0(VAR_2, "abilis,function", &VAR_5)) {
  FUNC_3("%pOF: No abilis,function property in device tree.\n",
   VAR_2);
  return -VAR_0;
 }

 *VAR_3 = ((void*)0);
 *VAR_4 = 0;

 VAR_7 = FUNC_2(VAR_1, VAR_3, &VAR_6,
     VAR_4, 1);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_1(VAR_1, VAR_3, &VAR_6,
     VAR_4, VAR_5, VAR_2->name);

out:
 return VAR_7;
}
