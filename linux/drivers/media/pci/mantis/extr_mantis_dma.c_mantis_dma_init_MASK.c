
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct mantis_pci*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct mantis_pci *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, 1, "Mantis DMA init");
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2, 1, "Error allocating DMA buffer");


  FUNC_2(0, VAR_1);

  return VAR_4;
 }

 return 0;
}
