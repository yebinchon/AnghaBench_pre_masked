
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_cmnd {int dummy; } ;
struct _pcie_device {int device_info; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static bool
FUNC_2(struct MPT3SAS_ADAPTER *VAR_1,
 struct _pcie_device *VAR_2, struct scsi_cmnd *VAR_3, int VAR_4)
{
 u32 VAR_5 = 0;
 bool VAR_6 = 1;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_2 &&
     (FUNC_0(VAR_2->device_info))) {
  VAR_6 = 0;
  return VAR_6;
 }




 if ((VAR_5 <= VAR_0*4) && (VAR_4 <= 2))
  VAR_6 = 0;

 return VAR_6;
}
