
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dev; } ;
struct pin_desc {char const* name; } ;


 int FUNC_0 (int ,char*,unsigned int const) ;
 struct pin_desc* FUNC_1 (struct pinctrl_dev*,unsigned int const) ;

const char *FUNC_2(struct pinctrl_dev *VAR_0, const unsigned VAR_1)
{
 const struct pin_desc *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_0(VAR_0->dev, "failed to get pin(%d) name\n",
   VAR_1);
  return ((void*)0);
 }

 return VAR_2->name;
}
