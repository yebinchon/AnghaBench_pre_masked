
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_eaddr {int dummy; } ;
struct slim_device {int dev; struct slim_eaddr e_addr; } ;
struct slim_controller {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct slim_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct slim_controller*,struct slim_device*,struct device_node*) ;

__attribute__((used)) static struct slim_device *FUNC_3(struct slim_controller *VAR_1,
          struct slim_eaddr *VAR_2,
          struct device_node *VAR_3)
{
 struct slim_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->e_addr = *VAR_2;
 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_4->dev);
  return ((void*)0);
 }

 return VAR_4;
}
