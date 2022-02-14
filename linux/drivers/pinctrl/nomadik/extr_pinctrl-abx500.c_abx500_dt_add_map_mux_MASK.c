
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* group; char const* function; } ;
struct TYPE_3__ {TYPE_2__ mux; } ;
struct pinctrl_map {TYPE_1__ data; int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pinctrl_map **VAR_2,
  unsigned *VAR_3,
  unsigned *VAR_4, const char *VAR_5,
  const char *VAR_6)
{
 if (*VAR_4 == *VAR_3)
  return -VAR_0;

 (*VAR_2)[*VAR_4].type = VAR_1;
 (*VAR_2)[*VAR_4].data.mux.group = VAR_5;
 (*VAR_2)[*VAR_4].data.mux.function = VAR_6;
 (*VAR_4)++;

 return 0;
}
