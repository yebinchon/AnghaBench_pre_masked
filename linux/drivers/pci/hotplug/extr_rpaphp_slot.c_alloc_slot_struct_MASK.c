
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; } ;
struct slot {int index; int power_domain; TYPE_1__ hotplug_slot; int dn; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct slot*) ;
 int FUNC_1 (char*,int ) ;
 struct slot* FUNC_2 (int,int ) ;
 int FUNC_3 (struct device_node*) ;
 int VAR_1 ;

struct slot *FUNC_4(struct device_node *VAR_2,
  int VAR_3, char *VAR_4, int VAR_5)
{
 struct slot *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct slot), VAR_0);
 if (!VAR_6)
  goto error_nomem;
 VAR_6->name = FUNC_1(VAR_4, VAR_0);
 if (!VAR_6->name)
  goto error_slot;
 VAR_6->dn = FUNC_3(VAR_2);
 VAR_6->index = VAR_3;
 VAR_6->power_domain = VAR_5;
 VAR_6->hotplug_slot.ops = &VAR_1;

 return (VAR_6);

error_slot:
 FUNC_0(VAR_6);
error_nomem:
 return ((void*)0);
}
