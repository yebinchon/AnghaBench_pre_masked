
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,char*) ;

__attribute__((used)) static struct device_node *FUNC_2(char *VAR_0,
        char *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);
 int VAR_3;

 while ((VAR_2 = FUNC_0(VAR_2, "pci"))) {
  VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1);
  if (VAR_3 == 0)
   break;
 }

 return VAR_2;
}
