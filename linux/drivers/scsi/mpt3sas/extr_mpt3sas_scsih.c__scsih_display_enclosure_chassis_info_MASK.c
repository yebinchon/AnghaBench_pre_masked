
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_target {int dummy; } ;
struct scsi_device {int dummy; } ;
struct _sas_device {scalar_t__ enclosure_handle; char* connector_name; int chassis_slot; scalar_t__ is_chassis_slot_valid; int enclosure_level; int slot; scalar_t__ enclosure_logical_id; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,int ,...) ;
 int FUNC_1 (int ,struct scsi_device*,char*,unsigned long long,...) ;
 int FUNC_2 (int ,struct scsi_target*,char*,unsigned long long,...) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1,
 struct _sas_device *VAR_2, struct scsi_device *VAR_3,
 struct scsi_target *VAR_4)
{
 if (VAR_3) {
  if (VAR_2->enclosure_handle != 0)
   FUNC_1(VAR_0, VAR_3,
       "enclosure logical id (0x%016llx), slot(%d) \n",
       (unsigned long long)
       VAR_2->enclosure_logical_id,
       VAR_2->slot);
  if (VAR_2->connector_name[0] != '\0')
   FUNC_1(VAR_0, VAR_3,
       "enclosure level(0x%04x), connector name( %s)\n",
       VAR_2->enclosure_level,
       VAR_2->connector_name);
  if (VAR_2->is_chassis_slot_valid)
   FUNC_1(VAR_0, VAR_3, "chassis slot(0x%04x)\n",
       VAR_2->chassis_slot);
 } else if (VAR_4) {
  if (VAR_2->enclosure_handle != 0)
   FUNC_2(VAR_0, VAR_4,
       "enclosure logical id(0x%016llx), slot(%d) \n",
       (unsigned long long)
       VAR_2->enclosure_logical_id,
       VAR_2->slot);
  if (VAR_2->connector_name[0] != '\0')
   FUNC_2(VAR_0, VAR_4,
       "enclosure level(0x%04x), connector name( %s)\n",
       VAR_2->enclosure_level,
       VAR_2->connector_name);
  if (VAR_2->is_chassis_slot_valid)
   FUNC_2(VAR_0, VAR_4,
       "chassis slot(0x%04x)\n",
       VAR_2->chassis_slot);
 } else {
  if (VAR_2->enclosure_handle != 0)
   FUNC_0(VAR_1, "enclosure logical id(0x%016llx), slot(%d)\n",
     (u64)VAR_2->enclosure_logical_id,
     VAR_2->slot);
  if (VAR_2->connector_name[0] != '\0')
   FUNC_0(VAR_1, "enclosure level(0x%04x), connector name( %s)\n",
     VAR_2->enclosure_level,
     VAR_2->connector_name);
  if (VAR_2->is_chassis_slot_valid)
   FUNC_0(VAR_1, "chassis slot(0x%04x)\n",
     VAR_2->chassis_slot);
 }
}
