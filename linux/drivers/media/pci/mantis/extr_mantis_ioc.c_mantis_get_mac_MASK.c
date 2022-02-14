
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mantis_pci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct mantis_pci*,int,int *,int) ;

int FUNC_2(struct mantis_pci *VAR_1)
{
 int VAR_2;
 u8 VAR_3[6] = {0};

 VAR_2 = FUNC_1(VAR_1, 0x08, VAR_3, 6);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0, 1, "ERROR: Mantis EEPROM read error <%d>", VAR_2);

  return VAR_2;
 }

 FUNC_0(VAR_0, 0, "    MAC Address=[%pM]\n", VAR_3);

 return 0;
}
