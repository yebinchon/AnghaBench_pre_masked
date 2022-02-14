
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_timing {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (struct device_node const*,char const*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,struct display_timing*) ;

int FUNC_3(const struct device_node *VAR_2, const char *VAR_3,
  struct display_timing *VAR_4)
{
 struct device_node *VAR_5;
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_5, VAR_4);

 FUNC_1(VAR_5);

 return VAR_6;
}
