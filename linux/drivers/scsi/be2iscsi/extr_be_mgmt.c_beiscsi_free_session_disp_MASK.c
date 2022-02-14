
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


 int FUNC_0 (struct beiscsi_hba*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 struct beiscsi_hba* FUNC_2 (struct Scsi_Host*) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,char*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,void*) ;

ssize_t
FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
         char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_2);
 struct beiscsi_hba *VAR_6 = FUNC_2(VAR_5);
 uint16_t VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (FUNC_4(VAR_7, (void *)&VAR_6->fw_config.ulp_supported))
   VAR_8 += FUNC_3(VAR_4+VAR_8, VAR_1 - VAR_8,
     "ULP%d : %d\n", VAR_7,
     FUNC_0(VAR_6, VAR_7));
  else
   VAR_8 += FUNC_3(VAR_4+VAR_8, VAR_1 - VAR_8,
     "ULP%d : %d\n", VAR_7, 0);
 }

 return VAR_8;
}
