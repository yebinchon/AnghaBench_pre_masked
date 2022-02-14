
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_slot {struct hotplug_slot* hotplug; } ;
struct hotplug_slot {int owner; TYPE_1__* ops; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* disable_slot ) (struct hotplug_slot*) ;int (* enable_slot ) (struct hotplug_slot*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (char const*,int *,int) ;
 int FUNC_4 (struct hotplug_slot*) ;
 int FUNC_5 (struct hotplug_slot*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct pci_slot *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct hotplug_slot *VAR_5 = VAR_2->hotplug;
 unsigned long VAR_6;
 u8 VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_3(VAR_3, ((void*)0), 10);
 VAR_7 = (u8)(VAR_6 & 0xff);
 FUNC_0("power = %d\n", VAR_7);

 if (!FUNC_6(VAR_5->owner)) {
  VAR_8 = -VAR_1;
  goto exit;
 }
 switch (VAR_7) {
 case 0:
  if (VAR_5->ops->disable_slot)
   VAR_8 = VAR_5->ops->disable_slot(VAR_5);
  break;

 case 1:
  if (VAR_5->ops->enable_slot)
   VAR_8 = VAR_5->ops->enable_slot(VAR_5);
  break;

 default:
  FUNC_1("Illegal value specified for power\n");
  VAR_8 = -VAR_0;
 }
 FUNC_2(VAR_5->owner);

exit:
 if (VAR_8)
  return VAR_8;
 return VAR_4;
}
