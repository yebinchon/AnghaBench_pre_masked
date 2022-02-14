
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fwnode; } ;
struct TYPE_5__ {TYPE_1__ match; int match_type; } ;
struct TYPE_6__ {TYPE_2__ asd; struct device_node* remote_node; } ;
struct stm32_dcmi {TYPE_3__ entity; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct stm32_dcmi *VAR_2, struct device_node *VAR_3)
{
 struct device_node *VAR_4 = ((void*)0);
 struct device_node *VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 if (!VAR_5)
  return -VAR_0;


 VAR_2->entity.remote_node = VAR_5;
 VAR_2->entity.asd.match_type = VAR_1;
 VAR_2->entity.asd.match.fwnode = FUNC_0(VAR_5);
 return 0;
}
