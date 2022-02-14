
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;
struct mantis_ca {struct mantis_pci* ca_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mantis_pci*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

void FUNC_3(struct mantis_ca *VAR_4)
{
 struct mantis_pci *VAR_5 = VAR_4->ca_priv;

 FUNC_2(FUNC_1(VAR_2) & (~VAR_1 | ~VAR_0), VAR_2);
 FUNC_0(VAR_5, VAR_3);
}
