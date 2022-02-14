
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cobalt {int dma_channels; int pci_32_bit; scalar_t__ first_fifo_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cobalt*) ;

int FUNC_4(struct cobalt *VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 VAR_5->first_fifo_channel = 0;
 VAR_5->dma_channels = VAR_6 & 0xf;
 if (VAR_6 & VAR_4)
  VAR_5->pci_32_bit = 0;
 else
  VAR_5->pci_32_bit = 1;

 for (VAR_7 = 0; VAR_7 < VAR_5->dma_channels; VAR_7++) {
  u32 VAR_8 = FUNC_1(FUNC_0(VAR_7));
  u32 VAR_9 = FUNC_1(FUNC_0(VAR_7));

  if (!(VAR_9 & VAR_3))
   FUNC_2(VAR_0, FUNC_0(VAR_7));

  if (!(VAR_8 & VAR_2))
   VAR_5->first_fifo_channel++;
 }
 FUNC_3(VAR_5);
 return 0;
}
