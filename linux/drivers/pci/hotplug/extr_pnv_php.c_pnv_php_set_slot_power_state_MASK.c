
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct pnv_php_slot {int pdev; TYPE_1__* dn; int id; } ;
struct opal_msg {int * params; } ;
struct hotplug_slot {int dummy; } ;
struct TYPE_2__ {scalar_t__ phandle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,char*,...) ;
 int FUNC_2 (int ,scalar_t__,struct opal_msg*) ;
 int FUNC_3 (struct pnv_php_slot*) ;
 int FUNC_4 (struct pnv_php_slot*) ;
 struct pnv_php_slot* FUNC_5 (struct hotplug_slot*) ;

int FUNC_6(struct hotplug_slot *VAR_5,
     uint8_t VAR_6)
{
 struct pnv_php_slot *VAR_7 = FUNC_5(VAR_5);
 struct opal_msg VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7->id, VAR_6, &VAR_8);
 if (VAR_9 > 0) {
  if (FUNC_0(VAR_8.params[1]) != VAR_7->dn->phandle ||
      FUNC_0(VAR_8.params[2]) != VAR_6 ||
      FUNC_0(VAR_8.params[3]) != VAR_4) {
   FUNC_1(VAR_7->pdev, "Wrong msg (%lld, %lld, %lld)\n",
     FUNC_0(VAR_8.params[1]),
     FUNC_0(VAR_8.params[2]),
     FUNC_0(VAR_8.params[3]));
   return -VAR_0;
  }
 } else if (VAR_9 < 0) {
  FUNC_1(VAR_7->pdev, "Error %d powering %s\n",
    VAR_9, (VAR_6 == VAR_3) ? "on" : "off");
  return VAR_9;
 }

 if (VAR_6 == VAR_2 || VAR_6 == VAR_1)
  FUNC_4(VAR_7);
 else
  VAR_9 = FUNC_3(VAR_7);

 return VAR_9;
}
