
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scsi_cmnd {int device; } ;
struct _pcie_device {int dummy; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;
typedef int Mpi25SCSIIORequest_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct MPT3SAS_ADAPTER*,struct _pcie_device*,struct scsi_cmnd*,int) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,struct scsi_cmnd*,int *,int ,int) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (int ,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct MPT3SAS_ADAPTER *VAR_1,
 Mpi25SCSIIORequest_t *VAR_2, u16 VAR_3, struct scsi_cmnd *VAR_4,
 struct _pcie_device *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0) {
  FUNC_5(VAR_0, VAR_4->device,
   "scsi_dma_map failed: request for %d bytes!\n",
   FUNC_2(VAR_4));
  return 1;
 }


 if (FUNC_0(VAR_1, VAR_5,
    VAR_4, VAR_6) == 0) {

  goto out;
 }




 FUNC_1(VAR_1, VAR_4, VAR_2,
   VAR_3, VAR_6);

 return 0;
out:
 FUNC_4(VAR_4);
 return 1;
}
