
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct device_node {int dummy; } ;


 struct of_device_id* FUNC_0 (struct of_device_id const*,struct device_node const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

const struct of_device_id *FUNC_3(const struct of_device_id *VAR_1,
      const struct device_node *VAR_2)
{
 const struct of_device_id *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_0, VAR_4);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0, VAR_4);
 return VAR_3;
}
