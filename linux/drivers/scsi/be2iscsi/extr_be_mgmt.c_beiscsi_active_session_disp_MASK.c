
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int ulp_supported; } ;
struct beiscsi_hba {TYPE_1__ fw_config; } ;
struct Scsi_Host {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (struct beiscsi_hba*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct beiscsi_hba*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 struct beiscsi_hba* FUNC_3 (struct Scsi_Host*) ;
 scalar_t__ FUNC_4 (char*,scalar_t__,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,void*) ;

ssize_t
FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_2(VAR_2);
 struct beiscsi_hba *VAR_6 = FUNC_3(VAR_5);
 uint16_t VAR_7 = 0, VAR_8, VAR_9 = 0, VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (FUNC_5(VAR_8, (void *)&VAR_6->fw_config.ulp_supported)) {
   VAR_7 = FUNC_1(VAR_6, VAR_8);
   VAR_10 = FUNC_0(VAR_6, VAR_8);
   VAR_9 += FUNC_4(VAR_4+VAR_9, VAR_1 - VAR_9,
     "ULP%d : %d\n", VAR_8,
     (VAR_10 - VAR_7));
  } else
   VAR_9 += FUNC_4(VAR_4+VAR_9, VAR_1 - VAR_9,
     "ULP%d : %d\n", VAR_8, 0);
 }

 return VAR_9;
}
