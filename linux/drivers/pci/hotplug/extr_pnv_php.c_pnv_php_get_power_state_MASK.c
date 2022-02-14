
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct pnv_php_slot {int pdev; int id; } ;
struct hotplug_slot {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *) ;
 struct pnv_php_slot* FUNC_2 (struct hotplug_slot*) ;

__attribute__((used)) static int FUNC_3(struct hotplug_slot *VAR_1, u8 *VAR_2)
{
 struct pnv_php_slot *VAR_3 = FUNC_2(VAR_1);
 uint8_t VAR_4 = VAR_0;
 int VAR_5;






 VAR_5 = FUNC_1(VAR_3->id, &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3->pdev, "Error %d getting power status\n",
    VAR_5);
 } else {
  *VAR_2 = VAR_4;
 }

 return 0;
}
