
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct _sas_device {int starget; int list; int sas_address; int sas_address_parent; int handle; } ;
struct _raid_device {int id; } ;
struct _pcie_device {int id; int list; } ;
struct TYPE_8__ {scalar_t__ channel; void* device; } ;
struct TYPE_7__ {scalar_t__ channel; void* device; } ;
struct TYPE_6__ {scalar_t__ channel; void* device; } ;
struct TYPE_5__ {int BiosVersion; } ;
struct MPT3SAS_ADAPTER {int is_driver_loading; scalar_t__ hide_drives; int sas_device_lock; int sas_device_list; int shost; int pcie_device_lock; int pcie_device_list; TYPE_4__ current_boot_device; TYPE_3__ req_alt_boot_device; TYPE_2__ req_boot_device; TYPE_1__ bios_pg3; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct _pcie_device*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,struct _raid_device*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,struct _sas_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 int FUNC_6 (int ,scalar_t__,int,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_9(struct MPT3SAS_ADAPTER *VAR_2)
{
 u32 VAR_3;
 void *VAR_4;
 struct _sas_device *VAR_5;
 struct _raid_device *VAR_6;
 struct _pcie_device *VAR_7;
 u16 VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;


 if (!VAR_2->bios_pg3.BiosVersion)
  return;

 VAR_4 = ((void*)0);
 if (VAR_2->req_boot_device.device) {
  VAR_4 = VAR_2->req_boot_device.device;
  VAR_3 = VAR_2->req_boot_device.channel;
 } else if (VAR_2->req_alt_boot_device.device) {
  VAR_4 = VAR_2->req_alt_boot_device.device;
  VAR_3 = VAR_2->req_alt_boot_device.channel;
 } else if (VAR_2->current_boot_device.device) {
  VAR_4 = VAR_2->current_boot_device.device;
  VAR_3 = VAR_2->current_boot_device.channel;
 }

 if (!VAR_4)
  return;

 if (VAR_3 == VAR_1) {
  VAR_6 = VAR_4;
  VAR_12 = FUNC_6(VAR_2->shost, VAR_1,
      VAR_6->id, 0);
  if (VAR_12)
   FUNC_1(VAR_2, VAR_6);
 } else if (VAR_3 == VAR_0) {
  FUNC_7(&VAR_2->pcie_device_lock, VAR_11);
  VAR_7 = VAR_4;
  VAR_13 = VAR_7->id;
  FUNC_3(&VAR_7->list, &VAR_2->pcie_device_list);
  FUNC_8(&VAR_2->pcie_device_lock, VAR_11);
  VAR_12 = FUNC_6(VAR_2->shost, VAR_0, VAR_13, 0);
  if (VAR_12)
   FUNC_0(VAR_2, VAR_7);
 } else {
  FUNC_7(&VAR_2->sas_device_lock, VAR_11);
  VAR_5 = VAR_4;
  VAR_8 = VAR_5->handle;
  VAR_9 = VAR_5->sas_address_parent;
  VAR_10 = VAR_5->sas_address;
  FUNC_3(&VAR_5->list, &VAR_2->sas_device_list);
  FUNC_8(&VAR_2->sas_device_lock, VAR_11);

  if (VAR_2->hide_drives)
   return;
  if (!FUNC_4(VAR_2, VAR_8,
      VAR_9)) {
   FUNC_2(VAR_2, VAR_5);
  } else if (!VAR_5->starget) {
   if (!VAR_2->is_driver_loading) {
    FUNC_5(VAR_2,
        VAR_10,
        VAR_9);
    FUNC_2(VAR_2, VAR_5);
   }
  }
 }
}
