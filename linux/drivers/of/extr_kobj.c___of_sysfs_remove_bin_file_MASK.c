
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct property {TYPE_2__ attr; } ;
struct device_node {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;

void FUNC_3(struct device_node *VAR_1, struct property *VAR_2)
{
 if (!FUNC_0(VAR_0))
  return;

 FUNC_2(&VAR_1->kobj, &VAR_2->attr);
 FUNC_1(VAR_2->attr.attr.name);
}
