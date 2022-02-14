
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int risc_dma; scalar_t__ busy_block; scalar_t__ last_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct mantis_pci*) ;
 int FUNC_2 (struct mantis_pci*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(struct mantis_pci *VAR_9)
{
 FUNC_0(VAR_1, 1, "Mantis Start DMA engine");

 FUNC_1(VAR_9);
 FUNC_4(VAR_9->risc_dma, VAR_8);
 FUNC_4(FUNC_3(VAR_4) | VAR_5, VAR_4);

 FUNC_4(0, VAR_2);
 VAR_9->last_block = VAR_9->busy_block = 0;

 FUNC_2(VAR_9, VAR_6);

 FUNC_4(VAR_3 | VAR_0
          | VAR_7, VAR_2);

}
