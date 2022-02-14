
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,int) ;
 int FUNC_1 (struct device_node*,char*,char const*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct device_node *VAR_1, const char *VAR_2)
{
 int VAR_3;

 if (FUNC_2(!VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1, "interrupt-names", VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_1, VAR_3);
}
