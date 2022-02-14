
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct mantis_pci*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

void FUNC_4(struct mantis_pci *VAR_10)
{
 FUNC_0(VAR_1, 1, "Mantis Stop DMA engine");

 FUNC_3((FUNC_2(VAR_4) & (~(VAR_5))), VAR_4);

 FUNC_3((FUNC_2(VAR_2) & ~(VAR_3 |
         VAR_0 |
         VAR_9)), VAR_2);

 FUNC_3(FUNC_2(VAR_8), VAR_8);

 FUNC_1(VAR_10, VAR_7 | VAR_6);
}
