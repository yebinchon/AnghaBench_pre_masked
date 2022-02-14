
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct mantis_pci*) ;
 int FUNC_2 (struct mantis_pci*) ;
 scalar_t__ FUNC_3 (struct mantis_pci*) ;
 scalar_t__ FUNC_4 (struct mantis_pci*) ;
 int FUNC_5 (struct mantis_pci*) ;
 int VAR_1 ;

int FUNC_6(struct mantis_pci *VAR_2)
{
 FUNC_2(VAR_2);
 FUNC_0(VAR_1, VAR_0, 1, "DMA engine stopping");

 FUNC_5(VAR_2);
 FUNC_0(VAR_1, VAR_0, 1, "UART exit failed");

 if (FUNC_1(VAR_2) < 0)
  FUNC_0(VAR_1, VAR_0, 1, "DMA exit failed");
 if (FUNC_3(VAR_2) < 0)
  FUNC_0(VAR_1, VAR_0, 1, "DVB exit failed");
 if (FUNC_4(VAR_2) < 0)
  FUNC_0(VAR_1, VAR_0, 1, "I2C adapter delete.. failed");

 return 0;
}
