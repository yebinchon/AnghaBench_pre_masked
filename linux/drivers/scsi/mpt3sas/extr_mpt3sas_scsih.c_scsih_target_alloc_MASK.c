
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct scsi_target {int channel; int id; TYPE_2__ dev; struct MPT3SAS_TARGET* hostdata; } ;
struct TYPE_3__ {int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct _sas_device {scalar_t__ fast_path; int handle; int channel; int id; struct scsi_target* starget; int sas_address; } ;
struct _raid_device {struct scsi_target* starget; int wwid; int handle; } ;
struct _pcie_device {scalar_t__ fast_path; int channel; int id; struct scsi_target* starget; int wwid; int handle; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_TARGET {int flags; struct _sas_device* sas_dev; int sas_address; int handle; struct _pcie_device* pcie_dev; struct _raid_device* raid_device; struct scsi_target* starget; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; int pd_handles; int pcie_device_lock; int raid_device_lock; scalar_t__ is_warpdrive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct _pcie_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 struct _sas_device* FUNC_1 (struct MPT3SAS_ADAPTER*,int ) ;
 struct _raid_device* FUNC_2 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 struct sas_rphy* FUNC_3 (int ) ;
 struct Scsi_Host* FUNC_4 (TYPE_2__*) ;
 struct MPT3SAS_TARGET* FUNC_5 (int,int ) ;
 struct MPT3SAS_ADAPTER* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct scsi_target *VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_4(&VAR_9->dev);
 struct MPT3SAS_ADAPTER *VAR_11 = FUNC_6(VAR_10);
 struct MPT3SAS_TARGET *VAR_12;
 struct _sas_device *VAR_13;
 struct _raid_device *VAR_14;
 struct _pcie_device *VAR_15;
 unsigned long VAR_16;
 struct sas_rphy *VAR_17;

 VAR_12 = FUNC_5(sizeof(*VAR_12),
           VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_9->hostdata = VAR_12;
 VAR_12->starget = VAR_9;
 VAR_12->handle = VAR_2;


 if (VAR_9->channel == VAR_8) {
  FUNC_7(&VAR_11->raid_device_lock, VAR_16);
  VAR_14 = FUNC_2(VAR_11, VAR_9->id,
      VAR_9->channel);
  if (VAR_14) {
   VAR_12->handle = VAR_14->handle;
   VAR_12->sas_address = VAR_14->wwid;
   VAR_12->flags |= VAR_6;
   if (VAR_11->is_warpdrive)
    VAR_12->raid_device = VAR_14;
   VAR_14->starget = VAR_9;
  }
  FUNC_8(&VAR_11->raid_device_lock, VAR_16);
  return 0;
 }


 if (VAR_9->channel == VAR_7) {
  FUNC_7(&VAR_11->pcie_device_lock, VAR_16);
  VAR_15 = FUNC_0(VAR_11, VAR_9->id,
   VAR_9->channel);
  if (VAR_15) {
   VAR_12->handle = VAR_15->handle;
   VAR_12->sas_address = VAR_15->wwid;
   VAR_12->pcie_dev = VAR_15;
   VAR_15->starget = VAR_9;
   VAR_15->id = VAR_9->id;
   VAR_15->channel = VAR_9->channel;
   VAR_12->flags |=
    VAR_4;
   if (VAR_15->fast_path)
    VAR_12->flags |=
     VAR_3;
  }
  FUNC_8(&VAR_11->pcie_device_lock, VAR_16);
  return 0;
 }


 FUNC_7(&VAR_11->sas_device_lock, VAR_16);
 VAR_17 = FUNC_3(VAR_9->dev.parent);
 VAR_13 = FUNC_1(VAR_11,
    VAR_17->identify.sas_address);

 if (VAR_13) {
  VAR_12->handle = VAR_13->handle;
  VAR_12->sas_address = VAR_13->sas_address;
  VAR_12->sas_dev = VAR_13;
  VAR_13->starget = VAR_9;
  VAR_13->id = VAR_9->id;
  VAR_13->channel = VAR_9->channel;
  if (FUNC_9(VAR_13->handle, VAR_11->pd_handles))
   VAR_12->flags |=
       VAR_5;
  if (VAR_13->fast_path)
   VAR_12->flags |=
     VAR_3;
 }
 FUNC_8(&VAR_11->sas_device_lock, VAR_16);

 return 0;
}
