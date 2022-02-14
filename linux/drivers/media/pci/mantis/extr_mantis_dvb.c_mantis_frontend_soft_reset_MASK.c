
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {struct mantis_hwconfig* hwconfig; } ;
struct mantis_hwconfig {int reset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct mantis_pci*,int ,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct mantis_pci *VAR_1)
{
 struct mantis_hwconfig *VAR_2 = VAR_1->hwconfig;

 FUNC_0(VAR_0, 1, "Frontend RESET");
 FUNC_1(VAR_1, VAR_2->reset, 0);
 FUNC_2(100);
 FUNC_1(VAR_1, VAR_2->reset, 0);
 FUNC_2(100);
 FUNC_1(VAR_1, VAR_2->reset, 1);
 FUNC_2(100);
 FUNC_1(VAR_1, VAR_2->reset, 1);
 FUNC_2(100);

 return;
}
