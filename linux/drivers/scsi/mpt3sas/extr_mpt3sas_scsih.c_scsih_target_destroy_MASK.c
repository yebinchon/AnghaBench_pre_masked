
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {scalar_t__ channel; scalar_t__ id; struct MPT3SAS_TARGET* hostdata; int dev; } ;
struct _sas_device {scalar_t__ id; scalar_t__ channel; struct scsi_target* starget; } ;
struct _raid_device {int * sdev; int * starget; } ;
struct _pcie_device {scalar_t__ id; scalar_t__ channel; struct scsi_target* starget; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_TARGET {int * sas_dev; int * pcie_dev; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; int pcie_device_lock; int raid_device_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct _pcie_device* FUNC_0 (struct MPT3SAS_ADAPTER*,struct MPT3SAS_TARGET*) ;
 struct _sas_device* FUNC_1 (struct MPT3SAS_ADAPTER*,struct MPT3SAS_TARGET*) ;
 struct _raid_device* FUNC_2 (struct MPT3SAS_ADAPTER*,scalar_t__,scalar_t__) ;
 struct Scsi_Host* FUNC_3 (int *) ;
 int FUNC_4 (struct MPT3SAS_TARGET*) ;
 int FUNC_5 (struct _pcie_device*) ;
 int FUNC_6 (struct _sas_device*) ;
 struct MPT3SAS_ADAPTER* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_10(struct scsi_target *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_3(&VAR_2->dev);
 struct MPT3SAS_ADAPTER *VAR_4 = FUNC_7(VAR_3);
 struct MPT3SAS_TARGET *VAR_5;
 struct _sas_device *VAR_6;
 struct _raid_device *VAR_7;
 struct _pcie_device *VAR_8;
 unsigned long VAR_9;

 VAR_5 = VAR_2->hostdata;
 if (!VAR_5)
  return;

 if (VAR_2->channel == VAR_1) {
  FUNC_8(&VAR_4->raid_device_lock, VAR_9);
  VAR_7 = FUNC_2(VAR_4, VAR_2->id,
      VAR_2->channel);
  if (VAR_7) {
   VAR_7->starget = ((void*)0);
   VAR_7->sdev = ((void*)0);
  }
  FUNC_9(&VAR_4->raid_device_lock, VAR_9);
  goto out;
 }

 if (VAR_2->channel == VAR_0) {
  FUNC_8(&VAR_4->pcie_device_lock, VAR_9);
  VAR_8 = FUNC_0(VAR_4,
       VAR_5);
  if (VAR_8 && (VAR_8->starget == VAR_2) &&
   (VAR_8->id == VAR_2->id) &&
   (VAR_8->channel == VAR_2->channel))
   VAR_8->starget = ((void*)0);

  if (VAR_8) {



   VAR_5->pcie_dev = ((void*)0);
   FUNC_5(VAR_8);
   FUNC_5(VAR_8);
  }
  FUNC_9(&VAR_4->pcie_device_lock, VAR_9);
  goto out;
 }

 FUNC_8(&VAR_4->sas_device_lock, VAR_9);
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 && (VAR_6->starget == VAR_2) &&
     (VAR_6->id == VAR_2->id) &&
     (VAR_6->channel == VAR_2->channel))
  VAR_6->starget = ((void*)0);

 if (VAR_6) {



  VAR_5->sas_dev = ((void*)0);
  FUNC_6(VAR_6);

  FUNC_6(VAR_6);
 }
 FUNC_9(&VAR_4->sas_device_lock, VAR_9);

 out:
 FUNC_4(VAR_5);
 VAR_2->hostdata = ((void*)0);
}
