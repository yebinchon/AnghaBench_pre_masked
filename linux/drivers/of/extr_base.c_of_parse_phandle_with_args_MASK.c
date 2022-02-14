
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node const*,char const*,char const*,int,int,struct of_phandle_args*) ;

int FUNC_1(const struct device_node *VAR_1, const char *VAR_2,
    const char *VAR_3, int VAR_4,
    struct of_phandle_args *VAR_5)
{
 int VAR_6 = -1;

 if (VAR_4 < 0)
  return -VAR_0;


 if (!VAR_3)
  VAR_6 = 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_6, VAR_4, VAR_5);
}
