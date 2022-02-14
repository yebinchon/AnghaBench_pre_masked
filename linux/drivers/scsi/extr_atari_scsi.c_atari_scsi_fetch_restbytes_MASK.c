
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_restdata; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (unsigned long) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3;
 char *VAR_4, *VAR_5;
 unsigned long VAR_6;


 VAR_6 = FUNC_0(VAR_1);
 VAR_3 = VAR_6 & 3;
 if (VAR_3) {


  VAR_6 ^= VAR_3;
  FUNC_1(VAR_0, "SCSI DMA: there are %d rest bytes for phys addr 0x%08lx",
      VAR_3, VAR_6);

  VAR_5 = FUNC_2(VAR_6);
  FUNC_1(VAR_0, " = virt addr %p\n", VAR_5);
  for (VAR_4 = (char *)&VAR_2.dma_restdata; VAR_3 != 0; --VAR_3)
   *VAR_5++ = *VAR_4++;
 }
}
