
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ScsiReqBlk {int flag; TYPE_2__* segment_x; int xferred; int total_xfer_length; } ;
struct AdapterCtlBlk {TYPE_1__* dev; } ;
struct TYPE_4__ {int length; int address; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct AdapterCtlBlk *VAR_4,
  struct ScsiReqBlk *VAR_5)
{
 if (!(VAR_5->flag & VAR_0))
  return;

 FUNC_1(VAR_1, "pci_unmap_srb_sense: buffer=%08x\n",
        VAR_5->segment_x[0].address);
 FUNC_0(&VAR_4->dev->dev, VAR_5->segment_x[0].address,
    VAR_5->segment_x[0].length, VAR_3);

 VAR_5->total_xfer_length = VAR_5->xferred;
 VAR_5->segment_x[0].address =
     VAR_5->segment_x[VAR_2 - 1].address;
 VAR_5->segment_x[0].length =
     VAR_5->segment_x[VAR_2 - 1].length;
}
