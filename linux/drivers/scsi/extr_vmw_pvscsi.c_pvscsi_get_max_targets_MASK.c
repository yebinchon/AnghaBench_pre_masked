
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pvscsi_adapter {TYPE_1__* dev; } ;
struct device {int dummy; } ;
struct PVSCSIConfigPageHeader {scalar_t__ hostStatus; scalar_t__ scsiStatus; } ;
struct PVSCSIConfigPageController {int numPhys; } ;
struct PVSCSICmdDescConfigCmd {int configPageAddress; int cmpAddr; scalar_t__ _pad; int configPageNum; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct device*,char*,...) ;
 void* FUNC_2 (int *,int ,int*,int ) ;
 int FUNC_3 (int *,int ,void*,int) ;
 int FUNC_4 (struct PVSCSIConfigPageHeader*,int ,int) ;
 struct device* FUNC_5 (struct pvscsi_adapter*) ;
 int FUNC_6 (struct pvscsi_adapter*,int ,struct PVSCSICmdDescConfigCmd*,int) ;

__attribute__((used)) static u32 FUNC_7(struct pvscsi_adapter *VAR_10)
{
 struct PVSCSICmdDescConfigCmd VAR_11;
 struct PVSCSIConfigPageHeader *VAR_12;
 struct device *VAR_13;
 dma_addr_t VAR_14;
 void *VAR_15;
 u32 VAR_16 = 16;

 VAR_13 = FUNC_5(VAR_10);
 VAR_15 = FUNC_2(&VAR_10->dev->dev, VAR_4,
   &VAR_14, VAR_2);
 if (!VAR_15) {
  FUNC_1(VAR_13, "vmw_pvscsi: failed to allocate memory for config page\n");
  goto exit;
 }
 FUNC_0(VAR_14 & ~VAR_3);


 VAR_11.configPageAddress = ((u64)VAR_6) << 32;
 VAR_11.configPageNum = VAR_7;
 VAR_11.cmpAddr = VAR_14;
 VAR_11._pad = 0;






 VAR_12 = VAR_15;
 FUNC_4(VAR_12, 0, sizeof *VAR_12);
 VAR_12->hostStatus = VAR_0;
 VAR_12->scsiStatus = VAR_8;

 FUNC_6(VAR_10, VAR_5, &VAR_11, sizeof VAR_11);

 if (VAR_12->hostStatus == VAR_1 &&
     VAR_12->scsiStatus == VAR_9) {
  struct PVSCSIConfigPageController *VAR_17;

  VAR_17 = VAR_15;
  VAR_16 = VAR_17->numPhys;
 } else
  FUNC_1(VAR_13, "vmw_pvscsi: PVSCSI_CMD_CONFIG failed. hostStatus = 0x%x, scsiStatus = 0x%x\n",
    VAR_12->hostStatus, VAR_12->scsiStatus);
 FUNC_3(&VAR_10->dev->dev, VAR_4, VAR_15,
     VAR_14);
exit:
 return VAR_16;
}
