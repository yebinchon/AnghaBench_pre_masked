
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct scsi_target {struct MPT3SAS_TARGET* hostdata; } ;
struct _sas_device {struct scsi_target* starget; scalar_t__ volume_wwid; scalar_t__ volume_handle; } ;
struct MPT3SAS_TARGET {int flags; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; int pd_handles; } ;
struct TYPE_3__ {int PhysDiskDevHandle; } ;
typedef TYPE_1__ Mpi2EventIrConfigElement_t ;


 int VAR_0 ;
 struct _sas_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct _sas_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct scsi_target*,int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct MPT3SAS_ADAPTER *VAR_2,
 Mpi2EventIrConfigElement_t *VAR_3)
{
 struct _sas_device *VAR_4;
 struct scsi_target *VAR_5 = ((void*)0);
 struct MPT3SAS_TARGET *VAR_6;
 unsigned long VAR_7;
 u16 VAR_8 = FUNC_2(VAR_3->PhysDiskDevHandle);

 FUNC_4(&VAR_2->sas_device_lock, VAR_7);
 VAR_4 = FUNC_0(VAR_2, VAR_8);
 if (VAR_4) {
  VAR_4->volume_handle = 0;
  VAR_4->volume_wwid = 0;
  FUNC_1(VAR_8, VAR_2->pd_handles);
  if (VAR_4->starget && VAR_4->starget->hostdata) {
   VAR_5 = VAR_4->starget;
   VAR_6 = VAR_5->hostdata;
   VAR_6->flags &=
       ~VAR_0;
  }
 }
 FUNC_5(&VAR_2->sas_device_lock, VAR_7);
 if (!VAR_4)
  return;


 if (VAR_5)
  FUNC_6(VAR_5, ((void*)0), VAR_1);

 FUNC_3(VAR_4);
}
