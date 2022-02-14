
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dev; struct MPT3SAS_TARGET* hostdata; } ;
struct scsi_device {int * hostdata; } ;
struct _sas_device {int * starget; } ;
struct _pcie_device {int * starget; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_TARGET {int flags; int num_luns; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; int pcie_device_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct _pcie_device* FUNC_0 (struct MPT3SAS_ADAPTER*,struct MPT3SAS_TARGET*) ;
 struct _sas_device* FUNC_1 (struct MPT3SAS_ADAPTER*,struct MPT3SAS_TARGET*) ;
 struct Scsi_Host* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct _pcie_device*) ;
 int FUNC_5 (struct _sas_device*) ;
 struct scsi_target* FUNC_6 (struct scsi_device*) ;
 struct MPT3SAS_ADAPTER* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_10(struct scsi_device *VAR_2)
{
 struct MPT3SAS_TARGET *VAR_3;
 struct scsi_target *VAR_4;
 struct Scsi_Host *VAR_5;
 struct MPT3SAS_ADAPTER *VAR_6;
 struct _sas_device *VAR_7;
 struct _pcie_device *VAR_8;
 unsigned long VAR_9;

 if (!VAR_2->hostdata)
  return;

 VAR_4 = FUNC_6(VAR_2);
 VAR_3 = VAR_4->hostdata;
 VAR_3->num_luns--;

 VAR_5 = FUNC_2(&VAR_4->dev);
 VAR_6 = FUNC_7(VAR_5);

 if (VAR_3->flags & VAR_0) {
  FUNC_8(&VAR_6->pcie_device_lock, VAR_9);
  VAR_8 = FUNC_0(VAR_6,
    VAR_3);
  if (VAR_8 && !VAR_3->num_luns)
   VAR_8->starget = ((void*)0);

  if (VAR_8)
   FUNC_4(VAR_8);

  FUNC_9(&VAR_6->pcie_device_lock, VAR_9);

 } else if (!(VAR_3->flags & VAR_1)) {
  FUNC_8(&VAR_6->sas_device_lock, VAR_9);
  VAR_7 = FUNC_1(VAR_6,
    VAR_3);
  if (VAR_7 && !VAR_3->num_luns)
   VAR_7->starget = ((void*)0);

  if (VAR_7)
   FUNC_5(VAR_7);
  FUNC_9(&VAR_6->sas_device_lock, VAR_9);
 }

 FUNC_3(VAR_2->hostdata);
 VAR_2->hostdata = ((void*)0);
}
