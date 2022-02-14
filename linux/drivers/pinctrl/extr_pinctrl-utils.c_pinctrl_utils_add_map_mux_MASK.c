
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* group; char const* function; } ;
struct TYPE_4__ {TYPE_1__ mux; } ;
struct pinctrl_map {TYPE_2__ data; int type; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct pinctrl_dev *VAR_2,
  struct pinctrl_map **VAR_3, unsigned *VAR_4,
  unsigned *VAR_5, const char *VAR_6,
  const char *VAR_7)
{
 if (FUNC_0(*VAR_5 == *VAR_4))
  return -VAR_0;

 (*VAR_3)[*VAR_5].type = VAR_1;
 (*VAR_3)[*VAR_5].data.mux.group = VAR_6;
 (*VAR_3)[*VAR_5].data.mux.function = VAR_7;
 (*VAR_5)++;

 return 0;
}
