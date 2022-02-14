
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {struct mantis_ca* mantis_ca; } ;
struct mantis_ca {int en50221; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mantis_ca*) ;
 int FUNC_3 (struct mantis_ca*) ;

void FUNC_4(struct mantis_pci *VAR_2)
{
 struct mantis_ca *VAR_3 = VAR_2->mantis_ca;

 FUNC_0(VAR_0, 1, "Mantis CA exit");
 if (!VAR_3)
  return;

 FUNC_3(VAR_3);
 FUNC_0(VAR_1, 1, "Unregistering EN50221 device");
 FUNC_1(&VAR_3->en50221);

 FUNC_2(VAR_3);
}
