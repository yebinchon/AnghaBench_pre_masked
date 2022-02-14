
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {struct mantis_hwconfig* hwconfig; } ;
struct mantis_hwconfig {int power; } ;
typedef enum mantis_power { ____Placeholder_mantis_power } mantis_power ;


 int VAR_0 ;


 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (struct mantis_pci*,int ,int const) ;
 int FUNC_2 (int) ;

int FUNC_3(struct mantis_pci *VAR_1, enum mantis_power VAR_2)
{
 struct mantis_hwconfig *VAR_3 = VAR_1->hwconfig;

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_0, 1, "Power ON");
  FUNC_1(VAR_1, VAR_3->power, 128);
  FUNC_2(100);
  FUNC_1(VAR_1, VAR_3->power, 128);
  FUNC_2(100);
  break;

 case 129:
  FUNC_0(VAR_0, 1, "Power OFF");
  FUNC_1(VAR_1, VAR_3->power, 129);
  FUNC_2(100);
  break;

 default:
  FUNC_0(VAR_0, 1, "Unknown state <%02x>", VAR_2);
  return -1;
 }

 return 0;
}
