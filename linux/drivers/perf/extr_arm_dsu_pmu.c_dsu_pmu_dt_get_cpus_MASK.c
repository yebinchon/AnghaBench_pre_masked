
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int cpumask_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_1, cpumask_t *VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5;
 struct device_node *VAR_6;

 VAR_4 = FUNC_1(VAR_1, "cpus", ((void*)0));
 if (VAR_4 <= 0)
  return -VAR_0;
 for (; VAR_3 < VAR_4; VAR_3++) {
  VAR_6 = FUNC_4(VAR_1, "cpus", VAR_3);
  if (!VAR_6)
   break;
  VAR_5 = FUNC_2(VAR_6);
  FUNC_3(VAR_6);





  if (VAR_5 < 0)
   continue;
  FUNC_0(VAR_5, VAR_2);
 }
 return 0;
}
