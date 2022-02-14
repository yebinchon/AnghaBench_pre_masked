
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_driver {int epf_group; struct pci_epf_device_id* id_table; } ;
struct pci_epf_device_id {scalar_t__* name; } ;
struct config_group {int group_entry; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct config_group*) ;
 int FUNC_3 (struct config_group*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct config_group* FUNC_7 (scalar_t__*) ;
 int VAR_1 ;
 int FUNC_8 (struct pci_epf_driver*) ;

__attribute__((used)) static int FUNC_9(struct pci_epf_driver *VAR_2)
{
 struct config_group *VAR_3;
 const struct pci_epf_device_id *VAR_4;

 if (!FUNC_1(VAR_0))
  return 0;

 FUNC_0(&VAR_2->epf_group);

 VAR_4 = VAR_2->id_table;
 while (VAR_4->name[0]) {
  VAR_3 = FUNC_7(VAR_4->name);
  if (FUNC_2(VAR_3)) {
   FUNC_8(VAR_2);
   return FUNC_3(VAR_3);
  }

  FUNC_5(&VAR_1);
  FUNC_4(&VAR_3->group_entry, &VAR_2->epf_group);
  FUNC_6(&VAR_1);
  VAR_4++;
 }

 return 0;
}
