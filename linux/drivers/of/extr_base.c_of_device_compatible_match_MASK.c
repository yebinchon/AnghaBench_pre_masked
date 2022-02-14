
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 unsigned int FUNC_0 (struct device_node*,char const* const) ;

int FUNC_1(struct device_node *VAR_0,
          const char *const *VAR_1)
{
 unsigned int VAR_2, VAR_3 = 0;

 if (!VAR_1)
  return 0;

 while (*VAR_1) {
  VAR_2 = FUNC_0(VAR_0, *VAR_1);
  if (VAR_2 > VAR_3)
   VAR_3 = VAR_2;
  VAR_1++;
 }

 return VAR_3;
}
