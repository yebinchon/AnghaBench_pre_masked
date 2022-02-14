
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* group_or_pin; unsigned long* configs; unsigned int num_configs; } ;
struct TYPE_4__ {TYPE_1__ configs; } ;
struct pinctrl_map {int type; TYPE_2__ data; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pinctrl_map_type { ____Placeholder_pinctrl_map_type } pinctrl_map_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long* FUNC_1 (unsigned long*,unsigned int,int ) ;

int FUNC_2(struct pinctrl_dev *VAR_3,
  struct pinctrl_map **VAR_4, unsigned *VAR_5,
  unsigned *VAR_6, const char *VAR_7,
  unsigned long *VAR_8, unsigned VAR_9,
  enum pinctrl_map_type VAR_10)
{
 unsigned long *VAR_11;

 if (FUNC_0(*VAR_6 == *VAR_5))
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_8, VAR_9 * sizeof(*VAR_11),
         VAR_2);
 if (!VAR_11)
  return -VAR_0;

 (*VAR_4)[*VAR_6].type = VAR_10;
 (*VAR_4)[*VAR_6].data.configs.group_or_pin = VAR_7;
 (*VAR_4)[*VAR_6].data.configs.configs = VAR_11;
 (*VAR_4)[*VAR_6].data.configs.num_configs = VAR_9;
 (*VAR_6)++;

 return 0;
}
