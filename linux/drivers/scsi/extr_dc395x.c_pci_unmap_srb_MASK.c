
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; } ;
struct ScsiReqBlk {scalar_t__ sg_bus_addr; struct scsi_cmnd* cmd; } ;
struct AdapterCtlBlk {TYPE_1__* dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_5(struct AdapterCtlBlk *VAR_4, struct ScsiReqBlk *VAR_5)
{
 struct scsi_cmnd *VAR_6 = VAR_5->cmd;
 enum dma_data_direction VAR_7 = VAR_6->sc_data_direction;

 if (FUNC_4(VAR_6) && VAR_7 != VAR_2) {

  FUNC_1(VAR_0, "pci_unmap_srb: list=%08x(%05x)\n",
   VAR_5->sg_bus_addr, VAR_3);
  FUNC_0(&VAR_4->dev->dev, VAR_5->sg_bus_addr, VAR_3,
    VAR_1);
  FUNC_1(VAR_0, "pci_unmap_srb: segs=%i buffer=%p\n",
      FUNC_4(VAR_6), FUNC_2(VAR_6));

  FUNC_3(VAR_6);
 }
}
