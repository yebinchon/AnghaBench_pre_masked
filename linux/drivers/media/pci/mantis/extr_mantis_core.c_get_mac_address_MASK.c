
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int* mac_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int FUNC_1 (struct mantis_pci*,int*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct mantis_pci *VAR_2)
{
 int VAR_3;

 VAR_2->mac_address[0] = 0x08;
 VAR_3 = FUNC_1(VAR_2, &VAR_2->mac_address[0], 6);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1, VAR_0, 1, "Mantis EEPROM read error");

  return VAR_3;
 }
 FUNC_0(VAR_1, VAR_0, 0,
  "    MAC Address=[%pM]\n", VAR_2->mac_address);

 return 0;
}
