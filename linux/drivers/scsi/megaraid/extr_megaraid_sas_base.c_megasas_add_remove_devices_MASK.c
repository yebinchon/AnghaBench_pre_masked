
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct scsi_device {int dummy; } ;
struct megasas_instance {int* ld_ids; TYPE_4__* pd_list; struct MR_HOST_DEVICE_LIST* host_device_list_buf; scalar_t__ enable_fw_dev_list; struct Scsi_Host* host; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_5__ {scalar_t__ is_sys_pd; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct MR_HOST_DEVICE_LIST_ENTRY {int target_id; TYPE_3__ flags; } ;
struct MR_HOST_DEVICE_LIST {int count; struct MR_HOST_DEVICE_LIST_ENTRY* host_device_list; } ;
struct TYPE_8__ {scalar_t__ driveState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct Scsi_Host*,int,int,int ) ;
 struct scsi_device* FUNC_3 (struct Scsi_Host*,int,int,int ) ;
 int FUNC_4 (struct scsi_device*) ;

__attribute__((used)) static
void FUNC_5(struct megasas_instance *VAR_6,
    int VAR_7)
{
 int VAR_8, VAR_9;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0, VAR_13 = 0;
 struct Scsi_Host *VAR_14;
 struct scsi_device *VAR_15;
 struct MR_HOST_DEVICE_LIST *VAR_16 = ((void*)0);
 struct MR_HOST_DEVICE_LIST_ENTRY *VAR_17 = ((void*)0);

 VAR_14 = VAR_6->host;

 if (VAR_6->enable_fw_dev_list) {
  VAR_16 = VAR_6->host_device_list_buf;
  for (VAR_8 = 0; VAR_8 < VAR_16->count; VAR_8++) {
   VAR_17 = &VAR_16->host_device_list[VAR_8];
   if (VAR_17->flags.u.bits.is_sys_pd) {
    VAR_12 = FUNC_0(VAR_17->target_id) /
      VAR_0;
    VAR_13 = FUNC_0(VAR_17->target_id) %
      VAR_0;
   } else {
    VAR_12 = VAR_2 +
       (FUNC_0(VAR_17->target_id) /
        VAR_0);
    VAR_13 = FUNC_0(VAR_17->target_id) %
      VAR_0;
   }
   VAR_15 = FUNC_3(VAR_14, VAR_12, VAR_13, 0);
   if (!VAR_15) {
    FUNC_2(VAR_14, VAR_12, VAR_13, 0);
   } else {
    FUNC_4(VAR_15);
   }
  }
 }

 if (VAR_7 & VAR_4) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
    VAR_10 = VAR_8 * VAR_0 + VAR_9;
    VAR_15 = FUNC_3(VAR_14, VAR_8, VAR_9, 0);
    if (VAR_6->pd_list[VAR_10].driveState ==
       VAR_3) {
     if (!VAR_15)
      FUNC_2(VAR_14, VAR_8, VAR_9, 0);
     else
      FUNC_4(VAR_15);
    } else {
     if (VAR_15)
      FUNC_1(VAR_15);
    }
   }
  }
 }

 if (VAR_7 & VAR_5) {
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
    VAR_11 = (VAR_8 * VAR_0) + VAR_9;
    VAR_15 = FUNC_3(VAR_14,
      VAR_2 + VAR_8, VAR_9, 0);
    if (VAR_6->ld_ids[VAR_11] != 0xff) {
     if (!VAR_15)
      FUNC_2(VAR_14, VAR_2 + VAR_8, VAR_9, 0);
     else
      FUNC_4(VAR_15);
    } else {
     if (VAR_15)
      FUNC_1(VAR_15);
    }
   }
  }
 }

}
