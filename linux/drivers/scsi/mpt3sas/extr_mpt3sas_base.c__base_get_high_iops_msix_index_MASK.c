
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct MPT3SAS_ADAPTER {int high_iops_outstanding; } ;
struct TYPE_2__ {int device_busy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct scsi_cmnd*) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static inline u8
FUNC_4(struct MPT3SAS_ADAPTER *VAR_3,
 struct scsi_cmnd *VAR_4)
{





 if (FUNC_2(&VAR_4->device->device_busy) >
     VAR_0)
  return FUNC_3((
      FUNC_1(1, &VAR_3->high_iops_outstanding) /
      VAR_1),
      VAR_2);

 return FUNC_0(VAR_3, VAR_4);
}
