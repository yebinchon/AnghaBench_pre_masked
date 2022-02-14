
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct scsi_target {int dev; struct MPT3SAS_TARGET* hostdata; } ;
struct _raid_device {int list; scalar_t__ wwid; int handle; struct scsi_target* starget; } ;
struct MPT3SAS_TARGET {int deleted; } ;
struct MPT3SAS_ADAPTER {int raid_device_lock; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,int ,int ) ;
 int FUNC_1 (struct _raid_device*) ;
 int FUNC_2 (int *) ;
 struct _raid_device* FUNC_3 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 struct _raid_device *VAR_2;
 unsigned long VAR_3;
 struct MPT3SAS_TARGET *VAR_4;
 struct scsi_target *VAR_5 = ((void*)0);

 FUNC_5(&VAR_0->raid_device_lock, VAR_3);
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2) {
  if (VAR_2->starget) {
   VAR_5 = VAR_2->starget;
   VAR_4 = VAR_5->hostdata;
   VAR_4->deleted = 1;
  }
  FUNC_0(VAR_0, "removing handle(0x%04x), wwid(0x%016llx)\n",
    VAR_2->handle, (u64)VAR_2->wwid);
  FUNC_2(&VAR_2->list);
  FUNC_1(VAR_2);
 }
 FUNC_6(&VAR_0->raid_device_lock, VAR_3);
 if (VAR_5)
  FUNC_4(&VAR_5->dev);
}
