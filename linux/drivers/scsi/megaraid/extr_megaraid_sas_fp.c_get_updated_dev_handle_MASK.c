
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct megasas_instance {int dummy; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;
struct LD_LOAD_BALANCE_INFO {int * scsi_pending_cmds; } ;
struct IO_REQUEST_INFO {int pd_interface; } ;
typedef int __le16 ;


 int FUNC_0 (size_t,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_1 (size_t,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (struct megasas_instance*,struct LD_LOAD_BALANCE_INFO*,struct IO_REQUEST_INFO*,struct MR_DRV_RAID_MAP_ALL*) ;

__le16 FUNC_4(struct megasas_instance *VAR_0,
         struct LD_LOAD_BALANCE_INFO *VAR_1,
         struct IO_REQUEST_INFO *VAR_2,
         struct MR_DRV_RAID_MAP_ALL *VAR_3)
{
 u8 VAR_4;
 __le16 VAR_5;


 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_5 = FUNC_0(VAR_4, VAR_3);
 VAR_2->pd_interface = FUNC_1(VAR_4, VAR_3);
 FUNC_2(&VAR_1->scsi_pending_cmds[VAR_4]);

 return VAR_5;
}
