
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {size_t target_id; int scsi_cmd; } ;
typedef TYPE_3__ ips_scb_t ;
struct TYPE_12__ {TYPE_2__* logical_drive_info; } ;
typedef TYPE_4__ ips_ha_t ;
typedef int cap ;
struct TYPE_13__ {void* len; void* lba; } ;
struct TYPE_10__ {TYPE_1__* drive_info; } ;
struct TYPE_9__ {int sector_count; } ;
typedef TYPE_5__ IPS_SCSI_CAPACITY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(ips_ha_t * VAR_1, ips_scb_t * VAR_2)
{
 IPS_SCSI_CAPACITY VAR_3;

 FUNC_0("ips_rdcap", 1);

 if (FUNC_4(VAR_2->scsi_cmd) < 8)
  return (0);

 VAR_3.lba =
     FUNC_1(FUNC_3
   (VAR_1->logical_drive_info->
    drive_info[VAR_2->target_id].sector_count) - 1);
 VAR_3.len = FUNC_1((uint32_t) VAR_0);

 FUNC_2(VAR_2->scsi_cmd, &VAR_3, sizeof (VAR_3));

 return (1);
}
