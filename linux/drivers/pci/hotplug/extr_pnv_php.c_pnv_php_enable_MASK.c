
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct hotplug_slot {int dummy; } ;
struct pnv_php_slot {scalar_t__ state; int power_state_check; int dn; int bus; struct hotplug_slot slot; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct hotplug_slot*,scalar_t__*) ;
 int FUNC_4 (struct hotplug_slot*,scalar_t__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hotplug_slot*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pnv_php_slot *VAR_5, bool VAR_6)
{
 struct hotplug_slot *VAR_7 = &VAR_5->slot;
 uint8_t VAR_8 = VAR_0;
 uint8_t VAR_9 = VAR_1;
 int VAR_10;


 if (VAR_5->state != VAR_4)
  return 0;


 VAR_10 = FUNC_3(VAR_7, &VAR_8);
 if (VAR_10)
  return VAR_10;







 if (VAR_8 == VAR_0) {
  if (!VAR_5->power_state_check) {
   VAR_5->power_state_check = 1;

   return 0;
  }

  goto scan;
 }
 if (!VAR_5->power_state_check) {
  VAR_5->power_state_check = 1;

  VAR_10 = FUNC_4(VAR_7, &VAR_9);
  if (VAR_10)
   return VAR_10;

  if (VAR_9 != VAR_1)
   return 0;
 }


 VAR_10 = FUNC_4(VAR_7, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 == VAR_1)
  goto scan;


 VAR_10 = FUNC_6(VAR_7, VAR_1);
 if (VAR_10)
  return VAR_10;

scan:
 if (VAR_8 == VAR_2) {
  if (VAR_6) {
   FUNC_1();
   FUNC_0(VAR_5->bus);
   FUNC_2();
  }


  VAR_5->state = VAR_3;
  if (VAR_6)
   FUNC_5(VAR_5->dn);
 } else {
  VAR_5->state = VAR_3;
 }

 return 0;
}
