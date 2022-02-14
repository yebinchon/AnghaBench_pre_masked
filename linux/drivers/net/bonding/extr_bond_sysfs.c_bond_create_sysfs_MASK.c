
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ attr; } ;
struct bond_net {int net; TYPE_2__ class_attr_bonding_masters; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(struct bond_net *VAR_2)
{
 int VAR_3;

 VAR_2->class_attr_bonding_masters = VAR_1;
 FUNC_3(&VAR_2->class_attr_bonding_masters.attr);

 VAR_3 = FUNC_1(&VAR_2->class_attr_bonding_masters,
       VAR_2->net);
 if (VAR_3 == -VAR_0) {

  if (FUNC_0(VAR_2->net,
          VAR_1.attr.name))
   FUNC_2("network device named %s already exists in sysfs\n",
          VAR_1.attr.name);
  VAR_3 = 0;
 }

 return VAR_3;

}
