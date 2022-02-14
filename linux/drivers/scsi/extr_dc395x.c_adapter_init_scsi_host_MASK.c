
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int max_cmd_len; int this_id; int dma_channel; int max_id; int max_lun; int irq; int unique_id; int n_io_port; int io_port; int cmd_per_lun; int can_queue; scalar_t__ hostdata; } ;
struct NvRamType {int scsi_id; int channel_cfg; } ;
struct AdapterCtlBlk {int last_reset; int irq_level; int io_port_base; int io_port_len; struct NvRamType eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct Scsi_Host *VAR_4)
{
        struct AdapterCtlBlk *VAR_5 = (struct AdapterCtlBlk *)VAR_4->hostdata;
 struct NvRamType *VAR_6 = &VAR_5->eeprom;

 VAR_4->max_cmd_len = 24;
 VAR_4->can_queue = VAR_1;
 VAR_4->cmd_per_lun = VAR_0;
 VAR_4->this_id = (int)VAR_6->scsi_id;
 VAR_4->io_port = VAR_5->io_port_base;
 VAR_4->n_io_port = VAR_5->io_port_len;
 VAR_4->dma_channel = -1;
 VAR_4->unique_id = VAR_5->io_port_base;
 VAR_4->irq = VAR_5->irq_level;
 VAR_5->last_reset = VAR_3;

 VAR_4->max_id = 16;
 if (VAR_4->max_id - 1 == VAR_6->scsi_id)
  VAR_4->max_id--;

 if (VAR_6->channel_cfg & VAR_2)
  VAR_4->max_lun = 8;
 else
  VAR_4->max_lun = 1;
}
