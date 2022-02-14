
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct qla_hw_data {scalar_t__ fw_major_version; scalar_t__ fw_minor_version; scalar_t__ fw_subminor_version; scalar_t__ prev_minidump_failed; int fw_dumped; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(scsi_qla_host_t *VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 uint16_t VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_0;

 VAR_6 = VAR_5->fw_major_version;
 VAR_7 = VAR_5->fw_minor_version;
 VAR_8 = VAR_5->fw_subminor_version;

 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9 != VAR_0)
  return VAR_9;

 if (VAR_1) {
  if (!VAR_5->fw_dumped) {
   if ((VAR_6 != VAR_5->fw_major_version ||
       VAR_7 != VAR_5->fw_minor_version ||
       VAR_8 != VAR_5->fw_subminor_version) ||
       (VAR_5->prev_minidump_failed)) {
    FUNC_0(VAR_2, VAR_4, 0xb02d,
        "Firmware version differs Previous version: %d:%d:%d - New version: %d:%d:%d, prev_minidump_failed: %d.\n",
        VAR_6, VAR_7,
        VAR_8,
        VAR_5->fw_major_version,
        VAR_5->fw_minor_version,
        VAR_5->fw_subminor_version,
        VAR_5->prev_minidump_failed);

    FUNC_3(VAR_4);

    FUNC_4(VAR_4);
   }
  } else
   FUNC_1(VAR_3, VAR_4, 0xb02e,
       "Firmware dump available to retrieve\n");
 }
 return VAR_9;
}
