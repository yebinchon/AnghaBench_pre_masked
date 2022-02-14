
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sram_channel {scalar_t__ cmds_start; } ;
struct cx88_core {int pci_irqmask; } ;
struct cx88_audio_dev {int num_periods; struct cx88_core* core; int count; struct cx88_audio_buffer* buf; } ;
struct TYPE_2__ {int dma; } ;
struct cx88_audio_buffer {int bpl; TYPE_1__ risc; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cx88_core*,struct sram_channel const*) ;
 int FUNC_2 (struct cx88_core*,struct sram_channel const*,int,int ) ;
 struct sram_channel* VAR_14 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (int,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct cx88_audio_dev *VAR_16)
{
 struct cx88_audio_buffer *VAR_17 = VAR_16->buf;
 struct cx88_core *VAR_18 = VAR_16->core;
 const struct sram_channel *VAR_19 = &VAR_14[VAR_13];


 FUNC_3(VAR_7, 0x11);


 FUNC_2(VAR_16->core, VAR_19, VAR_17->bpl, VAR_17->risc.dma);


 FUNC_6(VAR_6, VAR_17->bpl);


 FUNC_6(VAR_5, VAR_4);
 FUNC_0(&VAR_16->count, 0);

 FUNC_7(1,
  "Start audio DMA, %d B/line, %d lines/FIFO, %d periods, %d byte buffer\n",
  VAR_17->bpl, FUNC_4(VAR_19->cmds_start + 8) >> 1,
  VAR_16->num_periods, VAR_17->bpl * VAR_16->num_periods);


 FUNC_6(VAR_8, VAR_3 | VAR_2 |
    VAR_1 | VAR_0);


 FUNC_6(VAR_9, ~0);


 FUNC_5(VAR_11, VAR_16->core->pci_irqmask | VAR_12);




 FUNC_5(VAR_10, (1 << 5));

 FUNC_5(VAR_7, 0x11);

 if (VAR_15)
  FUNC_1(VAR_16->core, VAR_19);

 return 0;
}
