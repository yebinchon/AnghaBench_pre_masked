
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2, "resets", "#reset-cells");
 if (VAR_3 == 0)
  VAR_3 = -VAR_1;

 return VAR_3;
}
