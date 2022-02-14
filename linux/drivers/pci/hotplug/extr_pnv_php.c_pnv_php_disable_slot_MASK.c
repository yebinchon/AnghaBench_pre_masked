
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_php_slot {scalar_t__ state; int dn; int bus; } ;
struct hotplug_slot {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct hotplug_slot*,int ) ;
 int FUNC_4 (int ) ;
 struct pnv_php_slot* FUNC_5 (struct hotplug_slot*) ;

__attribute__((used)) static int FUNC_6(struct hotplug_slot *VAR_3)
{
 struct pnv_php_slot *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 if (VAR_4->state != VAR_1)
  return 0;


 FUNC_1();
 FUNC_0(VAR_4->bus);
 FUNC_2();


 FUNC_4(VAR_4->dn);


 VAR_5 = FUNC_3(VAR_3, VAR_0);

 VAR_4->state = VAR_2;
 return VAR_5;
}
