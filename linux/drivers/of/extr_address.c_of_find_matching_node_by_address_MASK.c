
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct resource {scalar_t__ start; } ;
struct of_device_id {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_1 (struct device_node*,struct of_device_id const*) ;

struct device_node *FUNC_2(struct device_node *VAR_0,
     const struct of_device_id *VAR_1,
     u64 VAR_2)
{
 struct device_node *VAR_3 = FUNC_1(VAR_0, VAR_1);
 struct resource VAR_4;

 while (VAR_3) {
  if (!FUNC_0(VAR_3, 0, &VAR_4) &&
      VAR_4.start == VAR_2)
   return VAR_3;

  VAR_3 = FUNC_1(VAR_3, VAR_1);
 }

 return ((void*)0);
}
