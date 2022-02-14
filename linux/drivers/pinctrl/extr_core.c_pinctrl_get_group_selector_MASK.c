
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_ops {unsigned int (* get_groups_count ) (struct pinctrl_dev*) ;char* (* get_group_name ) (struct pinctrl_dev*,unsigned int) ;} ;
struct pinctrl_dev {int dev; TYPE_1__* desc; } ;
struct TYPE_2__ {struct pinctrl_ops* pctlops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 unsigned int FUNC_3 (struct pinctrl_dev*) ;
 char* FUNC_4 (struct pinctrl_dev*,unsigned int) ;

int FUNC_5(struct pinctrl_dev *VAR_1,
          const char *VAR_2)
{
 const struct pinctrl_ops *VAR_3 = VAR_1->desc->pctlops;
 unsigned VAR_4 = VAR_3->get_groups_count(VAR_1);
 unsigned VAR_5 = 0;

 while (VAR_5 < VAR_4) {
  const char *VAR_6 = VAR_3->get_group_name(VAR_1,
           VAR_5);
  if (VAR_6 && !FUNC_2(VAR_6, VAR_2)) {
   FUNC_0(VAR_1->dev,
    "found group selector %u for %s\n",
    VAR_5,
    VAR_2);
   return VAR_5;
  }

  VAR_5++;
 }

 FUNC_1(VAR_1->dev, "does not have pin group %s\n",
  VAR_2);

 return -VAR_0;
}
