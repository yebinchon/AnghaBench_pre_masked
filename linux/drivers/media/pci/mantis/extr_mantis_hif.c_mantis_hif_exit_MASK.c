
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mantis_pci {int num; } ;
struct mantis_ca {int ca_lock; struct mantis_pci* ca_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mantis_ca *VAR_3)
{
 struct mantis_pci *VAR_4 = VAR_3->ca_priv;
 u32 VAR_5;

 FUNC_0(VAR_0, 1, "Adapter(%d) Exiting Mantis Host Interface", VAR_4->num);
 FUNC_3(&VAR_3->ca_lock);
 VAR_5 = FUNC_1(VAR_1);
 VAR_5 &= ~VAR_2;
 FUNC_2(VAR_5, VAR_1);
 FUNC_4(&VAR_3->ca_lock);
}
