
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device_node {int dummy; } ;
typedef int phys_addr_t ;


 int FUNC_0 (struct device_node*,int ,struct resource*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static phys_addr_t FUNC_3(void)
{
 struct device_node *VAR_1;
 int VAR_2;
 struct resource VAR_3;

 if (VAR_0 != -1)
  return VAR_0;

 VAR_1 = FUNC_2();
 if (!VAR_1)
  return VAR_0;

 VAR_2 = FUNC_0(VAR_1, 0, &VAR_3);
 if (!VAR_2)
  VAR_0 = VAR_3.start;
 FUNC_1(VAR_1);

 return VAR_0;
}
