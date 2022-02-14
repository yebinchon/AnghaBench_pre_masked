
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;
struct mantis_ca {int hif_evm_work; struct mantis_pci* ca_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mantis_ca*) ;
 int FUNC_3 (struct mantis_ca*) ;

void FUNC_4(struct mantis_ca *VAR_1)
{
 struct mantis_pci *VAR_2 = VAR_1->ca_priv;

 FUNC_0(VAR_0, 1, "Mantis Host I/F Event manager exiting");
 FUNC_1(&VAR_1->hif_evm_work);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
