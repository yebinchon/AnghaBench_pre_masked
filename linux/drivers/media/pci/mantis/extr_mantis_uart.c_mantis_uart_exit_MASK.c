
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int uart_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mantis_pci*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

void FUNC_4(struct mantis_pci *VAR_2)
{

 FUNC_1(VAR_2, VAR_0);
 FUNC_3(FUNC_2(VAR_1) & 0xffef, VAR_1);
 FUNC_0(&VAR_2->uart_work);
}
