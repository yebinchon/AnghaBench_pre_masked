
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; } ;
struct scatterlist {int dummy; } ;
struct pvscsi_ctx {void* dataPA; void* sglPA; struct scatterlist* sgl; } ;
struct pvscsi_adapter {TYPE_1__* dev; } ;
struct PVSCSIRingReqDesc {unsigned int dataLen; void* dataAddr; int flags; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_0 (int *,struct scatterlist*,unsigned int,int ) ;
 scalar_t__ FUNC_1 (int *,void*) ;
 int FUNC_2 (struct pvscsi_ctx*,struct scatterlist*,int) ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*) ;
 unsigned int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 unsigned int FUNC_7 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_8 (struct scsi_cmnd*) ;
 void* FUNC_9 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_10(struct pvscsi_adapter *VAR_5,
         struct pvscsi_ctx *VAR_6, struct scsi_cmnd *VAR_7,
         struct PVSCSIRingReqDesc *VAR_8)
{
 unsigned VAR_9;
 unsigned VAR_10 = FUNC_4(VAR_7);
 struct scatterlist *VAR_11;

 VAR_8->dataLen = VAR_10;
 VAR_8->dataAddr = 0;
 if (VAR_10 == 0)
  return 0;

 VAR_11 = FUNC_8(VAR_7);
 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9 != 0) {
  int VAR_12 = FUNC_5(VAR_7);

  if (VAR_12 == -VAR_1) {
   FUNC_3(VAR_2, VAR_7,
        "vmw_pvscsi: Failed to map cmd sglist for DMA.\n");
   return -VAR_1;
  } else if (VAR_12 > 1) {
   FUNC_2(VAR_6, VAR_11, VAR_12);

   VAR_8->flags |= VAR_3;
   VAR_6->sglPA = FUNC_0(&VAR_5->dev->dev,
     VAR_6->sgl, VAR_4, VAR_0);
   if (FUNC_1(&VAR_5->dev->dev, VAR_6->sglPA)) {
    FUNC_3(VAR_2, VAR_7,
         "vmw_pvscsi: Failed to map ctx sglist for DMA.\n");
    FUNC_6(VAR_7);
    VAR_6->sglPA = 0;
    return -VAR_1;
   }
   VAR_8->dataAddr = VAR_6->sglPA;
  } else
   VAR_8->dataAddr = FUNC_9(VAR_11);
 } else {




  VAR_6->dataPA = FUNC_0(&VAR_5->dev->dev, VAR_11, VAR_10,
          VAR_7->sc_data_direction);
  if (FUNC_1(&VAR_5->dev->dev, VAR_6->dataPA)) {
   FUNC_3(VAR_2, VAR_7,
        "vmw_pvscsi: Failed to map direct data buffer for DMA.\n");
   return -VAR_1;
  }
  VAR_8->dataAddr = VAR_6->dataPA;
 }

 return 0;
}
