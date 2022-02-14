
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;
struct mantis_ca {int hif_evm_work; struct mantis_pci* ca_priv; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct mantis_ca*) ;
 int VAR_1 ;
 int FUNC_3 (struct mantis_ca*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mantis_ca *VAR_2)
{
 struct mantis_pci *VAR_3 = VAR_2->ca_priv;

 FUNC_1(VAR_0, 1, "Initializing Mantis Host I/F Event manager");
 FUNC_0(&VAR_2->hif_evm_work, VAR_1);
 FUNC_3(VAR_2);
 FUNC_4(&VAR_2->hif_evm_work);
 FUNC_2(VAR_2);
 return 0;
}
