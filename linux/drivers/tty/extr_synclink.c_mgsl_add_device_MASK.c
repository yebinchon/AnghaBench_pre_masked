
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {int line; int max_frame_size; int num_tx_dma_buffers; int num_tx_holding_buffers; scalar_t__ bus_type; int dma_level; int irq_level; int io_base; int device_name; int phys_lcr_base; int phys_memory_base; scalar_t__ hw_version; struct mgsl_struct* next_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mgsl_struct*) ;
 int* VAR_3 ;
 int VAR_4 ;
 struct mgsl_struct* VAR_5 ;
 int FUNC_1 (char*,int ,int ,int ,int ,int,...) ;
 int FUNC_2 (int ,char*,int) ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static void FUNC_3( struct mgsl_struct *VAR_8 )
{
 VAR_8->next_device = ((void*)0);
 VAR_8->line = VAR_4;
 FUNC_2(VAR_8->device_name,"ttySL%d",VAR_8->line);

 if (VAR_8->line < VAR_0) {
  if (VAR_3[VAR_8->line])
   VAR_8->max_frame_size = VAR_3[VAR_8->line];

  if (VAR_6[VAR_8->line]) {
   VAR_8->num_tx_dma_buffers = VAR_6[VAR_8->line];
   if (VAR_8->num_tx_dma_buffers < 1)
    VAR_8->num_tx_dma_buffers = 1;
  }

  if (VAR_7[VAR_8->line]) {
   VAR_8->num_tx_holding_buffers = VAR_7[VAR_8->line];
   if (VAR_8->num_tx_holding_buffers < 1)
    VAR_8->num_tx_holding_buffers = 1;
   else if (VAR_8->num_tx_holding_buffers > VAR_1)
    VAR_8->num_tx_holding_buffers = VAR_1;
  }
 }

 VAR_4++;

 if ( !VAR_5 )
  VAR_5 = VAR_8;
 else {
  struct mgsl_struct *VAR_9 = VAR_5;
  while( VAR_9->next_device )
   VAR_9 = VAR_9->next_device;
  VAR_9->next_device = VAR_8;
 }

 if ( VAR_8->max_frame_size < 4096 )
  VAR_8->max_frame_size = 4096;
 else if ( VAR_8->max_frame_size > 65535 )
  VAR_8->max_frame_size = 65535;

 if ( VAR_8->bus_type == VAR_2 ) {
  FUNC_1( "SyncLink PCI v%d %s: IO=%04X IRQ=%d Mem=%08X,%08X MaxFrameSize=%u\n",
   VAR_8->hw_version + 1, VAR_8->device_name, VAR_8->io_base, VAR_8->irq_level,
   VAR_8->phys_memory_base, VAR_8->phys_lcr_base,
        VAR_8->max_frame_size );
 } else {
  FUNC_1( "SyncLink ISA %s: IO=%04X IRQ=%d DMA=%d MaxFrameSize=%u\n",
   VAR_8->device_name, VAR_8->io_base, VAR_8->irq_level, VAR_8->dma_level,
        VAR_8->max_frame_size );
 }





}
