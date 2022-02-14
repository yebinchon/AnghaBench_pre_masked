
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* group_or_pin; unsigned long* configs; unsigned int num_configs; } ;
struct TYPE_4__ {TYPE_1__ configs; } ;
struct pinctrl_map {TYPE_2__ data; int type; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long* FUNC_1 (unsigned long*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, struct pinctrl_map **VAR_5,
      unsigned *VAR_6, unsigned *VAR_7,
      const char *VAR_8, unsigned long *VAR_9,
      unsigned VAR_10)
{
 unsigned long *VAR_11;

 if (FUNC_0(*VAR_7 == *VAR_6))
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_9, VAR_10 * sizeof(*VAR_11),
         VAR_2);
 if (!VAR_11)
  return -VAR_0;

 (*VAR_5)[*VAR_7].type = VAR_3;
 (*VAR_5)[*VAR_7].data.configs.group_or_pin = VAR_8;
 (*VAR_5)[*VAR_7].data.configs.configs = VAR_11;
 (*VAR_5)[*VAR_7].data.configs.num_configs = VAR_10;
 (*VAR_7)++;

 return 0;
}
